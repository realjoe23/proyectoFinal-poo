#include "name.hpp"

Name::Name() : last(), first() {}

Name::Name(const Name& other) : last(other.last), first(other.first) {}

Name::Name(const std::string& last, const std::string& first)
    : last(last), first(first) {}

std::string Name::getLast() const {
  return last;
}

std::string Name::getFirst() const {
  return first;
}

std::string Name::toString() const {}

void Name::setLast(const std::string& l) {
  this->last = l;
}

void Name::setFirst(const std::string& f) {
  this->first = f;
}

Name& Name::operator=(const Name& n) {
  this->last = n.last;
  this->first = n.first;

  return *this;
}

Name Name::operator-(const Name& other) const {}

Name Name::operator/(const Name& other) const {}

bool Name::operator==(const Name& other) const {}

bool Name::operator!=(const Name& other) const {}

bool Name::operator<(const Name& other) const {}

bool Name::operator>(const Name& other) const {}

bool Name::operator<=(const Name& other) const {}

bool Name::operator>=(const Name& other) const {}

std::istream& operator>>(std::istream& is, Name& obj) {}

std::ostream& operator<<(std::ostream& os, const Name& obj) {}

Name Name::operator*(const Name& other) const {}

Name Name::operator+(const Name& other) const {}
