#include "Cola.h"

Cola::Cola() : cabeza{ nullptr }, ultimo{ nullptr } {}

Cola::~Cola(){
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        cabeza = cabeza->siguiente;
        delete aux;
        aux = cabeza;
    }
    cabeza = nullptr;
    ultimo = nullptr;
}

void Cola::encolar(const int item){
    Nodo* nuevo;
    try {
        nuevo = new Nodo;
    }
    catch (std::bad_alloc exception) { //colocación de memoria inadecuada
        return;
    }
    nuevo->elemento = item;
    nuevo->siguiente = nullptr;

    if (estaVacia()) {
        cabeza = nuevo;
        ultimo = nuevo;
    }
    else {
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
}

int Cola::desencolar(){
    if (estaVacia())
        return -1;
    Nodo* aux;
    int valor;
    aux = cabeza;
    valor = cabeza->elemento;

    cabeza = cabeza->siguiente;
    if (cabeza == nullptr)
        ultimo = nullptr;
    free(aux); //libera estructuras que se usan de forma temporal
    aux = nullptr;
    return valor;
}

int Cola::getSiguiente(){
    if(estaVacia())
        return -1;
    return cabeza->elemento;
}

bool Cola::encontrarElemento(int valor){
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->elemento == valor)
            return true;
        cabeza = cabeza->siguiente;
        aux = cabeza;
    }
    return false;
}

bool Cola::estaVacia(){
    return (cabeza==nullptr);
}
