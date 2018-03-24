#ifndef JOVEN_H
#define JOVEN_H
#include "Mounstro.h"
#include <string>
#include"Heroe.h"

using namespace std;

class Joven:public Heroe{
	public:
		Joven(string,int);
		void Ataque(Mounstro*&);
};
#endif
