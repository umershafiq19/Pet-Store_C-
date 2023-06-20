#include "Address.h"

Address::Address(char* astreet, char* acity, char* astate, int postal, char* countrya)
{
	if (astreet != nullptr)
	{
		int size = strlen(astreet);
		street = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			street[i] = astreet[i];
		}
		street[size] = '\0';
	}
	else
		street = nullptr;
	if (acity != nullptr)
	{
		int size = strlen(acity);
		city = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			city[i] = acity[i];
		}
		city[size] = '\0';
	}
	else city = nullptr;
	if (astate != nullptr)
	{
		int size = strlen(astate);
		state = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			state[i] = astate[i];
		}
		state[size] = '\0';
	}
	else state = nullptr;
	if (postal > 0)
		postalCode = postal;
	else
		postalCode = 0;
	if (countrya != nullptr)
	{
		int size = strlen(countrya);
		country = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			country[i] = countrya[i];
		}
		country[size] = '\0';
	}
	country = nullptr;
}

void Address::setStreet(char* astreet)
{
	if (astreet != nullptr)
	{
		int size = strlen(astreet);
		street = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			street[i] = astreet[i];
		}
		street[size] = '\0';
	}
	else
		street = nullptr;

}

void Address::setCity(char* acity)
{
	if (acity != nullptr)
	{
		int size = strlen(acity);
		city = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			city[i] = acity[i];
		}
		city[size] = '\0';
	}
	else city = nullptr;

}

void Address::setState(char* astate)
{
	if (astate != nullptr)
	{
		int size = strlen(astate);
		state = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			state[i] = astate[i];
		}
		state[size] = '\0';
	}
	else state = nullptr;

}

void Address::setPostal(int postal)
{
	if (postal > 0)
		postalCode = postal;
	else
		postalCode = 0;

}

void Address::setCountry(char* countrya)
{
	if (countrya != nullptr)
	{
		int size = strlen(countrya);
		country = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			country[i] = countrya[i];
		}
		country[size] = '\0';
	}
	country = nullptr;

}

const char* Address::getStreet() const
{
	return street;
}

const char* Address::getCity() const
{
	return city;
}

const char* Address::getState() const
{
	return state;
}

int Address::getpostal() const
{
	return postalCode;
}

const char* Address::getCountry() const
{
	return country;
}

istream& operator>>(istream& is, Address& obj)
{
	cout << "\tENTER STREET: ";
	obj.street = new char[15];
	is >> obj.street;
	cout << "\tENTER CITY: ";
	obj.city = new char[15];
	is >> obj.city;
	cout << "\tENTER STATE: ";
	obj.state = new char[15];
	is >> obj.state;
	cout << "\tENTER POSTALCODE: ";
	is >> obj.postalCode;
	cout << "\tENTER COUNTRY: ";
	obj.country = new char[20];
	is.ignore();
	is.getline( obj.country,20);
	return is;
}

ostream& operator<<(ostream& os, Address& obj)
{
	os << "\tSTREET: " << obj.getStreet() << endl;
	os << "\tCITY: " << obj.getCity() << endl;
	os << "\tSTATE: " << obj.getState() << endl;
	os << "\tPOSTAL CODE : " << obj.getpostal() << endl;
	os << "\tCOUNTRY: " << obj.getCountry() << endl;
	return os;
}