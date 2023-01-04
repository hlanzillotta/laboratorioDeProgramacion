#include <iostream>
#include <math.h>/*BIBLIOTECA DE LAS FUNCIONES DE MATEMÁTICA:
                   potencia, raíz, seno, coseno, tangente, etc.
                   
                   Raíz cuadrada-> sqrt (argumento);//Retorna float.
                   
				   Potenciación -> pow (base, exponente);//Retorna float.
                   
				   Módulo o valor absoluto -> abs(argumento); //Para int.
                                              fabs(argumento);// Para float.
											    
                   
				  */

using namespace std;

int main () 
{
 //Declaración de variables.
 int numero_entero,resultado_doble, resultado_triple,resultado_raiz;
 
 
 //Cuerpo del programa.
 
 //Ingreso.
 cout<<"Ingrese un numero entero:";
 cin>>numero_entero;
 
 //Proceso.
 resultado_doble = 2 * numero_entero;
 resultado_triple = 3 * numero_entero;
 resultado_raiz = sqrt(numero_entero); 
 
 //Salida.
 cout<<endl<<"El doble es = "<<resultado_doble;
 cout<<endl<<"El triple es = "<<resultado_triple;
 cout<<endl<<"El raiz cuadrada es = "<<resultado_raiz;

//Fin.
return 0;

} 
