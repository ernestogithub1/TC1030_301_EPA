//Ernesto Poisot Avila
//A01734765
// Serie.h

#ifndef Serie_h
#define Serie_h

#include <stdio.h>
#include "Video.h"
#include "Episodio.h"

class Serie: public Video{
  
private:
  Episodio episodios[5]{};
  int cantidad;
  
public:
  //constructor
  Serie();
  Serie(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int, );
  // Destructor 
  ~Serie();
  //set
  void setEpisodio(int iEp, Episodio _episodio);
  void setCantidad(int _cantidad);
  //get
  Episodio getEpisodio(int _iEp);
  int getCantidad();
  //resto
  double calculaCalPromedio(); 
  string str();

};


#endif /* Serie_h */
