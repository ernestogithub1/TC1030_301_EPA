// Ernesto Poisot Avila
// A01734765
// Pelicula.hpp

#ifndef Pelicula_hpp
#define Pelicula_hpp


#include <stdio.h>
using namespace std;
#include <iostream>
#include "Video.hpp"

class Pelicula : public Video{
  
private:
  int oscares;
  
public:
  //constructores
  Pelicula();
  Pelicula(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares);
  //set
  void setOscares(int _oscares);
  //get
  int getOscares();
  //resto
  string str( );
};


#endif /* Pelicula_hpp */

