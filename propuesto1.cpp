#include <iostream>
#include <string>
using namespace std;

struct Empleado{
    string nombre;
    char sexo;
    float sueldo;
};

int main() {

    int n;

    cout<<"Cantidad de empleados: ";
    cin>>n;

    Empleado emp[n];
    for(int i=0;i<n;i++){
        cout<<"\nEmpleado "<<i+1<<endl;

        cin.ignore();
        cout<<"Nombre: ";
        getline(cin,emp[i].nombre);

        cout<<"Sexo (M/F): ";
        cin>>emp[i].sexo;

        cout<<"Sueldo: ";
        cin>>emp[i].sueldo;
    }

    int mayor=0, menor=0;

    for(int i=1;i<n;i++){
        if(emp[i].sueldo>emp[mayor].sueldo)
            mayor=i;

        if(emp[i].sueldo<emp[menor].sueldo)
            menor=i;
    }

    cout<<"\nEmpleado con mayor sueldo\n";
    cout<<"Nombre: "<<emp[mayor].nombre<<endl;
    cout<<"Sexo: "<<emp[mayor].sexo<<endl;
    cout<<"Sueldo: "<<emp[mayor].sueldo<<endl;

    cout<<"\nEmpleado con menor sueldo\n";
    cout<<"Nombre: "<<emp[menor].nombre<<endl;
    cout<<"Sexo: "<<emp[menor].sexo<<endl;
    cout<<"Sueldo: "<<emp[menor].sueldo<<endl;

    return 0;
    
}