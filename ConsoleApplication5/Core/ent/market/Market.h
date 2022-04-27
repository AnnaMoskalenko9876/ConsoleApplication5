#pragma once
#include"../../Lib/Lib.h"

struct market
{
	string title;
	string geolocation;
	string tapki[5];
	string salesman;
};
market* create(int size);
void ini(int size, market* magazin);
void print(int size, market* magazin);
void print_title(int size, market* magazin);
void print_geolocation(int size, market* magazin);
void find_seller(int size, market* magazin);
void find_tapki(int size, market* magazin);