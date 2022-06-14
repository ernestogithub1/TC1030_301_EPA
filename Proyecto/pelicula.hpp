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

  string str( );
};


#endif /* pelicula_hpp */

