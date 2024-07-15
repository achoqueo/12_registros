#include<iostream>
using namespace std;
struct per{
	string nombre;
	int dni;
	int edad;
};
int main(){
	int n;
	cout<<"Ingrese el numero de personas: ";cin>>n;
	per persona [n];
	for(int i=0;i<n;i++){
	    cout<<"Ingrese el nombre de la persona "<<i+1<<": ";cin.ignore();
		getline(cin,persona[i].nombre);
		cout<<"Ingrese el numero de DNI de la persona "<<i+1<<": ";cin>>persona[i].dni;
		cout<<"Ingrese la edad de la persona "<<i+1<<":";cin>>persona[i].edad;
	}
	int j=0;
	for(int i=0;i<n;i++){
		if(persona[i].edad>50){
			j=j+1;
		}
	} cout<<j<< " persona(s) tiene(n) mas de 50 anos."<<endl;
	double sum=0;
	double pro=0;
	for(int i=0;i<n;i++){
		sum=sum+persona[i].edad;
	}pro=sum/n;
	cout<<"El promedio de edad es "<<pro<<endl;
	cout<<"Los datos de todas las personas ingresadas son los siguientes: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"De la persona nro "<<i+1<<": "<<endl;
		cout<<"Nombre: "<<persona[i].nombre<<endl;
		cout<<"DNI: "<<persona[i].dni<<endl;
		cout<<"Edad: "<<persona[i].edad<<endl;
		
	}
}
