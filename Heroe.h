#ifndef HEROE_H
#define HEROE_H
#include <string>
#include "Item.h"
using namespace std;
class Mounstro;
class Heroe{
	private:
		int dinero;
		Item* item;
		string nombre;
		int vida;
		int jefes=0;
		int defensa;
		int dano;
		bool spin;
		int vidastot;
	public:
		int getDinero();
		void setVida(int);
		void setDinero(int);
		bool isSpin();
		void setVidast(int);
		Heroe(string,int,int,int);
		Item* getltem();
		void setItem(Item*);
		void setJefe(){jefes=jefes+1;};
		virtual int getVida();
		int getDefensa();
		int getDano();	
		virtual void Ataque(Mounstro*&)=0;
};

#endif
