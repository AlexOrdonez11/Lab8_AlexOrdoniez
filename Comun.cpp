#include "Comun.h"
#include"Heroe.h"
Comun::Comun(int debilidad):Mounstro(8,0,5,debilidad){

}
void Comun::Vencido(Heroe*& heroe){
	heroe->setDinero(heroe->getDinero()+4);
}
