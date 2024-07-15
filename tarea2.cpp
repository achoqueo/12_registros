#include<iostream>
using namespace std;
struct per{
	string nombre;
	int dni;
	int edad;
};
int main(){
	int n;
	per persona [n];
	cout<<"Ingrese el numero de personas: ";cin>>n;
	for(int i=0;i<n;i++){
	    cout<<"Ingrese el nombre de la persona "<<i+1<<": ";cin.ignore();
		getline(cin,persona[i].nombre);
		cout<<"Ingrese el numero de DNI de la persona "<<i+1<<": ";cin>>persona[i].dni;
		cout<<"Ingrese la edad de la persona "<<i+1<<":";cin>>persona[i].edad;
	}
}
