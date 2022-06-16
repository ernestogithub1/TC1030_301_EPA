// Ernesto Poisot Avila
// A01734765
// peliculas.cpp

#include "peliculas.hpp"
#include "pelicula.hpp"
#include <sstream>
#include <fstream>

//constructor
peliculas::peliculas(){}


//resto
int Peliculas::leerArchivo()
{
    //fin-file input
    fstream fin;
    
    string row[6];
  
    string line;
    string word;

    fin.open("pelicula.csv",ios::in);

    int cantidad=0;

    while (getline(fin,line)){

        stringstream s(line);
        int iR=0;

        while(getline(s,word, ','))
        {
 
            row[iR++]= word;
        }

        arrPtrPeliculas[cantidad]=new pelicula(row[0],     
        row[1], stoi(row[2]), row[3], stof(row[4]),stoi(row[5]));

        cout << "iD: " << row[0] << "\n";
        cout << "Titulo: " << row[1] << "\n";
        cout << "Duracion: " << row[2] << "\n";
        cout << "Genero: " << row[3] << "\n";
        cout << "Calificacion: " << row[4] << "\n";
        cout << "Oscares: " << row[5] << "\n" ;
        cout << "   " << "\n";


        cantidad = cantidad + 1;     
    }
    fin.close();

        for(int iR=0; iR<cantidad;iR++){
            cout<< iR <<"-"<<arrPtrPeliculas[iR]->str()<<endl;
          }
    return cantidad;
}
    // sets
    void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula){
        
        arrPtrPeliculas[cantidad++]= _ptrPelicula;
    }
    void Peliculas::setCantidadPeliculas(int _cantidad){
        cantidad= _cantidad;
    }

    // gets
    Pelicula * Peliculas::getPtrPelicula(string _id){
       return new Pelicula;
    }
    int Peliculas::getCantidadPeliculas(){
        return cantidad;
    }

    // resto
    void Peliculas::reporteTodasLasPeliculas()
    {
        double promedio;
        double acum = 0;
        for(int iR = 0; iR < cantidad; iR++)
        {
        cout << "P" << arrPtrPeliculas[iR]->str() << endl;
        acum = acum + arrPtrPeliculas[iR]->getCalificacion();
        }

        promedio = acum / 35;
        cout << "El promedio es: " << promedio << endl;

    }
    void Peliculas::reporteConCalificacion(float _calificacionPromedio){
        int count=0;
        for (int iR=0; iR < cantidad; iR++){
            if (arrPtrPeliculas[iR]-> getCalificacion()==_calificacionPromedio)
            {
                cout<< iR<< ' ' << arrPtrPeliculas[iR]->str()<<endl;
                count++;
            }
        }
        if (count==0)
        cout<<"No hay peliculas de la calificación deseada: " << _calificacionPromedio <<endl;
    }

    void Peliculas::reporteGenero(string _genero){
        int count=0;
        
        for (int iR=0; iR < cantidad; iR++){
            if (arrPtrPeliculas[iR]-> getGenero()== _genero)
            {
                cout<< iR<< ' ' << arrPtrPeliculas[iR]->str()<<endl;
                count++;
            }
        }
        if (count==0)
        cout<<"No hay peliculas del género: " << _genero <<endl;
    }
