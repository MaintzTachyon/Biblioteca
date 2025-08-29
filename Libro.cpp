#include "Libro.h"
#include <iostream>

Book::Book(
  const std::string& title, const std:: string& author, const int year)
  :title(title), author(author), year(year){}

void Book::show_info(){
  std::cout << "title: " << title << std::endl;
  std::cout << "author: " << author << std::endl;
  std::cout << "year: " << year << std::endl;
}
