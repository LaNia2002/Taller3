
#include <iostream>
using namespace std;

#include "NodoGrafo.h"
#include "NodoDirectorio.h"
#include "NodoArchivo.h"

#include "NodoBPlusBase.h"
#include "NodoBHoja.h"
#include "NodoBInterno.h"

void insertar_nodo_grafo(int clave, NodoGrafo* nodo_grafo){}
NodoGrafo* buscar_nodo_grafo(int clave){}
void crear_nodo(int id_padre){}
void eliminar_archivo(int id_archivo, int id_directorio_padre){}
void listar_contenido(int id_directorio){}
string* obtener_rutas_completas(int id_archivo){}
int calcular_espacio_ocupado(int id_directorio){}


int main()
{
    int opcion=0;

    while(opcion!=8){

        cout<<"1) Insertar nodo al grafo"<< endl;
        cout<<"2) Buscar nodo del grafo"<< endl;
        cout<<"3) Crear nodo"<<endl;
        cout<<"4) Eliminar archivo"<<endl;
        cout<<"5) Listar contenido"<< endl;
        cout<<"6) Obtener rutas completas"<< endl;
        cout<<"7) Calcular espacio ocupado"<< endl;
        cout <<"8) Salir" << endl;

        cout << "Ingrese la opcion que desea: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                
                break;
            case 2:
              
                break;
            case 3:
               
                break;
            case 4:
              
                break;
            case 5:
                
                break;
            case 6:
               
                break;
            case 7:
                
                break;
            case 9:
                
                break;

            default:
                cout << "Opcion invalida.\n";
                break;
        }


    }

    return 0;
}
