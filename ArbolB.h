#include "NodoBHoja.h"
#include "NodoBInterno.h"
#pragma once

class ArbolB {
    public:
        NodoBPlusBase* raiz;
        int m;
        ArbolB(int);
        void borrarNodo(int);
        int buscar(int);
        void mostrar(NodoBPlusBase*);
        void insertar(int);
        NodoBInterno* encontrarPadre(NodoBInterno*, NodoBInterno*);
        NodoBPlusBase* getRaiz();
        void cambiarNivel(int, NodoBInterno*, NodoBInterno*);
    
    

};
