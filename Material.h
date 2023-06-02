#pragma once
#include <string>
#include <iostream>

class Material {
public:
  Material();
  Material(const Material&);
  ~Material() = default;
  Material& operator=(const Material&);
  const std::string get_title() const;
  void set_title(const std::string&);
  double get_year() const;
  void set_year(const double);
  void set_isBorrowed(bool);
  const bool get_isBorrowed() const;
  virtual void displayInfo() const;
protected:
  std::string m_title;
  int m_year;
  bool m_isBorrowed;
};