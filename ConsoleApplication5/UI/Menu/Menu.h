#pragma once
#include"../../Core/ent/market/Market.h"
void menu()
{
	int size, a = 0;
	cout << "<--------------------------------------------------->" << endl;//да, идею менюшки трохы своровала у вас=)
	cout << "|                                                   |" << endl;
	cout << "|  First create an array of stores and populate it  |" << endl;
	cout << "|                                                   |" << endl;
	cout << "<--------------------------------------------------->" << endl;
	cout << "Enter size: "; cin >> size;
	cin.ignore();
	market* magazin = create(size);
	ini(size, magazin);
	/*print(size, magazin);*/
	cin.ignore();
	do
	{
		cout << "<-------------------------------------------------------------->" << endl;
		cout << "|                                                              |" << endl;
		cout << "|  1-Display a store by name                                   |" << endl;
		cout << "|  2-Display a store by geolocation                            |" << endl;
		cout << "|  3-Search for a specific seller in a chain of stores         |" << endl;
		cout << "|  4-Search for a specific pair of shoes in a chain of stores  |" << endl;
		cout << "|  0-EXIT                                                      |" << endl;
		cout << "|                                                              |" << endl;
		cout << "<-------------------------------------------------------------->" << endl;
		cout << "Your answer: ";  cin >> a;
		cin.ignore();
		switch (a)
		{
		case(1):
		{
			cout << "| Display a store by name |" << endl;
			print_title(size, magazin);
			break;
		}
		case(2):
		{
			cout << "| Display a store by geolocation |" << endl;
			print_geolocation(size, magazin);
			break;
		}
		case(3):
		{
			cout << "| Search for a specific seller in a chain of stores |" << endl;
			find_seller(size, magazin);
			break;
		}
		case(4):
		{
			cout << "| Search for a specific pair of shoes in a chain of stores |" << endl;
			find_tapki(size, magazin);
			break;
		}
		}
	} while (a != 0);
}