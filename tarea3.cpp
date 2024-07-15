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
	int m;
	do{
		cout<<"Ingrese el numero del mes a comparar: ",cin>>m;
		cout<<"Los datos de las personas que cumplen anos durante ese mes son los siguientes: "<<endl;
		for(int i=0;i<n;i++){
		if(m==persona[i].mes){
		  cout<<"Nombre: "<<persona[i].nombre<<endl;
		  cout<<"Dia de nacimiento: "<<persona[i].dia<<endl;
		  cout<<"Ano de nacimiento: "<<persona[i].ano<<endl;	
		}
		}
	} while(m!=0);
	return 0;
}
