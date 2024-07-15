#include<iostream>
using namespace std;
struct emp{
	string nombre;
	string sexo;
	int sueldo;
};
int main(){
	int n;
	emp empleado [n];
	cout<<"Ingrese el numero de empleados: ";cin>>n;
	for(int i=0;i<n;i++){
	    cout<<"Ingrese el nombre del empleado: "<<i+1<<": ";cin.ignore();
		getline(cin,empleado[i].nombre);
		cout<<"Ingrese el sexo del empleado: "<<i+1<<": ";cin>>empleado[i].sexo;
		cout<<"Ingrese el sueldo del empleado: "<<i+1<<":";cin>>empleado[i].sueldo;
	}
	int mayor=0;
	int menor=0;
	for(int i=0;i<n;i++){
		if(empleado[i].sueldo>mayor){
			mayor=empleado[i].sueldo;
			int masalario=i;
			cout<<"El datos del empleado con mayor salario son los siguientes: "<<endl;
			cout<<"Nombre: "<<empleado[masalario].nombre<<endl;
			cout<<"Sexo: "<<empleado[masalario].sexo<<endl;
			cout<<"Salario: "<<empleado[masalario].sueldo<<endl;
		}
	}
}
