#include"Pet.h"
#include"Customer.h"
#include"Address.h"
#include"Order.h"
#include"Receipt.h"
void menu()
{
	cout << "\tWELCOME TO PET SHOP....\n";
	cout << "\tCHOOSE 1 FOR Cat...\n";
	cout << "\tCHOOSE 2 FOR BIRD...\n";
	cout << "\tCHOOSE 3 FOR DOG...\n";
	cout << "\tCHOOSE 4 FOR FISH...\n";
	cout << "\tYOUR CHOICE: ";
}
void header()
{
	cout << "\t\t\t\t***********************************************" << endl<<endl;
	cout << "\t\t\t\t        PET STORE BY Umer Shafiq            " << endl<<endl;
	cout << "\t\t\t\t***********************************************" << endl;
}
int main()
{
	int choice, quantity;
	char check='y';
	Pet* p;
	Customer c1;
	Order o1;

	while (1) {
		system("cls");
		do {
			header();
			cout << endl << endl;
			menu();
			cin >> choice;
		}
		while (choice < 1 || choice > 4);
		if (choice == 1)
			p = new Cat;
		else if (choice == 2)
			p = new Bird;
		else if (choice == 3)
			p = new Dog;
		else
			p = new Fish;
		system("cls");
		header();
		cout << endl<<endl;
		p->menu();
		cout << "\tENTER YOUR CHOICE: ";
		cin >> choice;
		if (choice < 1 || choice>3)
		{
			cout << "\tENTER A VALID CHOICE!!!: ";
			cin >> choice;
		}
		p->Setselection(choice);
		cout << "\tENTER QUANTITY: ";
		cin >> quantity;
		o1.setQuantity(quantity);
		o1.setPrice(p->getPrice(p->getSelection()));
		o1.CalculatePayment();
		system("cls");
		header();
		cout << "\n\n\tCUSTOMER DETAILS....:\n";
		cin >> c1;
		system("cls");
		header();
	Receipt r1(p, o1, c1);
		cout << r1;
	cout << "\tDO YOU WANT TO BUY ANOTHER PET...?: ";
	cout << "\n\tENTER Y OR y for YES....:";
		cin >> check;
		if (check != 'y' && check != 'Y')
			break;
		}
	cout << "\n\t\t\tTHANK YOU FOR SHOPPING...\n";
	cout << "\t\t\tPROGRAM CREATED BY UMER SHAFIQ....!!!!!\n";
	system("pause");
	return 0;
}