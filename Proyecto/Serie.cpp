//Ernesto Poisot Avila
//A01734765
//Serie.cpp


#include "Serie.h"

//constructores
Serie::Serie():Video(){
  cantidad = 0;
}

Serie::Serie(string _id, string _titulo, int _duracion, string _genero, double_calificacionPromedio); Video(_iD, _titulo, _duracion, _genero,0)
{
  cantidad=0; 
}

 // Destructor
Serie::~Serie(){
  cout << "Objeto destruido" << endl;
}

//sets
void Serie::setEpisodio(int _iEp, Episodio _episodio)
{
  if ((cantidad >= 0) && (_iEp < cantidad))
    episodios[_iEp] = _episodio;
}
  
void Serie::setCantidad(int _cantidad)
{
  if (_cantidad >=0 && _cantidad <= 5){
    cantidad = _cantidad;
  }
  else (_cantidad < 0);{
    return 0;
  }
}

//gets
Episodio Serie::getEpisodio(int _iEp){
  Episodio episodio;
  if ((cantidad >= 0) && (_iEp < cantidad))
    return episodios[_iEp];
  else
    return Episodio();
}

int Serie::getCantidad(){
  return cantidad;
}


//resto
double Serie::calculaCalPromedio(){
  double a = 0;
  for(int iEp = 0; iEp < cantidad; iEp++)
    a = a + episodios[iEp].getCalificacion();

  if (cantidad > 0)
    return a/ cantidad;
  else
    return 0;
} 


string Serie::str(){
  string a = "\n";
  for(int index=0; index< cantidad; index ++)
    a = a + episodios[index].str() + '\n';
  return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + a;
  
}
