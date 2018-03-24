#include "Adulto.h"
#include"Mounstro.h"

Adulto::Adulto(string nombre,int dinero):Heroe(nombre,dinero,8,4){

}
void Adulto::Ataque(Mounstro*& mon){
	mon->setVida(mon->getVida()+mon->getDef()-getDano());
}
void Adulto::AtaqueEspecial(Mounstro*& mon){
	mon->setVida(mon->getVida()+mon->getDef()-12);
}
