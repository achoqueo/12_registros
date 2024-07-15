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
	    cout<<"Ingrese el nombre del atleta "<<i+1<<": ";cin.ignore();
		getline(cin,atleta[i].nombre);
		cout << "Ingrese el pais del atleta "<<i+1<< ": ";cin>>atleta[i].pais;cin.ignore();
        cout << "Ingrese la disciplina del atleta "<<i+1<< ": ";getline(cin, atleta[i].disciplina);
        cout << "Ingrese el numero de medallas del atleta "<<i+1<< ": ";cin>>atleta[i].medallas;cin.ignore();
	}string p;
	cout<<"Ingrese el nombre del pais a comprar: ";cin>>p;
    bool encontrado = false;
    int maxMedallas = 0;
    int indiceMaxMedallas = -1;
    for(int i = 0; i < n; i++) {
        if(p == atleta[i].pais) {
            cout << "Atleta encontrado del pais " << p << ":" << endl;
            cout << "Nombre: " << atleta[i].nombre << endl;
            cout << "Disciplina: " << atleta[i].disciplina << endl;
            cout << "Numero de medallas: " << atleta[i].medallas << endl;
            
            if(atleta[i].medallas > maxMedallas) {
                maxMedallas = atleta[i].medallas;
                indiceMaxMedallas = i;
            }
            
            encontrado = true;
        }
    }
    
    if(encontrado) {
        cout << "El atleta con mayor numero de medallas de " << p << " es:" << endl;
        cout << "Nombre: " << atleta[indiceMaxMedallas].nombre << endl;
        cout << "Disciplina: " << atleta[indiceMaxMedallas].disciplina << endl;
        cout << "Numero de medallas: " << atleta[indiceMaxMedallas].medallas << endl;
    } else {
        cout << "No se encontraron atletas del pais " << p << "." << endl;
    }
	return 0;
}

