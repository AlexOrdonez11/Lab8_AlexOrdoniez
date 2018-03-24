#ifndef SEMIJEFES_H
#define SEMIJEFES_H
#include"Heroe.h"
#include "Mounstro.h"
using namespace std;

class Semijefe:public Mounstro{
	public:
		Semijefe(int);
		void Vencido(Heroe*&);
};
#endif
