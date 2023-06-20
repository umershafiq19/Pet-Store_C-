#pragma once
#include"Address.h"
class Customer
{
	char* name;
	char* number;
	char* email;
	Address d1;
public:
	Customer(char*aname=nullptr,char* anum=nullptr,char*aemail=nullptr, char* astreet = nullptr, char* acity = nullptr, char* astate = nullptr, int postal = 0, char* countrya = nullptr);
	void setName(char* aname);
	void setNum(char* anum);
	void setEmail(char* aemail);
	const char* getname()const;
	const char* getEmail()const;
	const char* getnum()const;
	friend istream& operator >>(istream& is, Customer& obj);
	friend ostream& operator <<(ostream& os, Customer& obj);
};