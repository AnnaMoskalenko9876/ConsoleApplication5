#include"Market.h"

market* create(int size)
{
	market* magazin = new market[size];
	return magazin;
}
void ini(int size, market* magazin)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter title: "; getline(cin, magazin[i].title);
		cout << "Enter geolocation: "; getline(cin, magazin[i].geolocation);
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter " << j + 1 << ")tapki: "; 
			getline(cin, magazin[i].tapki[j]);
		}
		cout << "Enter salesman: "; getline(cin, magazin[i].salesman);
	}
}
void print(int size, market* magazin)
{
	system("cls");
	for (int i = 0; i < size; i++)
	{
		cout << "Title: " << magazin[i].title << "\n";
		cout << "Geolocation: " << magazin[i].geolocation << "\n";
		for (int j = 0; j < 5; j++)
		{
			cout << j + 1 << ")tapki: " << magazin[i].tapki[j];
			cout << endl;
		}
		cout << "Salesman: " << magazin[i].salesman << "\n";
	}
}
void print_title(int size, market* magazin)
{
	string name;
	int k;
	cout << "Enter the title of the store you want to find: "; getline(cin, name);
	for (int i = 0; i < size; i++)
	{
		if (name == magazin[i].title)
		{
			cout << "Title: " << magazin[i].title << "\n";
			cout << "Geolocation: " << magazin[i].geolocation << "\n";
			for (int j = 0; j < 5; j++)
			{
				cout << j + 1 << ")tapki: " << magazin[i].tapki[j];
				cout << endl;
			}
			cout << "Salesman: " << magazin[i].salesman << "\n";
		}
	}
}
void print_geolocation(int size, market* magazin)
{
	string name;
	cout << "Enter the geolocation of the store you want to find: "; getline(cin, name);
	for (int i = 0; i < size; i++)
	{
		if (name == magazin[i].geolocation)
		{
			cout << "Title: " << magazin[i].title << "\n";
			cout << "Geolocation: " << magazin[i].geolocation << "\n";
			for (int j = 0; j < 5; j++)
			{
				cout << j + 1 << ")tapki: " << magazin[i].tapki[j];
				cout << endl;
			}
			cout << "Salesman: " << magazin[i].salesman << "\n";
		}
	}
}
void find_seller(int size, market* magazin)
{
	string name;
	cout << "Enter the name of the seller you want to find: "; getline(cin, name);
	for (int i = 0; i < size; i++)
	{
		if (name == magazin[i].salesman)
		{
			cout << "Title: " << magazin[i].title << "\n";
			cout << "Salesman: " << magazin[i].salesman << "\n";
		}
	}
}
void find_tapki(int size, market* magazin)
{
	string name;
	cout << "enter the tapki you want to find: "; getline(cin, name);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (name == magazin[i].tapki[j])
			{
				cout << "Title: " << magazin[i].title << "\n";
				cout << j + 1 << ")tapki: " << magazin[i].tapki[j];
				cout << endl;
			}
		}
	}
}