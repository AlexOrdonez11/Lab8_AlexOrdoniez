#ifndef COMUN_H
#define COMUN_H
#include<string>
#include "Heroe.h"
#include "Mounstro.h"

using namespace std;

class Comun:public Mounstro{
	public:
		Comun(int);
		void Vencido(Heroe*&);
};
#endif
