#include "Library.h"

Library::Library() : m_lib_materials() {};

Library::Library(const Library& c_lib_materials) {
  std::cout << "Copy constructor." << std::endl;
  for (const auto* material : c_lib_materials.m_lib_materials) {
    if (const auto* book = dynamic_cast<const Book*>(material)) {
      m_lib_materials.push_back(new Book(*book));
    }
    else if (const auto* dvd = dynamic_cast<const Dvd*>(material)) {
      m_lib_materials.push_back(new Dvd(*dvd));
    }
    else if (const auto* journal = dynamic_cast<const Journal*>(material)) {
      m_lib_materials.push_back(new Journal(*journal));
    }
  }
}

Library::~Library() {
  for(auto material : m_lib_materials) {
    delete &material;
  }
}

Library& Library::add(Material* material) {
  m_lib_materials.push_back(material);
  return *this;
}

Library& Library::remove(Material* material) {
  int elem = 0;
  for(; elem < m_lib_materials.size(); ++elem) {
    if(m_lib_materials[elem] == material) break;
  }
  m_lib_materials.erase(m_lib_materials.begin() + elem);
  return *this;
}

Library& Library::borrow(Material* material) {
  if(material->get_isBorrowed() == false) {
    material->set_isBorrowed(true);
  }
  return *this;
}

Library& Library::return_back(Material* material) {
  if(material->get_isBorrowed() == true) {
    material->set_isBorrowed(false);
  }
  return *this;
}

bool Library::isInLibrary(Material* material) {
  for(auto m : m_lib_materials) {
    if(m == material) return true;
  }
  return false;
}

void Library::displayMaterial() const {
  for(const auto material : m_lib_materials) {
    std::cout << "-----------------------------" << std::endl;
    material->displayInfo();
    if(material->get_isBorrowed()) {
      std::cout << "Borrow status: The material is borrowed." << std::endl;
    }
    else {
      std::cout << "Borrow status: The material is availible to borrow." << std::endl;
    }
  }
}

void Library::findInLibrary(const std::string & title) const {
  for(auto material : m_lib_materials) {
    if(material->get_title() == title) {
      std::cout << "Here is the material you were looking for:\n" << std::endl;
      material->displayInfo();
      return;
    }
  }
  std::cout << "The material was not found!" << std::endl;
}