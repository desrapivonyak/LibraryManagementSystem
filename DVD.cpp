#include "DVD.h"

Dvd::Dvd() : m_director(""), m_duration(0.0) {};

Dvd::Dvd(const std::string& title, int year, const std::string& director, double duration) {
  m_title = title;
  m_year = year;
  m_director = director;
  m_duration = duration;
  m_isBorrowed = false;
}

Dvd::Dvd(const Dvd& c_dvd) : m_director(c_dvd.m_director), m_duration(c_dvd.m_duration) {};

Dvd& Dvd::operator=(const Dvd& a_dvd) {
  if(&a_dvd != this) {
    m_director = a_dvd.m_director;
    m_duration = a_dvd.m_duration;
  }
  return *this;
}

void Dvd::set_director(const std::string& director) {
  m_director = director;
}

const std::string& Dvd::get_director() const {
  return m_director;
}

void Dvd::set_duration(double duration) {
  m_duration = duration;
}

const double Dvd::get_duration() const {
  return m_duration;
}

void Dvd::displayInfo() const {
  std::cout << "Title: " << m_title << std::endl;
  std::cout << "Year: " << m_year << std::endl;
  std::cout << "Director: " << m_director << std::endl;
  std::cout << "Duration: " << m_duration << std::endl;
}