#include <iostream>
#include <vector>
using namespace std;

class NodoGrafo{ 
private: 
    int id; 
public: 
    bool es_directorio();
    vector<int> lista_padres; 
}; 
