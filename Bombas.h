#ifndef BOMBAS_H
#define BOMBAS_H
#include<string>
#include"Mounstro.h"
#include"Item.h"
using namespace std;

class Bombas:public Item{
	public:
		Bombas(string,string);
		void Ataque(Mounstro*&);

};
#endif
