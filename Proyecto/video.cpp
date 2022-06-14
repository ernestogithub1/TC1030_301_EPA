#include "video.hpp"

video::video( )
{
iD=0;
titulo= vacio;
duracion=0;
genero=vacio;
calificacionPromedio=0;
}

video::video (string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
id= _id
titulo= _titulo
duracion= _duracion
genero= _genero
calificacion= _calificacion
}



void video::setId(string _id){
 id = _id;
}
void video::setTitulo(string _titulo){
 titulo = _titulo;
}
void video::setDuracion(int _duracion){
 duracion = _duracion;
}
void video::setGenero(string _genero){
 genero = _genero;
}
void video::setCalificacion(double _calificacion){
 calificacion = _calificacion;
}



string video::getId( ){
return id;
}
string video::getTitulo( ){
return titulo;
}
int video::getDuracion( ){
return duracion;
}
string video::getGenero( ){
return genero;
}
double video::getCalificacion( ){
return calificacion;
}



string video:: str( ){
 return id + ', ' + titulo + ', ' + to_string(duracion) + ', ' + genero + ', ' + to_string(calificacion);
}
