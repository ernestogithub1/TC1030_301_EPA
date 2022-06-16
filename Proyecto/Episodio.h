//Ernesto Poisot Avila
//A01734765
// Episodio.h

#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Episodio
{
private:
  string titulo;
  int temporada;
  int calificacion;
  
public:
  //constructores
  Episodio();
  Episodio(string _titulo, int _temporada, int _calificacion);
  
  //sets
  void setTitulo(string _titulo);
  void setTemporada(int _temporada);
  void setCalificacion(int _calificacion);

  //gets
  string getTitulo();
  int getTemporada();
  int getCalificacion();
  
  //resto
  string str();
};


#endif /* Episodio_h */
