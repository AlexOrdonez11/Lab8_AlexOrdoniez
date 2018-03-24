temp:	main.o Heroe.o Adulto.o Joven.o Mounstro.o Jefe.o Semijefes.o Comun.o Item.o Arco.o Bombas.o Bumerang.o
	g++ main.o Heroe.o Adulto.o Joven.o Mounstro.o Jefe.o Semijefes.o Comun.o Item.o Arco.o Bombas.o Bumerang.o -o temp
main.o:	main.cpp Heroe.h Adulto.h Joven.h Mounstro.h Jefe.h Semijefes.h Comun.h Item.h Arco.h Bombas.h Bumerang.h
	g++ -c main.cpp
Heroe.o:	Item.h Mounstro.h Heroe.h Heroe.cpp
	g++ -c Heroe.cpp
Adulto.o:	Mounstro.h Adulto.cpp Adulto.h
	g++ -c Adulto.cpp
Joven.o:	Mounstro.h Joven.h Joven.cpp
	g++ -c Joven.cpp
Mounstro.o:	Mounstro.h Mounstro.cpp Heroe.h
	g++ -c Mounstro.cpp
Jefe.o:	Heroe.h Jefe.h Jefe.cpp
	g++ -c Jefe.cpp
Semijefes.o: Heroe.h Semijefes.h Semijefes.cpp
	g++ -c Semijefes.cpp
Comun.o:	Heroe.h Comun.h Comun.cpp
	g++ -c Comun.cpp
Item.o:	Item.h Item.cpp
	g++ -c Item.cpp
Arco.o:	Arco.h Arco.cpp Mounstro.h
	g++ -c Arco.cpp
Bombas.o:	Bombas.h Bombas.cpp Mounstro.h
	g++ -c Bombas.cpp
Bumerang:	Bumerang.h Bumerang.cpp Mounstro.h
	g++ -c Bumerang.cpp	
