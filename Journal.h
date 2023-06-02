#pragma once
#include "Material.h"

class Journal : public Material {
public:
  Journal();
  Journal(const std::string&, int, const std::string&, int, int);
  Journal(const Journal&);
  ~Journal() = default;
  Journal& operator=(const Journal&);
  void set_subject(const std::string&);
  const std::string& get_subject() const;
  void set_volume(int);
  const int get_volume() const;
  void set_issue(int);
  const int get_issue() const;
  void displayInfo() const override;
private:
  std::string m_subject;
  int m_volume;
  int m_issue;
};