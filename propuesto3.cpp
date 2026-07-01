#include <iostream>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main(){

    int n;

    cout<<"Cantidad de personas: ";
    cin>>n;

    Persona p[n];

    for(int i=0;i<n;i++){

        cout<<"\nPersona "<<i+1<<endl;

        cin.ignore();

        cout<<"Nombre: ";
        getline(cin,p[i].nombre);

        cout<<"Dia de nacimiento: ";
        cin>>p[i].dia;

        cout<<"Mes de nacimiento: ";
        cin>>p[i].mes;

        cout<<"Año de nacimiento: ";
        cin>>p[i].anio;
    }

    int mesBuscar;

    do{

        cout<<"\nIngrese un mes (0 para salir): ";
        cin>>mesBuscar;

        if(mesBuscar!=0){

            cout<<"\nCumplen años en el mes "<<mesBuscar<<endl;

            bool encontrado=false;

            for(int i=0;i<n;i++){

                if(p[i].mes==mesBuscar){

                    encontrado=true;

                    cout<<"\nNombre: "<<p[i].nombre;
                    cout<<"\nFecha: "<<p[i].dia<<"/"<<p[i].mes<<"/"<<p[i].anio<<endl;
                }
            }

            if(!encontrado)
                cout<<"No hay personas que cumplan años ese mes.\n";
        }

    }while(mesBuscar!=0);

    return 0;
}