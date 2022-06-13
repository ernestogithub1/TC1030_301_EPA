

#include <iostream>
using namespace std;
#include "video.hpp"

int main( )
{ Rectangulo rect;
 double area;
 rect .setLargo(10);
 rect .setAncho(5);
 area = rect. calcularArea();
 cout << rect.str( ) <<
 "\nEl area es "<< area <<endl;
 return 0;
}

