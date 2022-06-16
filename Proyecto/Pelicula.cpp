// Ernesto Poisot Avila
// A01734765
// Pelicula.cpp


#include "Pelicula.hpp"


//constructores
Pelicula::Pelicula ():Video ()
{
oscares = 0;
}

Pelicula::Pelicula (string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares) : Video( _iD, _titulo, _duracion, _genero, _calificacionPromedio)
{
oscares = _oscares
}

//sets
void Pelicula::setOscares(int _oscares)
{
oscares = _oscares;
}

//gets
string Pelicula::getOscares( )
{
return oscares;
}

//resto
string Pelicula::str( )
{
return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacionPromedio)+ ", " + to_string(oscares);
}
