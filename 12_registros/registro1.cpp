#include<iostream>
using namespace std;
struct emp{
	int numero;
	string nombre;
	float ventas[12];
	float salario;
};
int main(){
	emp empleado[50];
	int n;
	cout<<"Ingrese el numero de empleados: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero del empleado "<<i+1<<": ";cin>>empleado[i].numero;
		cout<<"Ingrese el nombre del empleado "<<i+1<<": ";cin>>empleado[i].nombre;
		for(int j=0;j<12;j++){
			cout<<"Ingrese la venta del mes "<<j+1<<":";cin>>empleado[i].ventas[j];
		}cout<<"Ingrese el salario del empleado "<<i+1<<":";cin>>empleado[i].salario;
	} 
	return 0;
}