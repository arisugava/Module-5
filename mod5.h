#pragma once
#include<iostream>
#include<string>
using namespace std;


namespace VendingMachine
{
	class Snek
	{
	public:
		Snek();
		Snek(string);
		Snek(string, int);
		~Snek();

		void print();
		
		string getname() const;
		void setname(string);

		int getprice() const;
		void setprice(int);

	private:
		string name;
		int price;
	};

		class slot
		{
		public:
			slot();
			slot(int);
			~slot();

			void show();

			void addNewSlot();
			void addMars(Snek arrM);
			void addTwix(Snek arrT);
			void addNuts(Snek arrN);

			void showFree();			
			
		private:
			int NumSlota = 0;
			int M = 0;
			int T = 0;
			int N = 0;
			Snek arrMars[5];
			Snek arrTwix[5];
			Snek arrNuts[5];			
		};



		class machine
		{
		public:
			machine();
			machine(int);
			~machine();

		

			void addSlot(slot );

			

		private:
			slot arrForSnec[3];
			int S;
		};
}
