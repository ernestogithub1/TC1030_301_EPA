#ifndef video_hpp
#define video_hpp
#include <string>
using namespace std;
#include <stdio.h>


class video{
  
private:
string iD;
string titulo;
int duracion;
string genero;
double calificacionPromedio;

 
public:

video();
video(string, string, int, string, double); 

void setiD(string _id);
void setTitulo(string _titulo);
void setDuracion(int _duracion);
void setGenero(string _genero);
void setCalificacion(double _calificacion);

sting getiD();
string getTitulo();
int getDuracion();
string getGenero();
double getCalificacion();
  
string str():


};

#endif /* video_hpp */


