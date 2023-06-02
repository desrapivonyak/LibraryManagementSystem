#include "Journal.h"

Journal::Journal() : m_subject(""), m_volume(0), m_issue(0) {};

Journal::Journal(const std::string& title, int year, const std::string& subject, int volume, int issue){
  m_title = title;
  m_year = year;
  m_subject = subject;
  m_volume = volume;
  m_issue = issue;
  m_isBorrowed = false;
}

Journal::Journal(const Journal& c_journal) : m_subject(c_journal.m_subject), m_volume(c_journal.m_volume), m_issue(c_journal.m_issue) {};

Journal& Journal::operator=(const Journal& a_journal) {
  if(&a_journal != this) {
    m_subject = a_journal.m_subject;
    m_volume = a_journal.m_volume;
    m_issue = a_journal.m_issue;
  }
  return *this;
}

void Journal::set_subject(const std::string& subject) {
  m_subject = subject;
}

const std::string& Journal::get_subject() const {
  return m_subject;
}

void Journal::set_volume(int volume) {
  m_volume = volume;
}

const int Journal::get_volume() const {
  return m_volume;
}

void Journal::set_issue(int issue) {
  m_issue = issue;
}

const int Journal::get_issue() const {
  return m_issue;
}

void Journal::displayInfo() const {
  std::cout << "Title: " << m_title << std::endl;
  std::cout << "Year: " << m_year << std::endl;
  std::cout << "Subject: " << m_subject << std::endl;
  std::cout << "Volume: " << m_volume << std::endl;
  std::cout << "Issue: " << m_issue << std::endl;
}