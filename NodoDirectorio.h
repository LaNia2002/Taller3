#include "NodoGrafo.h"


class NodoDirectorio: public NodoGrafo { 
public: 
    bool es_directorio();
    vector<int> lista_hijos; 
}; 
