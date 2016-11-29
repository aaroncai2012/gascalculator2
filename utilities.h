#ifndef UTILITIES_H_
#define UTILITIES_H_

#include <vector>
#include <string>

namespace gascalculator {

struct signum {

  float value;
  int sigfig;

};

struct element {

  std::string name;
  int amount;

};

struct input {

  signum num;
  std::string type;
  std::string unit;
  std::vector<std::string> formula;

};

} // namepsace gascalculator

#endif // UTILITIES_H_
