//Ernesto Poisot Avila
//A01734765
//peliculas.hpp

#ifndef peliculas_hpp
#define peliculas_hpp

#include <stdio.h>
#include "pelicula.hpp"
#include <sstream>
#include <fstream>
#include <iostream>
const int MAX_PEL =50;

class peliculas{
  
private:
  pelicula * arrPtrPeliculas[MAX_PEL];
  int cantidad;
  
public:
  //constructor
  peliculas();
  
  
  //set
  void setPtrPeliculas(Pelicula *_ptrPelicula);
  void setCantidadPeliculas(int _cantidad);

  
  //get
  pelicula * getPtrPeliculas(string _id);
  int getCantidadPeliculas();
  
  //resto
  int leerArchivo();
  void reporteTodasLasPeliculas();
  void reporteConCalificacion(float _calificacionPromedio);
  void reporteGenero(string _genero);


};


#endif /* peliculas_hpp */


