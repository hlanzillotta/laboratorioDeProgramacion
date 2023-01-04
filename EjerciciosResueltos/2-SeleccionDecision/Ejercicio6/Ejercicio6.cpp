#include <iostream>
#include <conio.h>
#include <locale.h> //BIBLIOTECA PARA EL IDIOMA.

using namespace std;

int main()
{
 int codprod, bandera;
 float venta,importetotalventa;
 char  operacion;
 string descripcion;

 //INICIO DEL PROGRAMA
 setlocale(LC_ALL,"spanish");//SETEAR IDIOMA ESPA�OL.
 
 bandera = 0;
 
 cout<<"Ingrese el c�digo de producto:"<<endl;
 cin>>codprod;
 
 cout<<"Ingrese la descripci�n:"<<endl;
 cin.ignore();//LIMPIAR EL BUFFER DE TECLADO.
 
 //getline (entrada est�ndar, variable string); //LEE UNA CADENA DE CARACTERES DE TECLADO Y LA ALMACENA EN UNA VAR. string.
 getline(cin, descripcion);  //PARA QUE EL STRING TOME LOS ESPACIOS.
  
 cout<<"Ingrese el importe de la venta:"<<endl;
 cin>>venta;
 
 cout<<"Ingrese el c�digo de operaci�n (a,b,c,X,Y,Z,D,d):"<<endl;
 cin>>operacion;
 
 //ESTRUCTURA DE SELECCI�N M�LTIPLE EN CASCADA (EN CADA R�TULO EXISTE M�S DE UN VALOR).
 switch (operacion)
 {
  //R�TULO 1
  case 'a': 
  case 'b':
  case 'c':
           importetotalventa = venta;
           break;
  //R�TULO 2
  case 'X': 
  case 'Y':
  case 'Z':
           importetotalventa = venta*1.15; //importetotalventa = venta + (venta*15)/100;
           break;
  //R�TULO 3
  case 'D': 
  case 'd':
           importetotalventa = venta*0.9; //importetotalventa = venta - (venta * 10)/100;
           break;
           
  //DEFAULT (OPCIONAL).
  default: 
           bandera=1;//EL C�DIGO DE OPERACI�N INGRESADO ES ERR�NEO.  
                     
 }//FIN DE LA EST. DE SELECCI�N M�LTIPLE EN CASCADA.
 
 if(bandera == 0)
    {
      cout<<endl<<endl<<"Resultado:"<<endl<<"----------"<<endl;
      cout<<"C�digo de producto: "<<codprod<<endl<<"Descripci�n:"<<descripcion<<endl<<"Importe total de la venta : $"<<importetotalventa;
    }
 else
   {
      cout<<endl<<endl<<"Error de C�digo de operaci�n";
   } 
 
 getch();
 return 0;
     
    
}
