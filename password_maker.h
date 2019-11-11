#ifndef PASSWORD_MAKER_H
#define PASSWORD_MAKER_H

#include <iostream>
#include <vector>
#include <QString>

class password_maker
{

    std::vector<std::string> data;
    std::string password;
    int i_p();
    int lives[2]={0,0};

public:

    std::string flor_table;

    password_maker();

    void new_password();

    void chek(const char a);

    QString pic();

    void win();

};

#endif // PASSWORD_MAKER_H
