# Proyecto:  ( Pablo Guzman   Andres Simba  Kenneth  Viteri ) 
# Responsable: Equipo 4
# Archivo:  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     interfaz.py       <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
# Descripción: Ventana gráfica y representación del laberinto.

import pygame

# Matriz del laberinto
MAPA = [
    [1, 1, 1, 1, 1, 1, 1],
    [1, 0, 0, 0, 1, 2, 1],
    [1, 0, 1, 0, 1, 0, 1],
    [1, 0, 1, 0, 0, 0, 1],
    [1, 0, 1, 1, 1, 0, 1],
    [1, 0, 0, 0, 0, 0, 3],
    [1, 1, 1, 1, 1, 1, 1]
]

# Posición inicial del jugador
jugador = [1, 1]

# Configuración de las celdas
TAMANO_CELDA = 80
N = len(MAPA)

# Colores de los elementos
COLORES = {
    0: (200, 245, 200),  # Camino
    1: (0, 0, 0),        # Pared
    2: (255, 220, 0),    # Llave
    3: (0, 180, 0)      # Puerta
}

NEGRO = (15, 80, 100)


def dibujar(pantalla, mapa, jugador):
    """Dibuja el laberinto y la posición del jugador."""

    pantalla.fill((255, 255, 255))

    # Dibujar las celdas del laberinto
    for fila in range(N):
        for columna in range(N):

            valor = mapa[fila][columna]

            rectangulo = pygame.Rect(
                columna * TAMANO_CELDA,
                fila * TAMANO_CELDA,
                TAMANO_CELDA,
                TAMANO_CELDA
            )

            pygame.draw.rect(
                pantalla,
                COLORES[valor],
                rectangulo
            )

            pygame.draw.rect(
                pantalla,
                (100, 100, 100),
                rectangulo,
                1
            )

    # Dibujar al jugador
    centro_x = jugador[1] * TAMANO_CELDA + TAMANO_CELDA // 2
    centro_y = jugador[0] * TAMANO_CELDA + TAMANO_CELDA // 2

    pygame.draw.circle(
        pantalla,
        NEGRO,
        (centro_x, centro_y),
        TAMANO_CELDA // 3
    )
