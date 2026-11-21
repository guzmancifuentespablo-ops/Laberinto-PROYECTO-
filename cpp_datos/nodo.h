#ifndef NODO_H
#define NODO_H

// Proyecto: Laberinto de la Llave
// Responsable: Equipo 4

struct Partida {
    char apodo[21];
    int nivel;
    char resultado[10];
    int tiempo;

    Partida* siguiente;
};

#endif
