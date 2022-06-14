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
  serie(string, string, int, string, double, int, );
  
  void setEpisodio(int_index, Episodio_episodio);
  void setCantidad(int_cantidad);

  int getEpisodio(int_index);
  int getCantidad();
  
  double calcularPromedio();
  
  string str();


};


#endif /* serie_hpp */
