// Ernesto Poisot Avila
// A01734765
// Series.hpp

#ifndef Series_hpp
#define Series_hpp

#include <stdio.h>
#include "Serie.hpp"
#include <sstream>
#include <fstream>

const int MAX_SERIES = 50;


class Series{

private:
  Serie *arrPtrSeries[MAX_SERIES];
  int Cantidad{};


public:
  //constructor
  Series();

  void leerArchivo();

  //sets
  void setPtrSerie(Serie *ptr);
  void setCantidadSeries(int _cantidad);

  //gets
  Serie* getPtrSerie(string _iD);

  int getCantidadSeries();

  void reporteTodasLasSeries();
  void reporteConCalificacion(double _calificacion);
  void reporteGenero(string _genero);
  void calcularCalificacionSeries();
};

#endif /* Series_hpp */
