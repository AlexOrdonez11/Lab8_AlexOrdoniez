#include "Mounstro.h"
#include "Heroe.h"
Mounstro::Mounstro(int vida,int def,int dano,int debilidad){
	this->vida=vida;
	this->def=def;
	this->dano=dano;
	this->debilidad=debilidad;
}
int Mounstro::getVida(){
	return vida;
}
int Mounstro::getDef(){
	return def;
}
int Mounstro::getDano(){
	return dano;
}
void Mounstro::setVida(int vit){
	vida=vit;
}
int Mounstro::getDebilidad(){
	return debilidad;
}
void Mounstro::Ataca(Heroe* heroe){
	heroe->setVida(heroe->getVida()+heroe->getDefensa()-dano);
}

