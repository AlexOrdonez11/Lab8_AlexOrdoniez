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
#include<fstream>

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
	Heroe* heroe2=heroe;
	while(op!=10){
		cout<<"menu"<<endl;
		cout<<"1-Agregar Mounstros"<<endl;
		cout<<"2-Elegir Item"<<endl;
		cout<<"3-Batallar"<<endl;
		cout<<"4-Eliminar"<<endl;
		cout<<"5-Sacar Espada"<<endl;
		cout<<"6-Meter Espada"<<endl;
		cout<<"7-Tienda"<<endl;
		cin>>op;
		int pos;
		if(op==3){
			cout<<"Ingrese el mounstro con el que se desea pelear o eliminar "<<endl;
			cin>>pos;
		}
		int tienda;
		switch(op){
			case 1:
				monsters.push_back(CrearMons());
				break;
			case 2:
				ElegirItem(heroe);
				break;
			case 3:
				if(monsters.size()>0){
					Batalla(heroe, monsters[pos]);
				}
				break;
			case 4:
				monsters.erase(monsters.begin()+pos);
				break;
			case 5:
				heroe=new Adulto(heroe2->getNombre(),heroe2->getDinero());
				delete heroe2;
				heroe2=heroe;
				break;
			case 6:
				heroe=new Joven(heroe2->getNombre(),heroe2->getDinero());
				delete heroe2;
				heroe2=heroe;	
			case 7:
				cout<<"Desea comprar corazon [0/1]:"<<endl;
				cin>>tienda;
				if(tienda==0){
					heroe->setDinero(heroe->getDinero()-200);
					heroe->setVidast(4);
				}
				break;	
		}
	}
	return 0;
}
void read(Heroe*& kind){
	ifstream in("Partida.jd",ios::binary);
	int vida;
	in.read(reinterpret_cast<char*>(&vida),sizeof(int));
	kind->setVida(vida);
	int jefes;
	in.read(reinterpret_cast<char*>(&jefes),sizeof(int));
	kind->setJefe(jefes);
	int tipo;
	in.read(reinterpret_cast<char*>(&tipo),sizeof(int));
	switch(tipo){
		case 1:
			kind->setItem(new Bumerang("Bum","rojo"));
			break;
		case 2:
			kind->setItem(new Arco("Archer","blue"));
			break;
		case 3:
			kind->setItem(new Bombas("Bomber","Black"));

	}
	int dinero;
	in.read(reinterpret_cast<char*>(&dinero),sizeof(int));
	kind->setDinero(dinero);
}
void write(Heroe* lik){
	int live=lik->getVida();
	int dinero=lik->getDinero();
	int jefes=lik->getJefes();
	int item;
	if(dynamic_cast<Bumerang*>(lik->getltem())!=NULL){
		item=1;
	}else{
		if(dynamic_cast<Arco*>(lik->getltem())!=NULL){
			item=2;
		}else{
			item=3;
		}
	}
	ofstream out("Partida.jd",ios::binary);
	if(out.is_open()){
		out.write(reinterpret_cast<char*>(&live),sizeof(int));
		out.write(reinterpret_cast<char*>(&jefes),sizeof(int));
		out.write(reinterpret_cast<char*>(&item),sizeof(int));
		out.write(reinterpret_cast<char*>(&dinero),sizeof(int));
		out.close();
	}
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
			case 4:
				dynamic_cast<Adulto*>(heroe)->AtaqueEspecial(mons);
				break;
				
		}
	}
	if(heroe->getVida()==0||op==3){
		cout<<"HA perdido"<<endl;
		heroe->setDinero(heroe->getDinero()/2);
	}else{
		cout<<"ha ganado"<<endl;
		mons->Vencido(heroe);
	}
}
