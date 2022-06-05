class rectangulo
{
public:
double calcularArea();
void setLargo(double_largo);
void setAncho(double_ancho);
double getLargo();
double getAncho();
string str();

private:
double largo,ancho;
};
double Rectangulo::calcularArea(){
return largo*ancho
}

void Rectangulo::setLargo(double_largo){
largo=_largo;
}

void Rectangulo::setAncho(double_ancho){
ancho=_ancho;
}

double Rectangulo::getLargo(){
return largo;
}

double Rectangulo::getAncho(){
return ancho;
}

string Rectangulo::str(){
return "largo="+ to_string(largo)+"\nAncho="+to_string(ancho);
}

};
