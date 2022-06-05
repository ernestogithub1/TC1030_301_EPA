
#include <iostream>
using namespace   std;
#include "video.hpp"
#include "pelicula.hpp"
#include "serie.hpp"


int main(int argc, const char * argv[]) {
    Pastel pastelitoBimbo, oreo, pastelMango, pastelFresa;
    Pizza pizza, pizza2, pizza3;
    // Una clase abstracta no se puede instanciar
    //Alimento comida;
    
    Alimento *ptrArrAlimentos[] ={
        &pastelitoBimbo, &pizza, &pastelMango, &pastelFresa, &pizza3, &oreo, &pizza2, &pizza };
    
    Alimento *ptrArrAlimentos2[] ={
        new Pastel(), new Pizza(), new Pastel(),new Pizza(),new Pizza(),new Pizza(),new Pizza(),new Pizza()};
    
    cout << "**** Alimentos Grupo2 ****" << endl;
    for(int iR = 0; iR < 8; iR++)
        ptrArrAlimentos[iR]->dibuja();
    
    cout << "**** Alimentos Grupo3 ****" << endl;
    for(int iR = 0; iR < 8; iR++)
          ptrArrAlimentos2[iR]->dibuja();
    return 0;
}

