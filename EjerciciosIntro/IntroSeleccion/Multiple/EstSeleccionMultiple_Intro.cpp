/*
 ENUNCIADO : Construir un programa que le solicite al usuario el ingreso de un n�mero
             entero, que se corresponde con un n�mero de d�a de la semana (1 y 7), y luego,
             determine e informe el nombre de dicho d�a. 
*/
#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
	int nro;
	string nombre;//VARIABLE DE TIPO string -> ALMACENA CADENA DE CARACTERES O TEXTO.
	
	setlocale(LC_ALL,"Spanish"); //SETEAR IDIOMA ESPA�OL.
	
	//INGRESO.
	cout<<"Ingrese un numero de dia (1-7) : ";
	cin>>nro;
	
	//ESTRUCTURA DE SELECCI�N M�LTIPLE.
	switch(nro)
		  {
	         case 1: nombre = "Lunes"; //UNA CONSTANTE DE TIPO string SE COLOCA ENTRE "".
			         break;//PROVOCA LA SALIDA DEL BLOQUE swtich
			 case 2: nombre = "Martes";
			         break;
		     case 3: nombre = "Mi�rcoles";
			         break;
			 case 4: nombre = "Jueves";
			         break;
			 case 5: nombre = "Viernes";
			         break;
		     case 6: nombre = "S�bado";
			         break;
			 case 7: nombre = "Domingo";
			         break;        
		     default:nombre = "D�a inv�lido";
			         break; 
		  }
	
	//SALIDA.
	cout<<endl<<nombre;
	
	getch();
	return 0;
}
