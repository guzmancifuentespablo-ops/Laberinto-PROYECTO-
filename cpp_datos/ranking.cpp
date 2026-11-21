// # PROYECTO INTEGRADOR JUEGO LABERINTO  equipo 4  (Pablo Guzman   Andres Simba  Kenneth  Viteri)
// Responsable: Equipo 4
// Archivo: ranking.cpp
// Descripción: Gestión de partidas y organización del ranking.

#include <iostream>
#include <cstring>
#include "nodo.h"

using namespace std;

// Insertar una partida en la lista enlazada
void insertarPartida(Partida*& cabeza, Partida nueva) {

    Partida* nodoNuevo = new Partida;

    strcpy(nodoNuevo->apodo, nueva.apodo);
    nodoNuevo->nivel = nueva.nivel;
    strcpy(nodoNuevo->resultado, nueva.resultado);
    nodoNuevo->tiempo = nueva.tiempo;

    nodoNuevo->siguiente = cabeza;
    cabeza = nodoNuevo;
}

// Mostrar las partidas registradas
void mostrarPartidas(Partida* cabeza) {

    cout << "\nHISTORIAL DE PARTIDAS\n";

    while (cabeza != nullptr) {

        cout << "Jugador: " << cabeza->apodo << endl;
        cout << "Nivel: " << cabeza->nivel << endl;
        cout << "Resultado: " << cabeza->resultado << endl;
        cout << "Tiempo: " << cabeza->tiempo << " segundos" << endl;

        cout << "----------------------\n";

        cabeza = cabeza->siguiente;
    }
}
