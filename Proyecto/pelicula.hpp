#ifndef pelicula_hpp
#define pelicula_hpp
#include <stdio.h>
using namespace std;
#include <iostream>
#include "video.hpp"

class pelicula : public video{
  
private:
  int oscares;
public:
  pelicula();
  pelicula(string, string, int, string, double, int);

  void setOscares(int _oscares);
  int getOscares();
  
  string str( );
};


#endif /* pelicula_hpp */

