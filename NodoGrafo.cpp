#include "NodoGrafo.h"

NodoGrafo::NodoGrafo(int id) {
    this->id = id;
    capPadres = 2;
    nPadres = 0;
    padres = new int[capPadres + 1];
    padres[0] = -1; }

NodoGrafo::~NodoGrafo() {
    delete[] padres;}

bool NodoGrafo::es_directorio() {
    return false;}

int* NodoGrafo::lista_padres() {
    return padres;}

int NodoGrafo::cantidadPadres() {
    return nPadres;}

void NodoGrafo::crecerNumeroDePadres() {

    int nueva_cap = (capPadres == 0) ? 2 : capPadres * 2;

    int* nuevo = new int[nueva_cap + 1];

    for (int i = 0; i < nPadres; i++) {
        nuevo[i] = padres[i];}

    nuevo[nPadres] = -1;

    delete[] padres;
    padres = nuevo;
    capPadres = nueva_cap;}

void NodoGrafo::agregarPadre(int idPadre) {

    if (nPadres == capPadres) {
        crecerNumeroDePadres();}

    padres[nPadres] = idPadre;
    nPadres++;
    padres[nPadres] = -1;}


