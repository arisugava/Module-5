#include <iostream>
#include "mod5.h"
#include<string>
using namespace std;
using namespace VendingMachine;


int main()
{
	slot forSnec (1);
	slot forSnec1 (2);
	slot forSnec2(3);
	Snek mars1("Mars", 25);
	Snek mars2("Mars", 35);
	Snek mars3("Mars", 45);
	Snek twix1("Twix", 11);
	Snek twix2("Twix", 22);
	Snek Nuts1("Nuts", 12);
	Snek Nuts2("Nuts", 22);
	Snek Nuts3("Nuts", 32);
	Snek Nuts4("Nuts", 42);

	forSnec.addMars(mars1);
	forSnec.addMars(mars2);
	forSnec.addMars(mars3);
	forSnec.addTwix(twix1);
	forSnec.addTwix(twix2);
	forSnec.addNuts(Nuts1);
	forSnec.addNuts(Nuts2);
	forSnec.addNuts(Nuts3);
	forSnec.addNuts(Nuts4);

	forSnec.show();
	machine first(1);

	first.addSlot(forSnec);
	forSnec1.show();
	return 0;
}
