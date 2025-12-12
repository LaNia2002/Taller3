#include "NodoDirectorio.h"

NodoDirectorio::NodoDirectorio(int id): NodoGrafo(id) {
    
    hijos = nullptr;
    nHijos = 0;
    capHijos = 0;

    capHijos = 2;
    hijos = new int[capHijos + 1];  
    hijos[0] = -1;  }

NodoDirectorio::~NodoDirectorio() {
    delete[] hijos;}

bool NodoDirectorio::es_directorio() {
    return true;  }

int* NodoDirectorio::lista_hijos() {
    return hijos;}

int NodoDirectorio::cantidadHijos() {
    return nHijos;}

void NodoDirectorio::crecerNumeroDeHijos() {

    int nueva_cap = (capHijos == 0) ? 2 : capHijos * 2;

    int* nuevo = new int[nueva_cap + 1];  

    for (int i = 0; i < nHijos; i++) {
        nuevo[i] = hijos[i];}

    nuevo[nHijos] = -1;  

    delete[] hijos;
    hijos = nuevo;
    capHijos = nueva_cap;}

void NodoDirectorio::agregarHijo(int idHijo) {

    if (nHijos == capHijos) {
        crecerNumeroDeHijos();  }

    hijos[nHijos] = idHijo;
    nHijos++;
    hijos[nHijos] = -1;  }
