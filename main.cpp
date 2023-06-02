#include <iostream>
#include "Library.h"

int main() {
  Library library;
  
  Book* book1 = new Book("Atomic Habits", 2018, "James Clear", "Business & Economics", 320);
  Book* book2 = new Book("The Alchemist", 1988, " Paulo Coelho", "An allegorical novel", 169);
  Journal* journal1 = new Journal("Ca-A Cancer Journal for Clinicians", 2022, "Medicine", 4, 12);
  Journal* journal2 = new Journal("Quarterly Journal of Economics", 2022, "Economics", 2, 4);
  Dvd* dvd1 = new Dvd("Titanic", 1997, "James Cameron", 194);
  Dvd* dvd2 = new Dvd("Forrest Gump", 1994, "Robert Zemeckis", 144);

  std::cout << "Adding materials:\n" << std::endl;
  
  library.add(book1);
  library.add(book2);
  library.add(journal1);
  library.add(journal2);
  library.add(dvd1);
  library.add(dvd2);

  library.displayMaterial();

  std::cout << "\n\nTesting borrow function:\n\n";
  library.borrow(book1);
  library.displayMaterial();

  std::cout << "\n\nTesting return function:\n\n";
  library.return_back(book1);
  library.displayMaterial();
  
  std::cout << "\n\nRemove material:\n" << std::endl;
  library.remove(book1);
  library.displayMaterial();

  std::cout << "\n\nCheck availability: " <<
 library.isInLibrary(book1) << std::endl;
  std::cout << "\n\nSearch in library by title:\n\n";
  library.findInLibrary(book1->get_title());
  std::cout << std::endl;
  library.findInLibrary(book2->get_title());
  
  delete book1;
  delete book2;
  delete journal1;
  delete journal2;
  delete dvd1;
  delete dvd2;
  
  return 0;
}