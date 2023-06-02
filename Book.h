#pragma once
#include "Material.h"

class Book : public Material {
public:
  Book();
  Book(const std::string&, int year, const std::string&, const std::string& genre, int);
  Book(const Book&);
  ~Book() = default;
  Book& operator=(const Book&);
  void set_author(const std::string&);
  const std::string& get_author() const;
  void set_genre(const std::string&);
  const std::string& get_genre() const;
  void set_pages(int);
  const int get_pages() const;
  void displayInfo() const override;
private:
  std::string m_author;
  std::string m_genre;
  int m_pages_num;
};