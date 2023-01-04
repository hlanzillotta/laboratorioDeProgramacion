#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main(){
	int n, m;
	setlocale(LC_ALL,"spanish");
	
	cout<<"Ingrese un número entero mayor a 0 y menor que 20: ";
	cin>>n;
	
	switch (n)
 {
  case 1: 
  case 11:
           m= n * 2 ;
           cout<<"El doble del número ingresado es: "<<m;
           break;
           
  case 2: 
  case 12:
           m= n * 3 ;
           cout<<"El triple del número ingresado es: "<<m;
           break;     
		   
  case 3: 
  case 13:
           m= n * 4 ;
           cout<<"El cuádruple del número ingresado es: "<<m;
           break;		      
 
  case 4: 
  case 14:
           m= n * 5 ;
           cout<<"El quíntuple del número ingresado es: "<<m;
           break;
           
  case 5: 
  case 15:
           m= n * 6 ;
           cout<<"El séxtuple del número ingresado es: "<<m;
           break;    
		   
  case 6: 
  case 16:
           m= n * 7 ;
           cout<<"El séptuple del número ingresado es: "<<m;
           break;
		   
  case 7: 
  case 17:
           m= n * 8 ;
           cout<<"El óctuple del número ingresado es: "<<m;
           break;	
           
  case 8: 
  case 18:
           m= n * 9 ;
           cout<<"El nónuple del número ingresado es: "<<m;
           break;       
		      	  
  case 9: 
  case 19:
           m= n * 20 ;
           cout<<"El producto del número ingresado con 20 es: "<<m;
           break;				     
 
  default: 
           cout<<"El número ingresado es incorrecto";
         
 }
	
	
	getch ();
	return 0;

}
