#include "NodoBHoja.h"


NodoBHoja::NodoBHoja(int tamaño){
    datos = new NodoGrafo*[tamaño + 1];
    claves = new int[tamaño];
    es_hoja = true;
}
