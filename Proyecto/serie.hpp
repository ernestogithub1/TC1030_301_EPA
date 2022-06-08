#ifndef serie_hpp
#define serie_hpp
#include <stdio.h>
#include "video.hpp"
#include "episodio.hpp"

class serie: public video{
private:
  Episodio episodios[5];
  int cantidad;
  
public:
  serie();
  serie(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
  
void setEpisodio(int_index, Episodio_episodio);
void setCantidad(int_cantidad);

Episodio getEpisodio(int_index);
int getCantidad();
  
double calcularPromedio();
  string str();


};


#endif /* serie_hpp */
