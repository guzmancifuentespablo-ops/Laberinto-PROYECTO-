// Proyecto: Laberinto de la Llave
// Responsable: Equipo 4
// Archivo: main.cpp
// Descripción: Programa principal del módulo de ranking.

//#include <iostream>
//#include <fstream>
//#include <string>

//using namespace std;

//int main() {

  //  cout << "==================================" << endl;
 //   cout << "   RANKING - LABERINTO DE LA LLAVE" << endl;
 //   cout << "==================================" << endl;

  //  cout << "Modulo de ranking iniciado." << endl;

  //  return 0;
//}



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

    ifstream archivo("../python_juego/historial.csv");

    string linea;

    // Ignorar encabezado del CSV
    getline(archivo, linea);

    // Leer registros del historial
    while (getline(archivo, linea)) {

        stringstream separador(linea);

        Partida nueva;
        string apodo, resultado;

        getline(separador, apodo, ',');
        separador >> nueva.nivel;
        separador.ignore(1);
        getline(separador, resultado, ',');
        separador >> nueva.tiempo;

        if (apodo.empty() || resultado.empty()) {
            continue;
        }

        strncpy(nueva.apodo, apodo.c_str(), 20);
        nueva.apodo[20] = '\0';

        strncpy(nueva.resultado, resultado.c_str(), 9);
        nueva.resultado[9] = '\0';

        insertarPartida(cabeza, nueva);
    }

    archivo.close();

    mostrarPartidas(cabeza);

    return 0;
}
