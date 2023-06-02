#include "Book.h"

Book::Book() : m_author(""), m_genre(""), m_pages_num(0) {};

Book::Book(const std::string& title, int year, const std::string& author, const std::string& genre, int pages) {
  m_title = title;
  m_year = year;
  m_author = author;
  m_genre = genre;
  m_pages_num = pages;
  m_isBorrowed = false;
}

Book::Book(const Book& c_book) : m_author(c_book.m_author), m_genre(c_book.m_genre), m_pages_num(c_book.m_pages_num) {};

Book& Book::operator=(const Book& a_book) {
  if(&a_book != this) {
    m_author = a_book.m_author;
    m_genre = a_book.m_genre;
    m_pages_num = a_book.m_pages_num;
  }
  return *this;
}

void Book::set_author(const std::string& author) {
  m_author = author;
}

const std::string& Book::get_author() const {
  return m_author;
}

void Book::set_genre(const std::string& genre) {
  m_genre = genre;
}

const std::string& Book::get_genre() const {
  return m_genre;
}

void Book::set_pages(int pages) {
  m_pages_num = pages;
}

const int Book::get_pages() const {
  return m_pages_num;
}

void Book::displayInfo() const {
  std::cout << "Title: " << m_title << std::endl;
  std::cout << "Publish year: " << m_year << std::endl;
  std::cout << "Author: " << m_author << std::endl;
  std::cout << "Genre: " << m_genre << std::endl;
  std::cout << "Number of pages: " << m_pages_num << std::endl;
}