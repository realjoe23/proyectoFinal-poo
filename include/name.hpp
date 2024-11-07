#ifndef __NAME_H__
#define __NAME_H__

#include <iostream>
#include <string>
class Name {
 private:
  std::string last;
  std::string first;

 public:
  Name();
  Name(const Name&);
  Name(const std::string& first, const std::string& last);

  std::string getLast() const;
  std::string getFirst() const;

  std::string toString() const;

  void setLast(const std::string&);
  void setFirst(const std::string&);

  Name& operator=(const Name&);

  Name operator+(const Name& other) const;
  Name operator-(const Name& other) const;
  Name operator*(const Name& other) const;
  Name operator/(const Name& other) const;

  bool operator==(const Name& other) const;
  bool operator!=(const Name& other) const;
  bool operator<(const Name& other) const;
  bool operator>(const Name& other) const;
  bool operator<=(const Name& other) const;
  bool operator>=(const Name& other) const;

  friend std::ostream& operator<<(std::ostream& os, const Name& obj);
  friend std::istream& operator>>(std::istream& is, Name& obj);
};
#endif  // __NAME_H__