#include "Biblioteca.h"

Library::Library(const Library& other):sz(other.sz){

  books = new Book[sz];
  for (int i = 0; i< sz; ++i){
   books[i] = other.books[i];
  }
}

Library & Library::operator=(const Library& other){
 //verificar si soy yo
 if (&other == this) return *this;

 //Borrar el contenido anterior
 delete [] books;

 //Actualizar sz
 sz = other.sz;

 books = new Book[sz];
 for (int i = 0; i < sz; ++i){
  books[i] = other.books[i];
 }
 //retorna a si mismo
 return *this;
}

Library::~Library(){

}

void Library::add_book(const Book& book){

}

void Library::show_books(){

}
