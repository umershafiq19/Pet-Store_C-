#include "Customer.h"

Customer::Customer(char* aname, char* anum, char* aemail, char* astreet, char* acity, char* astate, int postal, char* countrya):d1(astreet,acity,astate,postal,countrya)
{
	if (aname != nullptr)
	{
		int size = strlen(aname);
		name = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			name[i] = aname[i];
		}
		name[size] = '\0';
	}
	else
	{
		name = nullptr;
	}if (anum != nullptr)
	{
		int size = strlen(anum);
		number = new char[size];
		for (int i = 0; i < size; i++)
		{
			number[i] = anum[i];
		}
		number[size] = '\0';

	}
	else
	{
		number = nullptr;
	}
	if (aemail != nullptr)
	{
		int size = strlen(aemail);
		for (int i = 0; i < size; i++)
		{
			email[i] = aemail[i];
		}
		email[size] = '\0';
	}
	else {
		email = nullptr;
	}
}
void Customer::setName(char* aname)
{
	if (aname != nullptr)
	{
		int size = strlen(aname);
		name = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			name[i] = aname[i];
		}
		name[size] = '\0';
	}
	else name = nullptr;

}
void Customer::setNum(char* anum)
{
	if (anum != nullptr)
	{
		int size = strlen(anum);
		number = new char[size];
		for (int i = 0; i < size; i++)
		{
			number[i] = anum[i];
		}
		number[size] = '\0';

	}
	else
		number = nullptr;

}
void Customer::setEmail(char* aemail)
{
	if (aemail != nullptr)
	{
		int size = strlen(aemail);
		for (int i = 0; i < size; i++)
		{
			email[i] = aemail[i];
		}
		email[size] = '\0';
	}
	else email = nullptr;

}
const char* Customer::getname() const
{
	return name;
}
const char* Customer::getEmail() const
{
	return email;
}
const char* Customer::getnum() const
{
	return number;
}
istream& operator>>(istream& is, Customer& obj)
{
	is.ignore();
	cout << "\tENTER NAME: ";
	obj.name = new char[30];
	is.getline(obj.name, 30);
	cout << "\tENTER NUMBER: ";
	is.ignore();
	obj.number = new char[20];
	is >> obj.number;
	cout << "\tENTER EMAIL: ";
	obj.email = new char[30];
	is.ignore();
	is >> obj.email;
	is >> obj.d1;
	return is;
}
ostream& operator<<(ostream& os, Customer& obj)
{
	os << "\tNAME: " << obj.getname() << endl;
	os << "\tNumber: " << obj.getnum() << endl;
	os << "\tEMAIL: " << obj.getEmail() << endl;
	os << obj.d1 << endl;
	return os;
}