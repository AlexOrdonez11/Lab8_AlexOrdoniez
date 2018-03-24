#ifndef BUMERANG_H
#define BUMERANG_H
#include<string>
#include"Mounstro.h"
#include"Item.h"
using namespace std;

class Bumerang:public Item{
	public:
		Bumerang(string,string);
		void Ataque(Mounstro*&);
};
#endif
