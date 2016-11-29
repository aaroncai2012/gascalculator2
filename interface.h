#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <iostream>
#include <string>
#include <vector>

#include "utilities.h"

namespace gascalculator {

class Interface {

public:

  Interface();
  void displayAnswer(input answer);
  void run();

private:

  bool pressure_;
  bool volume_;
  bool mass_;
  bool temperature_;

  void intro();
  std::string getInputType();
  std::string getInputUnit(std::string inputType);
  signum getInputValue(std::string inputType, std::string inputUnit);
  input getInput();
  std::string getAnswerUnit();
  std::vector<input> getInputs();

};

} // namespace gascalculator

#endif // INTERFACE_H_
