#ifndef CODIFICACION_H
#define CODIFICACION_H
#include "Archivos.h"



void codificacion(string name,int method, int n);
string text2bin(string texto);
string bin2text(string binario);
string Metodo1_particion(string binario, int n);
string Metodo1_particion_deco(string binario, int n);
string codificar_grupo(string partido, string partido2);
string metodo2(string archivo,int n);
string metodo2_deco(string binario,int n);
string cambio_posicion(string binario);
string cambio_posicion_deco(string binario);




#endif //CODIFICACION_H
