#include "Jefe.h"
#include"Heroe.h"
Jefe::Jefe(int debilidad):Mounstro(32,2,9,debilidad){

}
void Jefe::Vencido(Heroe*& heroe){
	heroe->setJefe();
	heroe->setVida(heroe->getVida()+1);
}
