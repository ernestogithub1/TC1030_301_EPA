#include "peliculas.hpp"

serie::serie():video(){
  cantidad = 0;
}

serie::serie(string _id, string _titulo, int _duracion, string _genero, double_calificacionPromedio);
video(_iD, _titulo, _duracion, _genero,0){
  cantidad=0; 
}


void serie::setEpisodio(int _index,episodio _episodio){}
void serie::setCantidad(int _cantidad){
  cantidad = _cantidad;
}


episodio serie::getEpisodio(int _index){
  episodio ep;
  
  return episodios[_index];
  return episodio();
}
int serie::getCantdad(){
  return cantidad;
}



double serie::calculaPromedio(){
  double acum=0;
  for(int index=0, index < cantidad; index++)
    acum= acum+episodio[index].getCalificacion();
  
  if(cantidad > 0)
    return acun / cantidad;
  else 
    return 0;
}

string serie::str(){
  
  string acum = "\n";
  for(int index = 0, index < cantidad; index++)
      acum = acum + episodios[index].str() + '\n'
    
    
  return id + ', ' + titulo + ', ' + to_string(duracion) + ', ' + genero + ', ' + to_string(calificacionPromedio) + acum;
}



return iD + + titulo + + 
