#include "mod5.h"
#include<iostream>
#include<string>
using namespace std;

namespace VendingMachine
{

	Snek::Snek()
	{
		name = "empty";
		price = 0;
	}

	Snek::Snek(string Name)
	{
		this->name = Name;
	}

	Snek::Snek(string Name, int Price)
	{
		this->name = Name;
		this->price = Price;
	}

	Snek::~Snek()
	{

	}

	void Snek::print()
	{		
		cout << name << endl;
		cout << price << endl;
	}

	string Snek::getname() const
	{
		return name;
	}

	void Snek::setname(string value)
	{
		name = value;
	}

	int Snek::getprice() const
	{
		return price;
	}

	void Snek::setprice(int value)
	{
		price = value;
	}
	///////////////////////////////////
}

namespace VendingMachine
{
	
		slot::slot()
		{}	
		slot::slot(int)
		{			
			NumSlota;
		}
		slot::~slot()
		{}
		
		void slot::addMars(Snek arrM)
		{
			if (M >= 5)
				return;
			arrMars[M] = arrM;
			M++;
		}
		void slot::addTwix(Snek arrT)
		{
			if (T >= 5)
				return;
			arrTwix[T] = arrT;
			T++;
		}
		void slot::addNuts(Snek arrN)
		{
			if (N >= 5)
				return;
			arrNuts[N] = arrN;
			N++;
		}	
		void slot::show() 
		{			
			for (int M = 0; M < 5; M++)
			{
				arrMars[M].print();
			}
			for (int T = 0; T < 5; T++)
			{
				arrTwix[T].print();
			}
			for (int N = 0; N < 5; N++)
			{
				arrNuts[N].print();
			}
			showFree();
		}
		void slot::showFree()
		{
			printf("Free slot for Mars=%i\n", (5 - M));
			printf("Free slot for Twix=%i\n", (5 - T));
			printf("Free slot for Nuts=%i\n", (5 - N));
		}

		//////

		machine::machine(){}

		machine::machine(int)
		{
			S = 0;
		}

		machine::~machine()
		{}		

		void machine::addSlot(slot arrS)
		{
			if (S >= 3)
				return;
			else
			{
				arrForSnec[S] = arrS;
				S++;
			}
					
		}

		
		
}
