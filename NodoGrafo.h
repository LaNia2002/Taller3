class NodoGrafo {
private:
    int id;

    int* padres;
    int nPadres;
    int capPadres;

    void crecerNumeroDePadres();

public:
    NodoGrafo(int id);
    virtual ~NodoGrafo();

    virtual bool es_directorio();
    int* lista_padres();

    void agregarPadre(int idPadre);
    int cantidadPadres();
};
