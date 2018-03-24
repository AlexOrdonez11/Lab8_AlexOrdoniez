#include"Mounstro.h"
#include"Item.h"
#include"Heroe.h"
#include"Joven.h"
#include"Adulto.h"
#include"Bombas.h"
#include"Bumerang.h"
#include"Arco.h"
#include"Jefe.h"
#include"Semijefes.h"
#include"Comun.h"
#include<string>
#include<vector>
#include<iostream>

using namespace std;

Mounstro* CrearMons();
void ElegirItem(Heroe*&);
void Batalla(Heroe*& ,Mounstro*&);
int main(){
	int op=0;
	vector<Mounstro*> monsters;
	cout<<"Ingrese su nombre"<<endl;
	string nombre;
	cin>>nombre;
	cout<<"Ingrese su dinero inicial"<<endl;
	int din;
	cin>>din;
	Heroe* heroe=new Joven(nombre,din);
	while(op!=10){
		cout<<"menu"<<endl;
		cout<<"Agregar Mounstros"<<endl;
		cin>>op;
		int pos;
		if(op==3){
			cout<<"Ingrese el mounstro con el que se desea pelear "<<endl;
			cin>>pos;
		}
		switch(op){
			case 1:
				monsters.push_back(CrearMons());
				break;
			case 2:
				ElegirItem(heroe);
				break;
			case 3:
				Batalla(heroe, monsters[pos]);
				break;
		}
	}
	return 0;
}
void ElegirItem(Heroe*& heroe){
	cout<<"Ingrese el item 1-bumerang 2-arco 3-bomba"<<endl;
	int op;
	cin>>op;
	switch(op){
		case 1:
			heroe->setItem(new Bumerang("Bum","rojo"));
			break;
		case 2:
			heroe->setItem(new Arco("Archer","blue"));
			break;
		case 3:
			heroe->setItem(new Bombas("bomber","yellow"));
	}
			
}
Mounstro* CrearMons(){
	int op,deb;
	cout<<"Que tipo de mounstro desea agregar 1- Jefe 2- semijefe 3- comun y la debilidad 1-bumerang 2-arco 3-bomba"<<endl;
	cin>>op;
	cin>>deb;
	Mounstro* mons;
	switch(op){
		case 1:
			mons=new Jefe(deb);
			break;
		case 2:
			mons=new Semijefe(deb);
			break;
		case 3:
			mons=new Comun(deb);
			break;	
	}
	return mons;
}
void Batalla(Heroe*& heroe,Mounstro*& mons){
	int op=0;
	while(heroe->getVida()!=0&&mons->getVida()!=0&&op!=3){
		cout<<"1-Ataque normal"<<endl;
		cout<<"2-Ataque con item"<<endl;
		cout<<"3-Huir"<<endl;
		if(dynamic_cast<Adulto*>(heroe)!=NULL){
			cout<<"4-Ataque especial"<<endl;
		}
		cin>>op;
		switch(op){
			case 1:
				heroe->Ataque(mons);
				mons->Ataca(heroe);
				break;
			case 2:
				heroe->getltem()->Ataque(mons);
				break;
			case 3:
				dynamic_cast<Adulto*>(heroe)->AtaqueEspecial(mons);
				break;
				
		}
	}
}
