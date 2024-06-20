#ifndef CLASE_MUSICA_H
#define CLASE_MUSICA_H
#include <iostream> 
#include <string>
#include "clase_multimedia.h"

using namespace std;

class Musica : public Multimedia{
    
    private:
        // Atributos
        string cantante;
    public:
        Musica (){}; // Constructor por default
        // Constructor con parametros
        Musica (string ti, int id, string gene, string _cantante) : Multimedia (ti, id, gene){
            this-> cantante = _cantante;
        }
        // getter
        string getCantante(){
            return cantante;
        }
        // setter
        void setCantante(string _cantante){
            this-> cantante = _cantante;
        }
        // Imprime la cancion
        void imprimirCancion(){
            cout << "El titulo de la cancion es " << getTitulo() << endl;
            cout << "El id de la cancion es " << getId() << endl;
            cout << "El genero de la cancion es " << getGenero() << endl;
            cout << "El cantante es " << getCantante () << endl;
        }
};

#endif