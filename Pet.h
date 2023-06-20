#pragma once
#include<iostream>
using namespace std;
class Pet
{
public:
	virtual void menu() = 0;
	virtual void Setselection(int) = 0;
	virtual int getSelection()const = 0;
	virtual int getPrice(int)const = 0;
	virtual const char*getpet(int) = 0;
};

class Cat:public Pet
{
	char** choice;
	int* price;
	int selection;
	public:
		Cat()
		{
			choice = new char* [3];
			choice[0] = new char[15]{ 'P','e','r','s','i','a','n', ' ','C','a','t' };
			choice[1] = new char[15]{ 'S','I','B','E','R','I','A','N',' ','C','A','T' };
			choice[2] = new char[15]{ 'A','M','E','R','I','C','A','N',' ','C','A','T' };
			price = new int[3]{ 5000,3000,4500 };
			selection = 0;
		}	
	void menu()
	{
		cout << "\tCHOOSE 1 FOR " << choice[0] << endl;
		cout << "\tCHOOSE 2 FOR " << choice[1] << endl;
		cout << "\tCHOOSE 3 FOR " << choice[2] << endl;
	}
	void Setselection(int i)
	{
		if (i > 0 && i <= 3)
			selection = --i;
		else
			cout << "\t\tCHOOSE VALID OPTION:   " << endl;
	}
	 int getSelection()const
	{
		return selection;
	}
	 int getPrice(int i)const
	{
		return price[i];
	}
	 const char* getpet(int i)
	 {
		 return choice[i];
	 }
	
 };
class Dog :public Pet
{
	char** choice;
	int* price;
	int selection;
public:
	Dog()
{
	choice = new char* [3];
	choice[0] = new char[15]{ 'L','A','B','R','A','D','O','R'};
	choice[1] = new char[15]{ 'S','I','B','E','R','I','A','N', ' ','H','U','S','K','Y'};
	choice[2] = new char[15]{ 'P','U','G'};
	price = new int[3]{ 25000,32000,45500 };
	selection = 0;
}
	 
	void menu()
	{
		cout << "\tCHOOSE 1 FOR " << choice[0] << endl;
		cout << "\tCHOOSE 2 FOR " << choice[1] << endl;
		cout << "\tCHOOSE 3 FOR " << choice[2] << endl;
	}
	void Setselection(int i)
	{
		if (i > 0 && i <= 3)
			selection = --i;
		else
			cout << "CHOOSE VALID OPTION:   " << endl;
	}
	int getSelection()const
	{
		return selection;
	}
	int getPrice(int i)const
	{
		return price[i];
	} const char* getpet(int i)
	{
		return choice[i];
	}

};
class Fish :public Pet {
	char** choice;
	int* price;
	int selection;
public:
	Fish()
	{
		choice = new char* [3];
		choice[0] = new char[15]{'G','O','L','D',' ','F','I','S','H'};
		choice[1] = new char[15]{ 'B','L','U','E',' ','T','A','N','G'};
		choice[2] = new char[15]{ 'A','S','I','A','N', ' ','A','R','O','W','A','N','A'};
		price = new int[3]{ 2000,3500,7000 };
		selection = 0;
	}
	
	void menu()
	{
		cout << "\tCHOOSE 1 FOR " << choice[0] << endl;
		cout << "\tCHOOSE 2 FOR " << choice[1] << endl;
		cout << "\t\CHOOSE 3 FOR " << choice[2] << endl;
	}
	void Setselection(int i)
	{
		if (i > 0 && i <= 3)
			selection = --i;
		else
			cout << "\t\tCHOOSE VALID OPTION:   " << endl;
	}
	 int getSelection()const
	{
		return selection;
	}
	int getPrice(int i)const
	{
		return price[i];
	}
	const char* getpet(int i)
	{
		return choice[i];
	}

};
class Bird :public Pet {
	char** choice;
	int* price;
	int selection;
public:
	Bird()
	{
		choice = new char* [3];
		choice[0] = new char[15]{ 'P','A','R','O','T'};
		choice[1] = new char[15]{ 'D','O','V','E'};
		choice[2] = new char[15]{ 'F','L','A','M','I','N','G','O'};
		price = new int[3]{ 5000,3000,4500 };
		selection = 0;
	}
	
	void menu()
	{
		cout << "\tCHOOSE 1 FOR " << choice[0] << endl;
		cout << "\tCHOOSE 2 FOR " << choice[1] << endl;
		cout << "\tCHOOSE 3 FOR " << choice[2] << endl;
	}
	void Setselection(int i)
	{
		if (i > 0 && i <= 3)
			selection = --i;
		else
			cout << "\t\tCHOOSE VALID OPTION:   " << endl;
	}
	int getSelection()const
	{
		return selection;
	}
	int getPrice(int i)const
	{
		return price[i];
	}
	const char* getpet(int i)
	{
		return choice[i];
	}

};
