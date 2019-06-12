//
// Created by mfbut on 2/21/2018.
//

#include "Person.h"

Person::Person(const std::string& name) : name(name) {}

const std::string& Person::getName() const {
  return name;
}
