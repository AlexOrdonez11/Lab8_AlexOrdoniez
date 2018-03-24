#ifndef ARCO_H
#define ARCO_H
#include <string>
#include "Item.h"
#include"Mounstro.h"
class Arco:public Item{
	public:
		Arco(string,string);
		void Ataque(Mounstro*&);
};
#endif
