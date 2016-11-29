#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <iostream>
#include <string>
#include <vector>

#include "utilities.h"

namespace gascalculator {

class Interface {

public:

  void intro();
  std::vector<input> getInputs();
  input getInput();
  void displayAnswer(input answer);
  std::string getAnswerUnit();
  void run();

private:

  bool pressure_;
  bool mass_;
  bool volume_;
  bool temperature_;

};

} // namespace gascalculator

#endif // INTERFACE_H_
