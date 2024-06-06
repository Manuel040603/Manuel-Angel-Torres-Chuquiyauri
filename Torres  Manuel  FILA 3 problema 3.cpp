//https://github.com/Manuel040603/Manuel-Angel-Torres-Chuquiyauri//
#include <iostream>
#include <string>
using namespace std;
struct Estudiante {
    string codigo;
    string nombre;
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};
int main() {
     int numEstudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> numEstudiantes;
    Estudiante estudiantes[numEstudiantes];
    int desaprobados = 0;
    for (int i = 0; i < numEstudiantes; ++i) {
        cout<<"Ingrese el código del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].codigo;
        cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
        cin.ignore(); 
        getline(cin, estudiantes[i].nombre);
        cout<<"Ingrese la nota 1 del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].nota1;
        cout<<"Ingrese la nota 2 del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].nota2;
        cout<<"Ingrese la nota 3 del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].nota3;
        estudiantes[i].promedio=(estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3) / 3;
        if (estudiantes[i].promedio<11) {
            desaprobados++;
        }
    }
    for (int i = 0; i < numEstudiantes - 1; ++i){
        for (int j = 0; j < numEstudiantes - i - 1; ++j){
            if (estudiantes[j].promedio < estudiantes[j + 1].promedio){
                Estudiante temp=estudiantes[j];
                estudiantes[j]=estudiantes[j+1];
                estudiantes[j + 1]=temp;
            }
        }
    }
    cout << "\nPromedio de cada estudiante:\n";
    for (int i=0;i<numEstudiantes;++i) {
        cout<<"Estudiante "<<i+1<<": "<<estudiantes[i].nombre<<", Promedio: "<<estudiantes[i].promedio<<endl;
    }
    cout << "\nCantidad de estudiantes desaprobados: "<< desaprobados << endl;
    cout << "\nDatos ordenados por promedio:\n";
    for (int i=0;i<numEstudiantes;++i) {
        cout <<"\nCódigo: "<< estudiantes[i].codigo<< "\nNombre: "<<estudiantes[i].nombre<<",\nPromedio: "<<estudiantes[i].promedio<< endl;
    }
    return 0;
}
