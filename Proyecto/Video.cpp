//Ernesto Poisot Avila
//A01734765
// Video.cpp

#include "Video.cpp"


//constructores
  Video::Video()
  {
  iD = 0;
  titulo = vacio;
  duracion = 0;
  genero = vacio;
  calificacionPromedio = 0;
  }


  Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio)
  {
  iD = _iD;
  titulo = _titulo;
  duracion = _duracion;
  genero = _genero;
  calificacionPromedio = _calificacionPromedio;
  }


//set
void Video::setId(string _iD)
{
 iD = _iD;
}
void Video::setTitulo(string _titulo)
{
 titulo = _titulo;
}
void Video::setDuracion(int _duracion)
{
 duracion = _duracion;
}
void Video::setGenero(string _genero)
{
 genero = _genero;
}
void Video::setCalificacion(double _calificacion)
{
 calificacion = _calificacion;
}


//get
string Video::getID( )
{
return iD;
}
string Video::getTitulo( )
{
return titulo;
}
int Video::getDuracion( )
{
return duracion;
}
string Video::getGenero( )
{
return genero;
}
double Video::getCalificacion( )
{
return calificacionPromedio;
}


//resto
string Video:: str( ){
 return iD + ', ' + titulo + ', ' + to_string(duracion) + ', ' + genero + ', ' + to_string(calificacionPromedio);
}
