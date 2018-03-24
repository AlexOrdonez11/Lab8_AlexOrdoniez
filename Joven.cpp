#include "Joven.h"
#include "Mounstro.h"

Joven::Joven(string nombre,int dinero):Heroe(nombre,dinero,4,2){
	
}
void Joven::Ataque(Mounstro*& mon){
	mon->setVida(mon->getVida()+mon->getDef()-getDano());
}

