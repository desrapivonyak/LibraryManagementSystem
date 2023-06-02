#include "Material.h"

Material::Material() : m_title(""), m_year(0), m_isBorrowed(false) {};

Material::Material(const Material& c_material) : m_title(c_material.m_title), m_year(c_material.m_year), m_isBorrowed(c_material.m_isBorrowed) {};

Material& Material::operator=(const Material& a_material) {
  if(&a_material != this) {
    m_title = a_material.m_title;
    m_year = a_material.m_year;
    m_isBorrowed = a_material.m_isBorrowed;
  }
  return *this;
}

void Material::set_title(const std::string& title) {
  m_title = title;
}

const std::string Material::get_title() const {
  return m_title;
}

void Material::set_year(const double year) {
  m_year = year;
}

double Material::get_year() const {
  return m_year;
}

void Material::set_isBorrowed(bool isBorrowed) {
  m_isBorrowed = isBorrowed;
}

const bool Material::get_isBorrowed() const {
  return m_isBorrowed;
}

void Material::displayInfo() const {
}