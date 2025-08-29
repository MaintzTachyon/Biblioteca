#include <iostream>
#include "Libro.h"

void book_test(){
  auto b1 = Book("Cien años de Soledad", "Gabriel Garcia Marquez",1960);
  b1.show_info();
}


int main(){
  book_test();
}
