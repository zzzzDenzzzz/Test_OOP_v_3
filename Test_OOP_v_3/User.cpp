#include "User.h"

ostream &operator<<(ostream &out, const User &_user)
{
    for (auto it = _user.user.begin(); it != _user.user.end(); ++it)
    {
        out << "login: " << it->first << " password: " << it->second << endl;
    }
    return out;
}

User::User()
{
    user.insert(make_pair("login", "password"));
}

User::~User()
{
    user.clear();
}
