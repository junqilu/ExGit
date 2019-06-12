//
// Created by mfbut on 2/21/2018.
//

#ifndef MULTIPLEINHERITANCEEXAMPLE_PROFESSOR_H
#define MULTIPLEINHERITANCEEXAMPLE_PROFESSOR_H

#include "Instructor.h"
#include "Researcher.h"

class Professor : public Researcher, public Instructor {
 public:
  Professor(const std::string& name,
            const std::string& field,
            const std::string& subject,
            const std::vector<Student>& students);
  virtual void doWork() override;

};

#endif //MULTIPLEINHERITANCEEXAMPLE_PROFESSOR_H
