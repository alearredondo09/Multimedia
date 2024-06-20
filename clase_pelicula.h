#ifndef CLASE_PELICULA_H
#define CLASE_PELICULA_H
#include <iostream> 
#include <string> 
#include "clase_multimedia.h"

using namespace std;

class Pelicula : public Multimedia{
    private:
        //Atributos
        string director;
    public:
        Pelicula(){};  // Constructor por default
        // Constructor con parametros
        Pelicula (string ti, int id,string gene, string di) : Multimedia(ti,id,gene){
            this-> director = di;
        }
        // getter
        string getDirector(){
            return director;
        }
        //setter
        void setDirector(string di){
            this-> director = di;
        }
        //Imprime la pelicula 
        void imprimePelicula(){
            cout << "La pelicula es: " << getTitulo() << endl;
            cout << "El id de la pelicula es " << getId() << endl;
            cout << "El genero de la pelicula es: " << getGenero() << endl;
            cout << "El director de la pelicula es " << getDirector() << endl;
        }

};



#endif