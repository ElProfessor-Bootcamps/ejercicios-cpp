/* 3. Realice un programa que lea de la entrada estandar los siguientes datos de una persona:


Edad: dato de tipo entero.
Sexo: dato de tipo caracter
Altura en metro: Dato de tipo real



Tras leer los datos, el programa debe mostralos en la salida estándar . */

#include<iostream>
using namespace std;

int main(){
	
	
	int edad;
	char sexo;
	float altura;
	
	cout<<"Cual es Tu edad?"<<endl;
	cin>>edad;
	cout<<" Tu sexo es ?"<<endl;
	cin>>sexo;
	cout<<" Tu altura es "<<endl;
	cin>>altura;
	
	cout<<"Tu edad es "<<edad<<" Tu sexo es "<<sexo<<" Tu altura es "<<edad<<endl;
	
	return 0;
}
