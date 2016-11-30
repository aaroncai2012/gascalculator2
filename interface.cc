#include "interface.h"

namespace gascalculator {

  Interface::Interface() {
    pressure_ = false;
    mass_ = false;
    volume_ = false;
    temperature_ = false;
  }

  void Interface::intro() {
    std::cout << "Welcome to Aaron's Gas Calculator!"                     << std::endl
              << "This handy tool calculates unknown gas measurements"    << std::endl
              << "based on three given measurements"                      << std::endl
              << "Intended for checking work with ideal gas law problems" << std::endl
              << "Not for cheating"                                       << std::endl;
  }

  std::string Interface::getInputType() {
    std::string type = " ";
    while (type != "p" && type != "v" && type != "m" && type != "t") {
      std::cout << "Choose one of the following to input" << std::endl
               << "pressure (p), volume (v), mass(m), temperature(t)" << std::endl
               << "Enter your selection here: ";
      std::cin >> type;
      std::cout << std::endl;
    }
    if (type == "p") {
      return "pressure";
    }
    else if (type == "v") {
      return "volume";
    }
    else if (type == "m") {
      return "mass";
    }
    else if (type == "t") {
      return "temperature";
    }
    //return type;
  }

  std::string Interface::getInputUnit(std::string inputType) {
    if (inputType == "pressure") { return "atmospheres"; }
    else if (inputType == "volume") { return "litres"; }
    else if (inputType == "mass") { return "moles"; }
    else if (inputType == "temperature") { return "kelvins"; }
  }

  signum Interface::getInputValue(std::string inputType, std::string inputUnit) {
    signum inputValue;
    std::cout << "Please enter the measurement for the " << inputType << " in " << inputUnit << ": ";
    std::cin >> inputValue.value;
  }

  input* Interface::getInput() {
    input* in = new input;
    in->type = getInputType();
    in->unit = getInputUnit(in->type);
    in->num = getInputValue(in->type, in->unit);
    return in;
  }

  std::vector<input*> Interface::getInputs() {
    std::vector<input*> in;
    for(int i = 0; i < 3; ++i) {
      in.emplace_back(getInput());
    }
    return in;
  }

  std::string Interface::getAnswerUnit() {
    std::string answerUnit;
    std::cout << "Which unit would you like your answer to be in?" << std::endl;
    std::cin >> answerUnit;
    return answerUnit;
  }

} // namespace gascalculator
