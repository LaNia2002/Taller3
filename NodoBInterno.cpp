#include "NodoBInterno.h"

NodoBInterno::NodoBInterno(int tamaño){
    punteros = new NodoBPlusBase*[tamaño + 1]();
    claves = new int[tamaño];
    es_hoja = false;
    
}
