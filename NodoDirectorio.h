#include "NodoGrafo.h"

class NodoDirectorio : public NodoGrafo {
private:
    int* hijos;
    int nHijos;
    int capHijos;

    void crecerNumeroDeHijos();

public:
    NodoDirectorio(int id);
    ~NodoDirectorio();

    bool es_directorio() override;
    int* lista_hijos();

    void agregarHijo(int idHijo);
    int cantidadHijos();
};
