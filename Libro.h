#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Book {
   std::string title;
   std::string author;
   int year = 0;

public:
  Book() = default;
  Book(
   const std::string& title,
   const std::string& author,
   const int year);
  void show_info();
};

#endif 
