/*   1. Escribe un programa para que lea de la entrada est�ndar dos n�meros y muestra en la salida estanda su suma, resta
multiplicaci�n y dicisi�n  */


#include<iostream>
using namespace std;


int main(){
	
	float num1, num2;
	cout<<"Entra el numero 1: "<<endl;
	cin>>num1;
	cout<<"Ahora entra el numero 2"<<endl;
	cin>>num2;
	
	cout<<"Esta es la suma de los n�meros "<<num1+num2<<endl;
	cout<<"Esta es la resta de los n�meros "<<num1-num2<<endl;
	cout<<"Esta es la multiplicaci�n de los n�meros "<<num1*num2<<endl;
	cout<<"Esta es la divisi�n de los n�meros "<<num1/num2<<endl;
	return 0;
}
