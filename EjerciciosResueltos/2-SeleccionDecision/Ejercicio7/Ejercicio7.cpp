#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main(){
	int n, m;
	setlocale(LC_ALL,"spanish");
	
	cout<<"Ingrese un n�mero entero mayor a 0 y menor que 20: ";
	cin>>n;
	
	switch (n)
 {
  case 1: 
  case 11:
           m= n * 2 ;
           cout<<"El doble del n�mero ingresado es: "<<m;
           break;
           
  case 2: 
  case 12:
           m= n * 3 ;
           cout<<"El triple del n�mero ingresado es: "<<m;
           break;     
		   
  case 3: 
  case 13:
           m= n * 4 ;
           cout<<"El cu�druple del n�mero ingresado es: "<<m;
           break;		      
 
  case 4: 
  case 14:
           m= n * 5 ;
           cout<<"El qu�ntuple del n�mero ingresado es: "<<m;
           break;
           
  case 5: 
  case 15:
           m= n * 6 ;
           cout<<"El s�xtuple del n�mero ingresado es: "<<m;
           break;    
		   
  case 6: 
  case 16:
           m= n * 7 ;
           cout<<"El s�ptuple del n�mero ingresado es: "<<m;
           break;
		   
  case 7: 
  case 17:
           m= n * 8 ;
           cout<<"El �ctuple del n�mero ingresado es: "<<m;
           break;	
           
  case 8: 
  case 18:
           m= n * 9 ;
           cout<<"El n�nuple del n�mero ingresado es: "<<m;
           break;       
		      	  
  case 9: 
  case 19:
           m= n * 20 ;
           cout<<"El producto del n�mero ingresado con 20 es: "<<m;
           break;				     
 
  default: 
           cout<<"El n�mero ingresado es incorrecto";
         
 }
	
	
	getch ();
	return 0;

}
