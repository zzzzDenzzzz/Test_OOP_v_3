#pragma once

#include<string>
#include<iostream>
#include<map>

using namespace std;

class User
{
	map<string, string> user;
	map<string, string>::iterator it = user.begin();
public:
	User();
	~User();
	friend ostream &operator<<(ostream &out, const User &_user);
};