#pragma once
#include<iostream>
using namespace std;

class Address
{
	char* street;
	char* city;
	char* state;
	int postalCode;
	char* country;
public:
	Address(char* astreet = nullptr, char* acity = nullptr, char* astate = nullptr, int postal = 0, char* countrya = nullptr);
	void setStreet(char* astreet);
	void setCity(char* acity);
	void setState(char* astate);
	void setPostal(int postal);
	void setCountry(char* countrya);
	const char* getStreet()const;
	const char* getCity()const; 
	const char* getState()const;
	int getpostal()const;
	const char* getCountry()const;
	friend istream& operator >>(istream& is,Address&obj);
	friend ostream& operator <<(ostream& os, Address& obj);
};