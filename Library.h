#pragma once
#include "Book.h"
#include "DVD.h"
#include "Journal.h"
#include <vector>

class Library {
public:
  Library();
  Library(const Library&);
  ~Library();
  Library& add(Material*);
  Library& remove(Material*);
  Library& borrow(Material*);
  Library& return_back(Material*);
  bool isInLibrary(Material*);
  void findInLibrary(const std::string&) const;
  void displayMaterial() const;
private:
  std::vector<Material*> m_lib_materials;
};