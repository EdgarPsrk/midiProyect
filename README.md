# Proyecto midi con arduino.
Se colocan los archivos nesesarios para crear un pequeño controlador midi se requieren 2 archivos adicioanles que son:
- Un [loop midi](https://www.tobias-erichsen.de/software/loopmidi.html), para poder trackear los pulsos del arduino.

- Un [Serial Bridge](https://projectgus.github.io/hairless-midiserial/) para crear un puerto serial  de comunicacion con la interfaz grafica del DAW.

- Se agrega tambien una tabla con las posiciones del teclado midi para el mapeo de estas en el arduino, se recomienda aprender sobre el protocolo midi el cual cuenta con una sintaxis para tener parametros de nota, tono, tiempo de duracion. 
