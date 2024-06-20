#ifndef CLASE_MULTIMEDIA_H
#define CLASE_MULTIMEDIA_H
#include <iostream>
#include <string>

using namespace std;

class Multimedia {
    protected: // Herencia
        // Atributos    
        string titulo;
        int iD;
        string genero;
        int num; 

        
    public: 
        Multimedia(){}; // Constructor por default
        // Constructor con parametros
        Multimedia(string ti, int id, string gene){
            this-> titulo = ti;
            this-> iD = id;
            this-> genero = gene;
        }
        // getters
        string getTitulo(){
            return titulo;
        }
        int getId (){
            return iD;
        }
        string getGenero (){
            return genero;
        }
        // setter
        void setTitulo(string ti){
            this-> titulo = ti;
        }
        void setID (int id){
            this -> iD = id;
        }
        void setGenero(string gene){
            this-> genero = gene;
        }
};
#endif