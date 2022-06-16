#ifndef peliculas_hpp
#define peliculas_hpp
#include <stdio.h>
#include "video.hpp"
#include "pelicula.hpp"

class peliculas: public video{
  
private:
  pelicula arrPtrPeliculas[MAX_PEL];
  int cantidad;
  
public:
  peliculas();
  
  
  
  void setPtrPeliculas(string);
  void setCantidadPeliculas(int _cantidad);

  pelicula getPtrPeliculas(string _index);
  int getCantidadPeliculas();
  
  double calcularPromedio();
  string str();


};


#endif /* peliculas_hpp */
© 2022 GitHub, Inc.
Terms
Priv
