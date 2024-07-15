#include<iostream>
using namespace std;
struct datos{
	string nombre;
	int dia;
	int mes;
	int ano;
};
int main(){
	int n;
	cout<<"Ingrese el numero de personas: ";cin>>n;
	datos persona [n];
	for(int i=0;i<n;i++){
	    cout<<"Ingrese el nombre de la persona "<<i+1<<": ";cin.ignore();
		getline(cin,persona[i].nombre);
		cout<<"Ingrese el dia de nacimiento de la persona "<<i+1<<": ";cin>>persona[i].dia;
		cout<<"Ingrese el mes de nacimiento de la persona "<<i+1<<":";cin>>persona[i].mes;
		cout<<"Ingrese el ano de nacimiento de la persona "<<i+1<<":";cin>>persona[i].ano;
	}
}
