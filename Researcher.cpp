//
// Created by mfbut on 2/21/2018.
//

#include <iostream>
#include "Researcher.h"

Researcher::Researcher(const std::string& name, const std::string& field) : Worker(name), field(field) {}

void Researcher::doWork() {
  std::cout << name << " did some research in " << field << std::endl;
}
