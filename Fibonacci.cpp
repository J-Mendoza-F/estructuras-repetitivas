/*
ASIGNATURA: Fundamentos de Programación
DOCENTE: MSc. Ing. Wilson César Callisaya Choquecota
ALUMNO: Jair Mark Mendoza Flores
CÓDIGO: 2024-119004
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int num, a, b, c, i;
	// i es un iterador para que el "mientras" (while) no se repita infinitamente
	cout<<"SERIE FINOBACCI"<<endl;
	cout<<"Introduzca el tope de la serie: ";
	cin>>num;
	i=1;
	a=0;
	// apoyo para copiar el número anterior de la serie
	b=1;
	// segundo apoyo
	while (i<=num){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
		i=i+1;
	}
	return 0;
}