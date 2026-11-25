
import pygame

from interfaz import MAPA, jugador, TAMANO_CELDA, dibujar
from logica import mover

# Inicializar Pygame
pygame.init()

# Configurar ventana
N = len(MAPA)
pantalla = pygame.display.set_mode(
    (N * TAMANO_CELDA, N * TAMANO_CELDA)
)

pygame.display.set_caption("Laberinto de la Llave")

# Configurar reloj
reloj = pygame.time.Clock()

# Direcciones del movimiento
TECLAS = {
    pygame.K_UP: (-1, 0),
    pygame.K_DOWN: (1, 0),
    pygame.K_LEFT: (0, -1),
    pygame.K_RIGHT: (0, 1),
    pygame.K_w: (-1, 0),
    pygame.K_s: (1, 0),
    pygame.K_a: (0, -1),
    pygame.K_d: (0, 1)
}

# Ciclo principal del juego
ejecutando = True

while ejecutando:

    for evento in pygame.event.get():

        if evento.type == pygame.QUIT:
            ejecutando = False

        elif evento.type == pygame.KEYDOWN:

            if evento.key in TECLAS:
                direccion = TECLAS[evento.key]
                jugador = mover(MAPA, jugador, direccion)

    # Dibujar el juego
    dibujar(pantalla, MAPA, jugador)

    pygame.display.flip()
    reloj.tick(30)

# Cerrar Pygame
pygame.quit()
