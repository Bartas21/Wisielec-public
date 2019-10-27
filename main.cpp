#include <iostream>
#include<stdio.h>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;
// funkcja drukujaca nam na ekran wiadomosc uporzadkowana w calosc by program ladnie wygladal


void DrukujWiadomosc(string wiadomosc, bool DrukujGore = true, bool DrukujDol = true)
{
	if (DrukujGore)
	{
		cout << "+---------------------------------+" << endl;
		cout << "|";
	}
	else
	{
		cout << "|";
	}
	bool przod = true;
	for (int i = wiadomosc.length(); i < 33; i++)
	{
		if (przod)
		{
			wiadomosc = " " + wiadomosc;
		}
		else
		{
			wiadomosc = wiadomosc + " ";
		}
		przod = !przod;
	}
	cout << wiadomosc.c_str();

	if (DrukujDol)
	{
		cout << "|" << endl;
		cout << "+---------------------------------+" << endl;
	}
	else
	{
		cout << "|" << endl;
	}
}
// funkcja rysujaca wisielca
void RysujWisielca(int ilosc_zgadnien = 0)
{
	if (ilosc_zgadnien >= 1)
		DrukujWiadomosc("|", false, false);
	else
		DrukujWiadomosc("", false, false);

	if (ilosc_zgadnien >= 2)
		DrukujWiadomosc("|", false, false);
	else
		DrukujWiadomosc("", false, false);

	if (ilosc_zgadnien >= 3)
		DrukujWiadomosc("O", false, false);
	else
		DrukujWiadomosc("", false, false);

	if (ilosc_zgadnien == 4)
		DrukujWiadomosc("/  ", false, false);

	if (ilosc_zgadnien == 5)
		DrukujWiadomosc("/| ", false, false);

	if (ilosc_zgadnien >= 6)
		DrukujWiadomosc("/|\\", false, false);
	else
		DrukujWiadomosc("", false, false);

	if (ilosc_zgadnien >= 7)
		DrukujWiadomosc("|", false, false);
	else
		DrukujWiadomosc("", false, false);

	if (ilosc_zgadnien == 8)
		DrukujWiadomosc("/", false,false);

	if (ilosc_zgadnien >= 9)
		DrukujWiadomosc("/ \\", false, false);
	else
		DrukujWiadomosc("", false, false);
}
// funkcja drukujaca litery
void DrukujLitery(string wejscie, char z, char to)
{
	string s;
	for (char i = z; i <= to; i++)
	{
		if (wejscie.find(i) == string::npos)
		{
			s += i;
			s += " ";
		}
		else
			s += "  ";
	}
	DrukujWiadomosc(s, false, false);
}
        int menu()
        {
        cout<< "     ****************************************"<<endl;
        cout<< "     *      ---- WYBIERZ KATEGORIE SLOW ----*"<<endl;;
        cout<<"     ****************************************"<<endl;;
        cout<<  "     1.STOLICE"<<endl;
        cout<<  "     2.ZWIERZETA"<<endl;
        cout<<  "     0.Zakoncz program"<<endl;


        int w;
        cin>> w;

        return w;
    }
// funkcja drukujaca wszystkie litery w konsoli z ktorych mozemy korzystac w naszej grze
void dostepne_litery(string taken)
{
	DrukujWiadomosc("Dostepne litery:");
	DrukujLitery(taken, 'a', 'm');
	DrukujLitery(taken, 'n', 'z');
	
}
// funkcja wypisyjaca slowo i sprawdzajaca czy gra zostala wygrana
bool WypiszSlowo_i_SprawdzWygarna(string slowo, string  pudlo)
{
	bool wygrana = true;
	string s;
	for (int i = 0; i < slowo.length(); i++)
	{
		if ( pudlo.find(slowo[i]) == string::npos)
		{
			wygrana = false;
			s += "_ ";
		}
		else
		{
			s += slowo[i];
			s += " ";
		}
	}
	DrukujWiadomosc(s, false);
	return wygrana;
}
// funkcja wczytujaca slowa z pliku oraz wybierajaca losowe slowo
string wczytaj_slowo(string path)
{
	int linijki = 0;
	string slowo;
	vector<string> v;
	ifstream reader(path.c_str());
	if (reader.is_open())
	{
		while (std::getline(reader, slowo))
			v.push_back(slowo);

		int losowa = rand() % v.size();

		slowo = v.at(losowa);
		reader.close();
	}
	return slowo;
}
// funkcja zliczajaca proby w wisielcu
int zli_proby(string slowo, string pudlo)
{
    int error = 0;
	for (int i = 0; i <  pudlo.length(); i++)
	{
		if (slowo.find( pudlo[i]) == string::npos)
			error++;
	}
	return error;
}
// cialo programu. Tutaj zostaly zadaklarowane przydatne zmienne oraz wywowalne funkcje/metody do obslugi programu
int main()
{
    clock_t t1,t2;
    float czas;
    t1=clock();
	srand(time(0));
	string trafy;
	string ukryte;
	string ukryte1;
	ukryte = wczytaj_slowo("stolice.txt");
	ukryte1 = wczytaj_slowo("zwierzeta.txt");
	int proby = 0;
	bool wygrana = false;
	 int wybor = menu();
    string pomoc;
    if(wybor==0)
        {
          exit( 0 );
        }
     if(wybor==1)
        {
            pomoc = ukryte;
        }
        if(wybor==2)
        {
            pomoc = ukryte1;
        }
	do
	{

        system("cls");

		DrukujWiadomosc("WISIELEC");

		DrukujWiadomosc("Bez znakow diakrytycznych!");

		RysujWisielca(proby);

		cout<<"Ilosc prob: "<<proby<<endl;

		dostepne_litery(trafy);

		DrukujWiadomosc("Odgadywane slowo");

		wygrana = WypiszSlowo_i_SprawdzWygarna(pomoc, trafy);

        if (wygrana)
			break;

		char x;
		cout << ">";
		cin >> x;

		if (trafy.find(x) == string::npos)
			trafy += x;

		proby = zli_proby(pomoc, trafy);

	} while (proby <= 9);

	if (wygrana)
    {
        DrukujWiadomosc("WYGRALES!");
		t2=clock();
		czas = ((float)t2-(float)t1)/CLOCKS_PER_SEC;
		cout<<"Odgadniecie slowa zajelo Ci: " << czas <<" sec"<<endl;
    }
	else
    {


		DrukujWiadomosc("Nieodgadniete slowo to:" + pomoc);

    }
	getchar();
	return 0;
}
