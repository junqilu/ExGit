//
// Created by mfbut on 2/21/2018.
//

#include <iostream>
#include "Professor.h"

Professor::Professor(const std::string& name,
                     const std::string& field,
                     const std::string& subject,
                     const std::vector<Student>& students) : Researcher(name, field),
                                                              Instructor("Jones", subject, students) {}

void Professor::doWork() {
  /*
   * If you have inherited functions that have the same name in your base classes
   * You can specify which one to do by prefacing it with the base class's name
   */

  //std::cout << getName() << std::endl; // ambiguous because we have 2 names
  Researcher::doWork();
  std::cout << std::endl;

  //std::cout << name << std::endl;
  Instructor::doWork();
  std::cout << Instructor::name << std::endl;
  std::cout << Researcher::name << std::endl;
}
