/*   1. Escribe un programa para que lea de la entrada estándar dos números y muestra en la salida estanda su suma, resta
multiplicación y dicisión  */


#include<iostream>
using namespace std;


int main(){
	
	float num1, num2;
	cout<<"Entra el numero 1: "<<endl;
	cin>>num1;
	cout<<"Ahora entra el numero 2"<<endl;
	cin>>num2;
	
	cout<<"Esta es la suma de los números "<<num1+num2<<endl;
	cout<<"Esta es la resta de los números "<<num1-num2<<endl;
	cout<<"Esta es la multiplicación de los números "<<num1*num2<<endl;
	cout<<"Esta es la división de los números "<<num1/num2<<endl;
	return 0;
}
