#include <iostream>
#include <string>
#include <vector>
#include "clase_musica.h"
#include "clase_pelicula.h"
#include "clase_usuario.h"
#include "Teca.h"

using namespace std;
/*
   El problema a abordar es la gestión efectiva de un negocio de alquiler de películas.
   Esto implica llevar un registro preciso de las películas disponibles en el catálogo,
   el estado (si se encuentra en el catálogo o no) y la información de los clientes.

   Catálogo de Películas: Permite visualizar y encontrar en el catálogo una película.
   Agregar Películas: Permite a los usuarios agregar nuevas películas al catálogo,
   ingresando detalles como título, director y ID.
   Registro de Clientes: Permite agregar nuevos clientes al sistema, incluyendo su información.

   Alejandra Arredondo - A01711434
   Creación 2 de noviembre
   Modificación 17 de noviembre
   Modificación 25 de noviembre
   Modificación 30 de noviembre
   Modificación 2 de diciembre
   ***Favor de Reevaluar : ***
   ***Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML.***
   ***Impemento composición (o agregación) sieguiendo mi diagrama de clases***
   ***Implemento clases apegadas a requerimientos a partir de un modelo.***
*/

int main() {
    vector<Usuario> usuarios;
    vector<Pelicula> peliculas;
    vector<Musica> musica;

    bool sigue = true;
    int opcion;
    string encontrar;
    Teca miTeca;


    while (sigue == true) {
        // Usuario elige que opcion quiere usar
        cout << "Inserta 1 si quieres agregar un usuario" << endl;
        cout << "Inserta 2 si quieres agregar una cancion" << endl;
        cout << "Inserta 3 si quieres agregar una pelicula" << endl;
        cout << "Inserta 4 si quieres imprimir la lista de canciones" << endl;
        cout << "Inserta 5 si quieres imprimir la lista de Usuarios" << endl;
        cout << "Inserta 6 si quieres imprimir la lista de peliculas" << endl;
        cout << "Inserta 7 si quieres mostrar el catalogo de canciones, usuarios y peliculas" << endl;
        cout << "Inserta 8 si quieres buscar una pelicula. " << endl;
        cout << "Inserta 9 si quieres buscar una cancion " << endl;
        cout << "Inserta 10 si quieres buscar un usuario" << endl;
        cout << "Inserta 11 si quieres salir" << endl;

        cin >> opcion;

        //Si elige opción 1
        if (opcion == 1) {
            bool crear_usuario = true;
            string nombre, nombre_usuario;
            int edad, otro_usuario, i = 1;
            while (crear_usuario == true) {
                cout << "Ingresa tu nombre: " << endl;
                cin >> nombre;
                cout << "Ingresa tu edad: " << endl;
                cin >> edad;
                cout << "Ingresa tu nombre de usuario (sin espacios): " << endl;
                cin >> nombre_usuario;
                i++;
                // Se crea una instancia de usuario y despues de añade a la miTeca.
                Usuario nuevoUsuario(nombre,edad,nombre_usuario);
                miTeca.agregarUsuario(nuevoUsuario);


                //Se pregunta se quiere añadir otro usuario
                cout << "Quieres agregar otro usuario? (1 = si, 0 = no)" << endl;
                cin >> otro_usuario;
                if (otro_usuario == 0){
                    crear_usuario = false;
                }
            }
        }
        // Si el usuario elie la opción 2
        else if (opcion == 2) {
            bool crea = true;
            string titulo, genero, cantante;
            int iD, i = 1;
            while (crea == true) {
                int opcion;
                iD = i;
                cout << "Ingrese titulo" << endl;
                cin >> titulo;
                cout << "Ingrese genero" << endl;
                cin >> genero;
                cout << "Ingrese cantante" << endl;
                cin >> cantante;
                i++;
                // Se crea una nueva instancia con los datos que el usuario proporciono para Musica y después se añade a la miTeca.
                Musica nuevaCancion(titulo,iD,genero,cantante);
                miTeca.agregarCancion(nuevaCancion);


                // Se pregunta si quiere añadir otra canción
                cout << "Quieres poner otra cancion? (1 = si, 0 = no)" << endl;
                cin >> opcion;
                if (opcion == 0) {
                    crea = false;
                }
            }
        }
        //Si el usuario elige la opcion 3
        else if (opcion == 3) {
            bool crea_pelicula = true;
            string titulo, genero, director;
            int iD, i = 1;
            while (crea_pelicula == true) {
                int opcion;
                iD = i;
                cout << "Ingrese titulo: " << endl;
                cin >> titulo;
                cout << "Ingrese genero: " << endl;
                cin >> genero;
                cout << "Ingrese director: " << endl;
                cin >> director;
                i++;
                //Con los datos que el usuario añadio se crea una instancia de pelicula que será añadida a miTeca
                Pelicula nuevaPelicula(titulo,iD,genero,director);
                miTeca.agregarPelicula(nuevaPelicula);


                // Se pregunta si quiere crear otra pelicula
                cout << "Quieres poner otra pelicula? (1 = si, 0 = no)" << endl;
                cin >> opcion;
                if (opcion == 0) {
                    crea_pelicula = false;
                }
            }
        }
        else if (opcion == 4) {
            // Se imprimen todas las canciones en el vector de musica.
            for (auto& cancion : musica) {
                cout << "El titulo de la cancion es: " << cancion.getTitulo() << ". El cantante de esa cancion es: " << cancion.getCantante() << endl;
            }
        }
        else if (opcion == 5) {
            // Se imprimen todos los usuarios en el vector de usuario
            for (auto& usuario : usuarios) {
                cout << "El nombre del usuario es: " << usuario.getNombre() << ". El nombre de usuario es: " << usuario.getNomUsuario() << ". La edad del usuario es: " << usuario.getEdad() << endl;
            }
        }
        else if (opcion == 6) {
            // Se imprimen todas las peliculas en el vector de pelicula.
            for (auto& pelicula : peliculas) {
                cout << "El titulo de la película es: " << pelicula.getTitulo() << ". El director de la pelicula es: " << pelicula.getDirector() << endl;
            }

        }
        else if (opcion == 7){
            // Se muestran todos los instancias creadas por catalogo.
            miTeca.mostrarCatalogoP();
            miTeca.mostrarCatalogoC();
            miTeca.mostrarCatalogoU();
        }
        else if(opcion == 8){
            // Ingresar la pelicula a buscar
            cout << "Ingresa el titulo de la pelicula a buscar: " << endl;
            cin >> encontrar;
            miTeca.buscarPelicula(encontrar);
        }
        else if (opcion == 9){
            //Ingresar la cancion a buscar
            cout << "Ingresa el titulo de la cancion a buscar: " << endl;
            cin >> encontrar;
            miTeca.buscarCancion(encontrar);
        }
        else if (opcion == 10){
            //Ingresar el usuario a buscar
            cout << "Ingresa el nombre del usuario a buscar: " << endl;
            cin >> encontrar;
            miTeca.buscarUsuario(encontrar);
        }
        else if (opcion == 11) {
            // Se sale del programa
            sigue = false;
        }
        else {
            // Indica que la opcion ingresada es incorrecta.
            cout << "Opcion incorrecta" << endl;
        }
    }

    return 0;
}
