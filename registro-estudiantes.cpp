#include<iostream>
#include<string>

using namespace std;

int main(){
    int cantidad, opcion;
    // Pido la cantidad de estudiantes y guardo el dato
    cout<<"Cuantos estudiantes quiere registrar: ";
    cin>>cantidad;

    string nombres[cantidad+1];
    int id[cantidad+1];	
    float promedio[cantidad+1];	

    // Registro los datos de cada estudiante
    for(int i=1; i<=cantidad; i++){
        cout<<"Estudiante registrado #"<<i<<endl;
        cout<<"Nombre del estudiante: ";
        cin>>ws; // Limpio el buffer para que getline funcione bien
        getline(cin, nombres[i]);
        cout<<"Ingrese el ID: ";
        cin>>id[i];

        float n1, n2, n3;
        cout<<"Ingrese la nota 1: "; cin>>n1;
        cout<<"Ingrese la nota 2: "; cin>>n2;
        cout<<"Ingrese la nota 3: "; cin>>n3;
        // Calculo el promedio
        promedio[i] = (n1+n2+n3)/3;
    }

    // Menú interactivo para ver los resultados
    do{
        cout<<endl<<"-------------Menu---------------"<<endl;
        cout<<"1. Mostrar todos los resultados"<<endl;
        cout<<"2. Ver estado de aprobacion"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: 
                for(int j=1; j<=cantidad; j++){
                    cout<<"Estudiante: "<<nombres[j]<<" | Promedio: "<<promedio[j]<<endl;
                }
                break;
            case 2: 
                for(int j=1; j<=cantidad; j++){
                    cout<<"Estudiante: "<<nombres[j]<<": ";
                    if(promedio[j]>=3){
                        cout<<"Aprobado"<<endl;
                    }else{
                        cout<<"Reprobado"<<endl;	
                    }
                }
                break;
            case 3:
                cout<<"Cerrando el programa";
                break;
            default:
                cout<<"Opcion no valida";
                break;
        }
    } while(opcion != 3);
}
