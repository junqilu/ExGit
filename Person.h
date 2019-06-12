//
// Created by mfbut on 2/21/2018.
//

#ifndef MULTIPLEINHERITANCEEXAMPLE_PERSON_H
#define MULTIPLEINHERITANCEEXAMPLE_PERSON_H

#include <string>
class Person {
 public:
  Person(const std::string& name);
  const std::string& getName() const;
 protected:
  std::string name;

};

#endif //MULTIPLEINHERITANCEEXAMPLE_PERSON_H
