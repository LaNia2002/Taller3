#include "ArbolB.h"   
   
ArbolB::ArbolB(int tamaño){raiz = nullptr; m = tamaño;}
    void ArbolB::borrarNodo(int){;}
    NodoBPlusBase* ArbolB::getRaiz(){return raiz;}
    
    int ArbolB::buscar(int){return 1;}
    void ArbolB::mostrar(NodoBPlusBase*){}
    void ArbolB::insertar(int){}
    NodoBInterno* ArbolB::encontrarPadre(NodoBInterno*, NodoBInterno*){return new NodoBInterno(1);}
    void ArbolB::cambiarNivel(int, NodoBInterno*, NodoBInterno*){}
    
    
