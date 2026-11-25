
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include "nodo.h"

using namespace std;

// Funciones definidas en ranking.cpp
void insertarPartida(Partida*& cabeza, Partida nueva);
void mostrarPartidas(Partida* cabeza);

int main() {

    Partida* cabeza = nullptr;

    ifstream archivo("../python/historial.csv");

    if (!archivo.is_open()) {
        cout << "Error: no se pudo abrir el historial." << endl;
        return 1;
    }

    string linea;

    // Ignorar encabezado del CSV
    getline(archivo, linea);

    // Leer registros del historial
    while (getline(archivo, linea)) {

        stringstream separador(linea);

        Partida nueva{};
        string apodo, nivelTexto, resultado, tiempoTexto;

        getline(separador, apodo, ',');
        getline(separador, nivelTexto, ',');
        getline(separador, resultado, ',');
        getline(separador, tiempoTexto, ',');

        if (apodo.empty() || nivelTexto.empty() ||
            resultado.empty() || tiempoTexto.empty()) {
            continue;
        }

        try {
            nueva.nivel = stoi(nivelTexto);
            nueva.tiempo = stoi(tiempoTexto);
        }
        catch (...) {
            continue;
        }

        if (nueva.nivel < 1 || nueva.nivel > 3 ||
            nueva.tiempo < 0 ||
            (resultado != "VICTORIA" && resultado != "DERROTA") ||
            apodo.length() > 20) {
            continue;
        }

        strcpy(nueva.apodo, apodo.c_str());
        strcpy(nueva.resultado, resultado.c_str());

        insertarPartida(cabeza, nueva);
    }

    archivo.close();

    mostrarPartidas(cabeza);

    // Liberar memoria de la lista enlazada
    while (cabeza != nullptr) {
        Partida* temporal = cabeza;
        cabeza = cabeza->siguiente;
        delete temporal;
    }

    return 0;
}
