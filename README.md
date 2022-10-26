# evalunidad3-sincodigo
evalunidad3-sincodigo created by GitHub Classroom
se crearon todos los archivos que se van a utilizar incluyendo los .h y los .c 
se empezo a hacer el archivo de la interfaz incluendo el .h y el .c
se hizo el diagrama de c#

Revisamos documentación y los ejemplos de herencia
Quedamos con 4 funciones principales, recibir los datos, las 2 estrategias, y la salida.
Recibiremos los datos en IStrategy, que tiene la función que heredan la estrategia a y la estrategia b
En la función heredada se reciben los datos, dentro de las estrategias que manipulan y se prepara la impresión
En el contexto está la salida, que no hereda, pero apunta a las funciones de las estrategias, para que se de la impresión

![image](https://user-images.githubusercontent.com/94467746/197920579-badc2714-ec9f-448f-916b-beea66660e16.png)

En el IStrategy, nuestra interfaz, se prototipa la función que será heredada

![image](https://user-images.githubusercontent.com/94467746/197921019-0cbe8caa-fc16-481a-afde-0957c66d2c4d.png)

![image](https://user-images.githubusercontent.com/94467746/197921068-565655eb-50c6-49a0-8ed6-83f8e2eff5ec.png)

Las funciones heredadas, manipulan los datos que tenemos, y preparan su impresión, pero no la sacan

![image](https://user-images.githubusercontent.com/94467746/197921205-f966ba26-7ccd-4382-ae07-051775923e28.png)

En el context, apuntamos a las funciones, e imprimimos.
