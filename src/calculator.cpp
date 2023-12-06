#include "calculator.h"
#include <iostream>

calculator::calculator(const int &value) : _value(value) {}

int calculator::add(int add_value) {
  _value += add_value;
  return _value;
}

int calculator::subtract(int subtract_value) {
  _value -= subtract_value;
  return _value;
}

int calculator::multiply(int multiply_value) {
  _value *= multiply_value;
  return _value;
}

int calculator::divide(int divide_value) {
  if (divide_value != 0) {
    _value /= divide_value;
  } else {
    std::cout << "Error: Division by 0 not allowed" << std::endl;
  }
  return _value;
}

int calculator::get_value() const
{
  return _value;
}
