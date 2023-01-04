/*
 ENUNCIADO : Construir un programa que le solicite al usuario el ingreso de un número
             entero, que se corresponde con un número de día de la semana (1 y 7), y luego,
             determine e informe el nombre de dicho día. 
*/
#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
	int nro;
	string nombre;//VARIABLE DE TIPO string -> ALMACENA CADENA DE CARACTERES O TEXTO.
	
	setlocale(LC_ALL,"Spanish"); //SETEAR IDIOMA ESPAÑOL.
	
	//INGRESO.
	cout<<"Ingrese un numero de dia (1-7) : ";
	cin>>nro;
	
	//ESTRUCTURA DE SELECCIÓN MÚLTIPLE.
	switch(nro)
		  {
	         case 1: nombre = "Lunes"; //UNA CONSTANTE DE TIPO string SE COLOCA ENTRE "".
			         break;//PROVOCA LA SALIDA DEL BLOQUE swtich
			 case 2: nombre = "Martes";
			         break;
		     case 3: nombre = "Miércoles";
			         break;
			 case 4: nombre = "Jueves";
			         break;
			 case 5: nombre = "Viernes";
			         break;
		     case 6: nombre = "Sábado";
			         break;
			 case 7: nombre = "Domingo";
			         break;        
		     default:nombre = "Día inválido";
			         break; 
		  }
	
	//SALIDA.
	cout<<endl<<nombre;
	
	getch();
	return 0;
}
