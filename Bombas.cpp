#include"Bombas.h"
#include<string>
#include"Mounstro.h"

Bombas::Bombas(string nombre,string color):Item(nombre,color){
	
}
void Bombas::Ataque(Mounstro*& mon){
	mon->setVida(mon->getVida()+mon->getDef()-10);
}
