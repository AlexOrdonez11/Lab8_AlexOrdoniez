#ifndef ITEM_H
#define ITEM_H
#include<string>
#include"Mounstro.h"

using namespace std;

class Item{
	private:
		string nombre;
		string color;
	public:
		Item(string,string);
		virtual void Ataque(Mounstro*&)=0;
};
#endif
