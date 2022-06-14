#include "pelicula.hpp"

pelicula::pelicula( ) :video()
{
oscares = 0;
}


pelicula::pelicula (string _id, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares) : video(id, titulo, duracion, genero, calificacion)
{
oscares = _oscares
}


void video::setId(string _id){
 oscares = _oscares;
}


string video::getId( ){
return oscares;
}


string video:: str( ){
 return oscares;
}
