//Ernesto Poisot Avila
//A01734765
// Episodio.cpp

#include "Episodio.h"


//constructores

Episodio::Episodio( )
{
titulo = vacio;
temporada = 0;
calificacion = 0;
}
Episodio::Episodio(string_ titulo, int _temporada, int _calificacion )
{
titulo = _titulo;
temporada = _temporada;
calificacion = _calificacion;
}


//set
void Episodio::setTitulo(string _titulo){
 titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
 temporada = _temporada;
}
void Episodio::setCalificacion(int _calificacion){
 calificacion = _calificacion;
}


//get
string Episodio::getTitulo( ){
return titulo;
}
int Episodio::getTemporada( ){
return temporada;
}
int Episodio::getCalificacion( ){
return calificacion;
}


//resto
string Episodio::str(){
  return titulo + ',' + to_string(temporada) + ',' + to_string(calificacion);
}


