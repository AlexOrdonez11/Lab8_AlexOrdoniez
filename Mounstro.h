#ifndef MOUNSTRO_H
#define MOUNSTRO_H
#include<string>
using namespace std;
class Heroe;
class Mounstro{
	private:
		int vida;
		int def;
		int dano;
		int debilidad;
	public:
		Mounstro(int,int,int,int);
		void setVida(int);
		int getVida();
		int getDano();
		virtual int getDef();	
		int getDebilidad();
		virtual void Vencido(Heroe*&)=0;
		void Ataca(Heroe*);
};
#endif
