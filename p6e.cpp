#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Alumno{
        string nombre;
        int edad;
        double promedio;
};
class Grupo{
        vector<Alumno>alumnos;
        int cantidad;
};
/*A veces cuando creamos programas complejos pueden surgir errores, al realizar operaciones no permitidas, cuando sucede eso el programa se detiene abruptamente y nos suelta un error.
En c++ hay formas de que nosotros creemos una forma en la cual obligamos al programa a continuar con la ejecución arrastrando el error. 
*/
