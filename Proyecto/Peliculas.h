//Ernesto Poisot Avila
//A01734765
//Peliculas.h

#ifndef Peliculas_h
#define Peliculas_h

#include <stdio.h>
#include "Pelicula.h"
#include <sstream>
#include <fstream>
#include <iostream>
const int MAX_PEL =50;

class Peliculas{
  
private:
  Pelicula * arrPtrPeliculas[MAX_PEL];
  int cantidad;
  
public:
  //constructor
  Peliculas();
  
  
  //set
  void setPtrPeliculas(Pelicula *_ptrPelicula);
  void setCantidadPeliculas(int _cantidad);

  
  //get
  Pelicula * getPtrPeliculas(string _id);
  int getCantidadPeliculas();
  
  //resto
  int leerArchivo();
  void reporteTodasLasPeliculas();
  void reporteConCalificacion(float _calificacionPromedio);
  void reporteGenero(string _genero);


};


#endif /* Peliculas_h */


