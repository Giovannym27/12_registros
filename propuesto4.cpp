#include <iostream>
#include <string>
using namespace std;

struct Atleta{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){

    int n;

    cout<<"Cantidad de atletas: ";
    cin>>n;

    Atleta a[n];

    for(int i=0;i<n;i++){

        cout<<"\nAtleta "<<i+1<<endl;

        cin.ignore();

        cout<<"Nombre: ";
        getline(cin,a[i].nombre);

        cout<<"Pais: ";
        getline(cin,a[i].pais);

        cout<<"Disciplina: ";
        getline(cin,a[i].disciplina);

        cout<<"Numero de medallas: ";
        cin>>a[i].medallas;
    }

    cin.ignore();

    string buscarPais;

    cout<<"\nIngrese el pais: ";
    getline(cin,buscarPais);

    int mayor=-1;

    cout<<"\nAtletas del pais "<<buscarPais<<endl;

    for(int i=0;i<n;i++){

        if(a[i].pais==buscarPais){

            cout<<"\nNombre: "<<a[i].nombre;
            cout<<"\nDisciplina: "<<a[i].disciplina;
            cout<<"\nMedallas: "<<a[i].medallas<<endl;

            if(mayor==-1 || a[i].medallas>a[mayor].medallas)
                mayor=i;
        }
    }

    if(mayor!=-1){

        cout<<"\nAtleta con mayor numero de medallas\n";
        cout<<"Nombre: "<<a[mayor].nombre<<endl;
        cout<<"Disciplina: "<<a[mayor].disciplina<<endl;
        cout<<"Medallas: "<<a[mayor].medallas<<endl;

    }else{

        cout<<"\nNo existen atletas registrados de ese pais.\n";
    }

    return 0;
}