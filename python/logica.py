# PROYECTO INTEGRADOR JUEGO LABERINTO  equipo 4  (Pablo Guzman   Andres Simba  Kenneth  Viteri)
# Responsable: Equipo 4
# Archivo: logica.py
# Descripción: Controla los movimientos del jugador.

def mover(mapa, jugador, direccion):
    """
    Calcula la nueva posición del jugador.
    Impide atravesar paredes o salir del laberinto.
    """

    nueva_fila = jugador[0] + direccion[0]
    nueva_columna = jugador[1] + direccion[1]

    # Comprobar límites del laberinto
    if nueva_fila < 0 or nueva_fila >= len(mapa):
        return jugador

    if nueva_columna < 0 or nueva_columna >= len(mapa[0]):
        return jugador

    # Comprobar si existe una pared
    if mapa[nueva_fila][nueva_columna] == 1:
        return jugador

    # Devolver la nueva posición
    return [nueva_fila, nueva_columna]
