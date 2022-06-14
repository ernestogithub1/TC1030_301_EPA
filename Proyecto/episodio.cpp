#include "episodio.hpp"

episodio::episodio( )
{
titulo = vacio;
temporada = 0;
calificacion = 0;
}


episodio::episodio(string_ titulo, int _temporada, double _calificacion )
{
titulo = _titulo;
temporada = _temporada;
calificacion = _calificacion;
}


void episodio::setTitulo(string _titulo){
 titulo = _titulo;
}
void episodio::setTemporada(int _temporada){
 temporada = _temporada;
}
void episodio::setCalificacion(double _calificacion){
 calificacion = _calificacion;
}


string episodio::getTitulo( ){
return titulo;
}
int episodio::getTemporada( ){
return temporada;
}
double episodio::getCalificacion( ){
return calificacion;
}


string episodio:: str( ){
 return titulo + ', ' + to_string(temporada) + ', ' + to_string(calificacion);
}


