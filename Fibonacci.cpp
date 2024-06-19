 /*
ASIGNATURA: Fundamentos de Programación
DOCENTE: MSc. Ing. Wilson César Callisaya Choquecota
ALUMNO: Jair Mark Mendoza Flores
CÓDIGO: 2024-119004
*/
#include <iostream>
#include <windows.h>
using namespace std;

int vn(int num){
	while (num<0){
		cout<<"Escriba un número positivo: ";
		cin>>num;
	}
	return num;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int nv, num, a, b, c, i;
	cout<<"SERIE FINOBACCI"<<endl;
	cout<<"Introduzca el tope de la serie: ";
	cin>>num;
	// Función para verificar el tope para que sea entero positivo
	nv=vn(num);
	i=1;
	a=0;
	b=1;
	while (i<=nv){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}