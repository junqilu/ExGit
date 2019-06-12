#include <iostream>
#include <vector>
#include "Student.h"
#include "Professor.h"
int main() {
  std::vector<Student> students= {Student("Bob"),
                                  Student("Joe"),
                                  Student("Sally"),
                                  Student("Lauren")};

  Professor prof("Mike", "Chemistry", "Bio Chem", students);

  prof.doWork();
//  prof.Researcher::doWork();
//  prof.Instructor::getName();

  //std::cout << prof.getName() << std::endl;

  return 0;
}
