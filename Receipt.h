#pragma once
#include"Pet.h"
#include"Customer.h"
#include"Address.h"
#include"Order.h"
class Receipt
{
	Pet* p;
	Order o1;
	Customer c1;
public:
	Receipt(Pet*& pa, Order& o1a, Customer& c1a)
	{
		p = pa;
		o1 = o1a;
		c1 = c1a;
	}
	friend ostream& operator <<(ostream& os, Receipt& obj)
	{
		cout << endl<<endl<<endl;
		os << "\tCHECKOUT...!!!!!!!\n";
		os << "\tReceipt.....\n";
		os << "\tYOU ORDERED: "<<obj.p->getpet(obj.p->getSelection())<<endl;
		os << "\tQUANTITY: " << obj.o1.getQuantity() << endl;
		os << "\t\TOTAL BILL: " << obj.o1.getPayment() << endl;
		os << "\tCUSTOMER DETAILS: \n" << obj.c1 << endl;
		return os;
	}
};

