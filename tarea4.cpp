#include<iostream>
using namespace std;
struct datos{
	string nombre;
	string pais;
	string disciplina;
	int medallas;
};
int main(){
	int n;
	cout<<"Ingrese el numero de atletas: ";cin>>n;
	datos atleta [n];
	for(int i=0;i<n;i++){
	    cout<<"Ingrese el nombre del empleado "<<i+1<<": ";cin.ignore();
		getline(cin,atleta[i].nombre);
		cout<<"Ingrese el pais del atleta "<<i+1<<": ";cin>>atleta[i].pais;
		cout<<"Ingrese la disciplina del atleta "<<i+1<<":";cin>>atleta[i].disciplina;
		cout<<"Ingrese el numero de medallas del atleta "<<i+1<<":";cin>>atleta[i].medallas;
	}
}
