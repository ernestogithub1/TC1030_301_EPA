#include "serie.hpp"

serie::serie():video(){
  cantidad=0;
}
serie:serie(string_id,sring_titulo,int_duracion,string_genero,double_calificacionPromedio);
video(_iD,_titulo,_duracion,_genero,0){
 cantidad=0; 
}


void serie::setEpisodio(int_index,episodio_episodio){
  
}
void serie::getCantidad(int_index){
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
  
  if(cantidad>0)
    return acun/cantidad;
    else 
      return 0;

}
string serie::str(){}
string acum = "";
for(int index=0, index < cantidad; index++)
    acum=acum+episodios[index].str()


return iD + + titulo + + 

