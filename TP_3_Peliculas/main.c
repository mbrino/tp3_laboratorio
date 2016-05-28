#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    int length=3;
    char fileName[]={"./datos/peliculas.dat"};
    char indexName[]={"./datos/index.html"};

    EMovie movie;
    EMovie listmovies[length];

    strcpy(movie.titulo, "Titulo1");
    movie.puntaje=10;
    strcpy(movie.genero,"ficcion");
    movie.duracion=120;
    strcpy(movie.descripcion, "descripcion1");
    strcpy(movie.linkImagen,"'http://ia.media-imdb.com/images/M/MV5BMjA5NTYzMDMyM15BMl5BanBnXkFtZTgwNjU3NDU2MTE@._V1_UX182_CR0,0,182,268_AL_.jpg'");
    movie.estado=0;
    EMovie movie1;
    strcpy(movie1.titulo, "Titulo1");
    movie1.puntaje=10;
    strcpy(movie1.genero,"ficcion");
    movie1.duracion=120;
    strcpy(movie1.descripcion, "descripcion1");
    strcpy(movie1.linkImagen,"'http://ia.media-imdb.com/images/M/MV5BMjA5NTYzMDMyM15BMl5BanBnXkFtZTgwNjU3NDU2MTE@._V1_UX182_CR0,0,182,268_AL_.jpg'");
    movie1.estado=0;

    EMovie movie2;
    strcpy(movie2.titulo, "Titulo2");
    movie2.puntaje=10;
    strcpy(movie2.genero,"ficcion");
    movie2.duracion=120;
    strcpy(movie2.descripcion, "descripcion1");
    strcpy(movie2.linkImagen,"'http://ia.media-imdb.com/images/M/MV5BMjA5NTYzMDMyM15BMl5BanBnXkFtZTgwNjU3NDU2MTE@._V1_UX182_CR0,0,182,268_AL_.jpg'");
    movie2.estado=0;

    listmovies[0]=movie;
    listmovies[1]=movie1;
    listmovies[2]=movie2;
    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Generar pagina web\n");
        printf("4- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                /*if(getString(movie.titulo, "Ingrese el titulo de la pelicula\n", "El nombre es demasiado largo\n", 5, 20)==0 && existePelicula(fileName, movie.titulo)==0)
                {

                }*/
                if(getString(movie.titulo, "Ingrese el titulo de la pelicula\n", "El nombre es demasiado largo\n", 5, 20)!=0)
                {
                    break;
                }
                if(getString(movie.genero, "Ingrese el titulo de la genero\n", "El genero es demasiado largo\n", 5, 20)!=0)
                {
                    break;
                }
                if(getString(movie.descripcion, "Ingrese una descripcion para la pelicula\n", "La descripcion es demasiado larga\n", 0, 50)!=0)
                {
                    break;
                }
                if(getString(movie.linkImagen, "Ingrese el link de la imagen para la pelicula\n", "Link incorrecto\n", 5, 1000)!=0)
                {
                    break;
                }
                if(getInt(&movie.duracion, "Ingrese la duracion de la pelicula en minutos\n", "Duracion incorrecta\n", 10, 500)!=0)
                {
                    break;
                }
                if(getInt(&movie.puntaje, "Ingrese la puntuacion de la pelicula en minutos\n", "La puntuacion debe ser entre 1 y 10\n", 0, 10)!=0)
                {
                    break;
                }

                agregarPelicula(fileName, &movie);
                system("pause");
                break;
            case 2:
                if(getString(movie.titulo, "Ingrese el titulo de la pelicula\n", "El nombre es demasiado largo\n", 5, 20)!=0)
                {
                    break;
                }
                borrarPelicula(fileName, movie);
                system("pause");
                break;
            case 3:
                generarPagina(listmovies, indexName);
                system("pause");
               break;
            case 4:
                seguir = 'n';
                break;
            }
    }

    return 0;
}
