#ifndef serie_hpp
#define serie_hpp
#include <stdio.h>
#include "video.hpp"
#include "episodio.hpp"

class serie: public video{
  
private:
  episodio episodios[5];
  int cantidad;
  
public:
  serie();
  serie(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int, );
  
  void setEpisodio(int _index, episodio _episodio);
  void setCantidad(int _cantidad);

  episodio getEpisodio(int _index);
  int getCantidad();
  
  double calcularPromedio();
  string str();


};


#endif /* serie_hpp */
