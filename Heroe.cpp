#include "Heroe.h"
#include "Item.h"

Heroe::Heroe(string nombre,int dinero,int dano,int defensa){
	this->dinero=dinero;
	this->nombre=nombre;
	this->dano=dano;
	vida=12;
	vidastot=12;
	this->defensa=defensa;
}
int Heroe::getDinero(){
	return dinero;
}
void Heroe::setVidast(int i){
	vidastot=vidastot+i;
}
void Heroe::setDinero(int din){
	dinero=din;
}
void Heroe::setVida(int vi){
	vida=vi;
}
Item* Heroe::getltem(){
	return item;
}
void Heroe::setItem(Item* it){
	item=it;
}
int Heroe::getVida(){
	return vida;
}
int Heroe::getDefensa(){
	return defensa;
}
int Heroe::getDano(){
	return dano;
}
bool Heroe::isSpin(){
	return spin;
}
