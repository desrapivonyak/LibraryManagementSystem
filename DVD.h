#pragma once
#include "Material.h"

class Dvd : public Material {
public:
  Dvd();
  Dvd(const std::string&, int, const std::string&, double);
  Dvd(const Dvd&);
  ~Dvd() = default;
  Dvd& operator=(const Dvd&);
  void set_director(const std::string&);
  const std::string& get_director() const;
  void set_duration(double);
  const double get_duration() const;
  void displayInfo() const override;
private:
  std::string m_director;
  double m_duration; 
};