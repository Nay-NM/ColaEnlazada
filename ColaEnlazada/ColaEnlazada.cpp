// ColaEnlazada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cola.h"
using namespace std;

int main(){

    Cola fila;

    cout << "Procesando PI...\n";

    cout << "Llega el 3\n";
    fila.encolar(3);
    cout << "Llega el 1\n";
    fila.encolar(1);
    cout << "Llega el 4\n";
    fila.encolar(4);
    cout << "Llega el 1\n";
    fila.encolar(1);

    std::cout << "\n";
    cout << "Extrayendo numeros de PI\n";
    std::cout << "\n";
    cout << "Sale el " << fila.desencolar() << endl;
    cout << "Sale el " << fila.desencolar() << endl;
    cout << "Sale el " << fila.desencolar() << endl;
    cout << "Sale el " << fila.desencolar() << endl;

    cout << fila.encontrarElemento(7);

    return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
