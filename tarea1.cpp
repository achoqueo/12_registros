#include<iostream>
using namespace std;
struct empleado{
	string nombre;
	string sexo;
	int sueldo;
};
int main(){
	empleado DataTech [999];
	int n;
	cout<<"Ingrese el numero de empleados: ";cin>>n;
	for(int i=0;i<n;i++){
	    cout<<"Ingrese el nombre del empleado "<<i+1<<": ";cin.ignore();
		getline(cin,empleado[i].nombre);
		cout<<"Ingrese el sexo del empleado "<<i+1<<": ";cin>>empleado[i].sexo;
		cout<<"Ingrese el sueldo del empleado "<<i+1<<":";cin>>empleado[i].sueldo;
	}
}
