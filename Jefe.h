#ifndef JEFE_H
#define JEFE_H
#include<string>
#include"Mounstro.h"
#include"Heroe.h"
using namespace std;

class Jefe:public Mounstro{
	public:
		void Vencido(Heroe*&);
		Jefe(int);
};
#endif
