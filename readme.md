Laberinto de la Llave: Escapa de los Monstruos : 

1. Descripción del proyecto
   
• Laberinto de la Llave es un videojuego de lógica desarrollado como parte del Proyecto Integrador de la carrera de Ingeniería en Inteligencia Artificial de la Universidad Internacional del Ecuador (UIDE).

• El objetivo del juego es recorrer diferentes laberintos, encontrar una llave y llegar a la puerta de salida, evitando a los monstruos que persiguen al jugador.

• El proyecto utiliza Python y Pygame para desarrollar la interfaz gráfica y la lógica del videojuego.

• Además, incorpora un módulo independiente en C++ encargado de gestionar el historial de partidas y generar un ranking de desempeño.

3. Objetivos del proyecto

• La lógica del juego (Python): El mapa de cada nivel se construye usando matrices y vectores para controlar los muros, las rutas y los desplazamientos. Para que los enemigos persigan al jugador de manera inteligente, se implementan algoritmos de búsqueda de caminos. Al terminar cada partida, el puntaje y los datos se guardan automáticamente en un archivo CSV.

• La gestión de datos y rankings (C++): Un módulo independiente lee ese historial desde el archivo CSV y organiza toda la información en memoria mediante estructuras de datos dinámicas (como listas enlazadas), permitiendo ordenar los puntajes y mostrar la tabla de mejores jugadores.

3. Tecnologías utilizadas

       Python: desarrollo de la lógica del videojuego.

       Pygame: creación de la interfaz gráfica.

       C++: procesamiento del historial y generación del ranking.

       CSV: almacenamiento e intercambio de información entre los módulos.

        GitHub: control de versiones y colaboración del equipo.

4. Estructura del proyecto
[Uploading image.png…]()



















6. Integrantes y autoría

Proyecto desarrollado por el Equipo 4:    (Pablo Guzman   Andres Simba  Kenneth  Viteri)

Los integrantes del equipo son responsables del diseño, desarrollo y documentación del proyecto.

6. Declaración de uso de recursos y ética

El código fuente y los materiales desarrollados para este proyecto son responsabilidad de los integrantes del equipo.
Se reconoce el uso de herramientas de inteligencia artificial como apoyo para la orientación, revisión y comprensión del código durante el desarrollo. Las decisiones de diseño, adaptación, revisión y validación del proyecto corresponden al equipo.
Las bibliotecas externas utilizadas se reconocen mediante sus respectivos nombres y licencias. Cualquier recurso de terceros que se incorpore será identificado y acreditado en esta documentación.

      7. Licencia
Este proyecto se distribuye bajo la licencia MIT. Consulta el archivo LICENSE para conocer las condiciones de uso, modificación y distribución.
