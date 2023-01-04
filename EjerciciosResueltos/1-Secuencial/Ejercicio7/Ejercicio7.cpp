//Directivas al procesador -> Archivos de cabecera o headers.
#include <iostream>

using namespace std;

int main () // Inicio del programa principal
{
 //Declaración de todas las variables del programa.
 int persona,boleto,total_dinero;
 
 //Cuerpo del programa.
 
 //Ingreso.
 cout<<"Ingrese la cantidad de personas:";
 cin>>persona;
 
 cout<<"Ingrese el importe de cada boleto:";
 cin>>boleto;
 
 //Proceso.
 total_dinero = ((persona-200) * boleto)  +  (persona - 300) * (boleto - (boleto * 0.2));
 
 //Salida.
 cout<<endl<<"Total recaudado = "<<total_dinero;
   
 return 0;

} // Finalización del programa principal.
