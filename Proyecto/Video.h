//Ernesto Poisot Avila
//A01734765
// Video.h


#ifndef Video_h
#define Video_h

#include <stdio.h>
#include <iostream>
using namespace std;


class Video{
  
protected:

string iD;
string titulo;
int duracion;
string genero;
double calificacionPromedio;

 
  
  
public:

  //constructores
  Video();
  Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
  
  //sets
  void setiD(string _id);
  void setTitulo(string _titulo);
  void setDuracion(int _duracion);
  void setGenero(string _genero);
  void setCalificacion(double _calificacionPromedio);
  
  //gets
  sting getiD();
  string getTitulo();
  int getDuracion();
  string getGenero();
  double getCalificacion();
  
  //resto
  virtual string str():


};

#endif /* Video_hpp */


