//
// Created by mfbut on 2/21/2018.
//

#ifndef MULTIPLEINHERITANCEEXAMPLE_STUDENT_H
#define MULTIPLEINHERITANCEEXAMPLE_STUDENT_H
#include "Person.h"
class Student : public Person{
 public:
  Student(const std::string& name);
};

#endif //MULTIPLEINHERITANCEEXAMPLE_STUDENT_H
