#include "Arco.h"
#include"Mounstro.h"
#include<string>
Arco::Arco(string nombre,string color):Item(nombre,color){

}
void Arco::Ataque(Mounstro*& mon){
	mon->setVida(mon->getVida()-4);
}	
