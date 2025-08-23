#include <iostream>

class Libro{
private:
 std::string titulo;
 std::string autor;
 int anio;

public:
Libro(const std::string titulo_, std::string autor, int anio_):titulo(titulo_), autor(autor_), anio(anio_){}
}
void mostrarInformacion(const std::string titulo_, std:string autor_, int anio_){
std::cout<< titulo_ << std::endl;
std::cout<<autor_ << std:: endl;
std::cout<<anio: << std::endl;
}
