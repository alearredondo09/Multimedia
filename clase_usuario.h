#ifndef CLASE_USUARIO_H
#define CLASE_USUARIO_H
#include <iostream>
#include<string>

using namespace std;

class Usuario{
    private:
        //Atributos
        string nombre;
        int edad;
        string nombre_usuario;
    public:
        Usuario(){}; //Constructor por default
        // Constructor con parametros 
        Usuario (string nom, int _edad, string nom_Usuario){
            this-> nombre = nom;
            this-> edad = _edad;
            this-> nombre_usuario = nom_Usuario;
        }
        // getters
        string getNombre(){
            return nombre;
        }
        int getEdad(){
            return edad;
        }
        string getNomUsuario(){
            return nombre_usuario;
        }
        //setters
        void setNombre(string nom){
            this-> nombre = nom;
        }
        void setEdad(int _edad){
            this-> edad = _edad;
        }
        void setNombreUsuario(string nom_Usuario){
            this-> nombre_usuario = nom_Usuario;
        }
        //Imprime el usuario 
        void imprimirUsuario(){
            cout << "Nombre: " << getNombre() << endl;
            cout << "Edad: " << getEdad() << endl;
            cout << "Nombre usuario: " << getNomUsuario() << endl;
        }

};


#endif