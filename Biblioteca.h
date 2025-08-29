#pragma once

#include "Libro.h"

class Library{
  Book* books = nullptr;
  int sz = 0;

public:
  Library() = default;
  //contructor copia
  Library(const Library& other);
  //Operador asignacion
  Library& operator = (const Library& other);
  //Destructor
  ~Library();

  //Metodos
  void add_book(const Book& book);
  void show_books();

};
