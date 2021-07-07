#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int a,b,c;
 float x1, x2;
 cout<< "Ingrese un numero que, sera designado como termino cuadratico " << endl;
 cin>> a;
 cout<< "Ingrese otro numero que, sera designado como termino lineal" << endl;
 cin>> b;
 cout<< "Ingrese un ultimo numero que, sera designado como termino independiente" << endl;
 cin>>c;
 cout<< " los valores ingresados seran ordenados\n en formato ax^2+bx+c correspondientemente "<< endl;
 if(a!=0)
 {
 if ((b*b+4*a*c>0))
 {
      x1= (- b + sqrt(pow (b,2)- 4*a*c ))/(2*a); 
      cout<< "la primer raiz es: "<< x1<< endl; 
      x2= (- b - sqrt(pow (b,2)- 4*a*c ))/(2*a);
      cout << "La segunda raiz es: " << x2<< endl;
 }
 else 
 {
     cout << "No hay raices reales" << endl;
 }
 }
 else 
 cout << "no es una funcion cuadratica" << endl;
return 0;
}