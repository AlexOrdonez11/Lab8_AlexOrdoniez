#include "Bumerang.h"
#include<string>
#include"Mounstro.h"

Bumerang::Bumerang(string nombre,string color):Item(nombre,color){

}
void Bumerang::Ataque(Mounstro*& mon){
	mon->setVida(mon->getVida()+mon->getDef()-5);
}
