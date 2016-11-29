#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <vector>
#include <string>

#include "utilities.h"

namespace gascalculator {

class Calculator {

public:

  input calculate(std::vector<input> inputs, std::string unit);


private:

  std::string answerType(std::vector<input> inputs);
  input convert(input input, std::string unit);

};

} // namespace gascalculator

#endif // CALCULATOR_H_
