#include "Semijefes.h"
#include "Heroe.h"
Semijefe::Semijefe(int debilidad):Mounstro(18,1,7,debilidad){

}
void Semijefe::Vencido(Heroe*& heroe){
	heroe->setDinero(heroe->getDinero()+100);
}
