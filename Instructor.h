//
// Created by mfbut on 2/21/2018.
//

#ifndef MULTIPLEINHERITANCEEXAMPLE_INSTRUCTOR_H
#define MULTIPLEINHERITANCEEXAMPLE_INSTRUCTOR_H

#include <string>
#include <vector>
#include "Worker.h"
#include "Student.h"
class Instructor : public Worker{
 public:
  Instructor(const std::string& name, const std::string& subject, const std::vector<Student>& students);
  virtual void doWork() override;
 protected:
  std::string subject;
  const std::vector<Student>& students;
};



#endif //MULTIPLEINHERITANCEEXAMPLE_INSTRUCTOR_H
