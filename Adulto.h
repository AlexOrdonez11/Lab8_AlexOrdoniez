#ifndef ADULTO_H
#define ADULTO_H
#include "Mounstro.h"
#include <string>
#include"Heroe.h"
using namespace std;

class Adulto:public Heroe{
	public:
		Adulto(string,int);
		void Ataque(Mounstro*&);
		void AtaqueEspecial(Mounstro*&);
};
#endif
