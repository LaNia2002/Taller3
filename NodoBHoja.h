#include "NodoBPlusBase.h"
#include "NodoGrafo.h"

class NodoBHoja: public NodoBPlusBase { 
public: 
    NodoGrafo** datos; // vector del tipo NodoGrafo* 
    NodoBHoja* siguiente_hoja; // puntero del tipo NodoBHoja* 
    NodoBHoja(int);
};
