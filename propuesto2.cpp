#include <iostream>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    string dni;
    int edad;
};

int main(){

    int n;

    cout<<"Cantidad de personas: ";
    cin>>n;

    Persona p[n];

    int mayores50=0;
    int sumaEdades=0;

    for(int i=0;i<n;i++){

        cout<<"\nPersona "<<i+1<<endl;

        cin.ignore();

        cout<<"Nombre: ";
        getline(cin,p[i].nombre);

        cout<<"DNI: ";
        getline(cin,p[i].dni);

        cout<<"Edad: ";
        cin>>p[i].edad;

        sumaEdades+=p[i].edad;

        if(p[i].edad>50)
            mayores50++;
    }

    cout<<"\nPersonas mayores de 50: "<<mayores50<<endl;
    cout<<"Promedio de edades: "<<(float)sumaEdades/n<<endl;

    cout<<"\nListado de personas\n";

    for(int i=0;i<n;i++){
        cout<<"\nNombre: "<<p[i].nombre;
        cout<<"\nDNI: "<<p[i].dni;
        cout<<"\nEdad: "<<p[i].edad<<endl;
    }

    return 0;
}