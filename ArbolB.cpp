#include "ArbolB.h"   
   
ArbolB::ArbolB(int tamaño){raiz = nullptr; m = tamaño;}
    void ArbolB::borrarNodo(int){;}
    NodoBPlusBase* ArbolB::getRaiz(){return raiz;}
    
    int ArbolB::buscar(int){return 1;}
    void ArbolB::mostrar(NodoBPlusBase*){}

   /* void ArbolB::insertar(int clave){
        if(raiz == NULL){
            raiz = new NodoBHoja(m);
            raiz -> claves[0] = clave;
            raiz -> es_hoja = true;
            raiz -> orden = 1;
        } else {
            NodoBInterno* presente = raiz;
            NodoBInterno* padre = NULL;
            
            while (presente -> es_hoja == false){
                padre = (NodoBInterno*) presente;
                
                for (int j = 0; j < presente -> orden; j++){
                    if(clave < presente -> claves[j]){
                        presente = presente -> punteros[j];
                        break;
                    }
                    if (i == presente -> orden - 1){
                        presente = presente -> punteros[i + 1]:
                        break;
                    }
                }
            }
            
            if (presente -> orden < m){
                int i = 0;
                
                while (clave > presente -> claves[i] && i < presente -> orden) {i++;}
                
                for (int j = presente -> orden; j > i; j--){
                    presente -> claves[j] = presente -> claves[j - 1];
                }
                
                presente -> claves[i] = clave;
                presente -> orden++;
                presente -> punteros[presente -> orden] = presente -> punteros[presente -> orden - 1];
                presente -> punteros[presente -> orden - 1] = NULL;
                
            } else {
                NodoBHoja* nuevaHoja = new NodoBHoja(m);
                int nodos[m + 1];
                
                for (int j = 0; j < m; j++){
                    nodos[j] = presente -> claves[j];
                }
                int i = 0;
                
                while (clave > nodos[i] && i < m){i++;}
                
                for (int j = m + 1; j > i; j--){
                    nodos[j] = nodos[j - 1];
                }
                nodos[i] = clave;
                nuevaHoja -> es_hoja = true;
                presente -> orden = (m + 1) / 2;
                nuevaHoja -> orden = (m + 1) - (m + 1) / 2;
                
                for (int i = 0; i < hoja->orden; i++){
                    hoja->claves[i] = nodos[i];}

                for (int i = 0, j = hoja->orden; i < nuevaHoja->orden; i++, j++){
                    nuevaHoja->claves[i] = nodos[j];}

                nuevaHoja->esHoja = true;
                nuevaHoja->siguiente = hoja->siguiente;
                hoja->siguiente = nuevaHoja;

                // Si la hoja era raíz
                if (hoja == raiz) {
                    NodoBInterno* nuevaRaiz = new NodoBInterno;
                    nuevaRaiz->claves[0] = nuevaHoja->claves[0];
                    nuevaRaiz->punteros[0] = hoja;
                    nuevaRaiz->punteros[1] = nuevaHoja;
                    nuevaRaiz->orden = 1;
                    nuevaRaiz->esHoja = false;
                    raiz = nuevaRaiz;
                } else {
                    shiftLevel(nuevaHoja->claves[0], padre, nuevaHoja);
                }
            }
        }
    }
    */
    NodoBInterno* ArbolB::encontrarPadre(NodoBInterno*, NodoBInterno*){return new NodoBInterno(1);}
    void ArbolB::cambiarNivel(int, NodoBInterno*, NodoBInterno*){}
    
    
