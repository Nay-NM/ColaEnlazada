#pragma once
#ifndef COLA_H
#define COLA_H

#include <iostream>
#define MAX 20

struct Nodo {
	int elemento;
	struct Nodo* siguiente; //amplia la memoria, no busca un espacio nuevo
};

class Cola{
public:
	Cola();
	~Cola();
	void encolar(const int);
	int desencolar();
	int getSiguiente();
	bool encontrarElemento(int);

private:
	Nodo* cabeza;
	Nodo* ultimo;
	bool estaVacia();

};

#endif