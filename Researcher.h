//
// Created by mfbut on 2/21/2018.
//

#ifndef MULTIPLEINHERITANCEEXAMPLE_RESEARCHER_H
#define MULTIPLEINHERITANCEEXAMPLE_RESEARCHER_H

#include <string>
#include "Worker.h"
class Researcher  : public Worker{
 public:
  Researcher(const std::string& name, const std::string& field);
 protected:
 public:
  virtual void doWork() override;
 protected:
  std::string field;
};

#endif //MULTIPLEINHERITANCEEXAMPLE_RESEARCHER_H
