#ifndef pelicula_hpp
#define pelicula_hpp

#include <stdio.h>

#include <string>
using namespace std;
#include "video.hpp"

class pelicula : public video{
  
private:
    int oscares;
public:
    Pastel();
    void dibuja();
};


#endif /* Pastel_hpp */
