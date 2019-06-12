//
// Created by mfbut on 2/21/2018.
//

#ifndef MULTIPLEINHERITANCEEXAMPLE_WORKER_H
#define MULTIPLEINHERITANCEEXAMPLE_WORKER_H

#include "Person.h"
class Worker : public Person{
 public:
  Worker(const std::string& name);
  virtual void doWork() = 0;

};

#endif //MULTIPLEINHERITANCEEXAMPLE_WORKER_H
