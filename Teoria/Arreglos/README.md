## Arreglos

Un arreglo o array es basicamente una estructura de datos que puede almacenar multiples valores del mismo tipo por ejemplo enteros cadenas entre otros, cada elemento se accede por su indice o index el cual es mencionado o no en el mismo, para mas ejemplificado visualiza un arreglo como una fila de cajitas contadas en las cuales dentro hay alguna cosa como varias cajas de zapatos, en una hay formales, en otra hay unos joldan pirata, y en otra unos adidas, en la caja 0 es donde estan los formales en la 1 los joldan y en la 2 los adidas

esta se escribe de la siguiente manera para cuando aun no tenemos los datos y solo ponemos las cajitas:

```bash
TipodeDato nombredelarreglo [3];
```

Arreglos simplificados, para inicializar un arreglo con datos de la forma mas sencilla basta con mencionar el tipo seguido del identificador e indicar con [] que es un arreglo y para hacerlo mas sencillo aun podemos indicar los espacios unicamente colocando valores como en el siguiente ejemplo

```bash
int arreglo [] = {1,2,3,4,5};
```

En el ejemplo anterior vemos como declaramos el tipo de dato "int" seguido del nombre "arreglo" con [] especificamos que es un arreglo y asignamos los datos {1,2,3,4,5} es decir contando desde el 0 nuestro arreglo posee 4 elementos, lo mismo que decir:

```bash
int arreglo [4] = {1,2,3,4,5};
```
En dado caso que coloquemos algun espacio del arreglo donde no haya ningun valor no tendremos un error si no que tendremos un dato random o basura que estaba en el espacio de memoria donde estaba dicho arreglo

```bash
int arreglo [4] = {1,2,3,4,5};
cout << arreglo[5];

```
