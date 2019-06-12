//
// Created by mfbut on 2/21/2018.
//

#include <iostream>
#include "Instructor.h"

Instructor::Instructor(const std::string& name, const std::string& subject, const std::vector<Student>& students) :
    Worker(name), subject(subject), students(students) {

}

void Instructor::doWork() {
  std::cout << name << " teaches " << subject << " to " << std::endl;
  for (const auto& student : students) {
    std::cout << student.getName() << std::endl;
  }
  std::cout <<std::endl;
}
