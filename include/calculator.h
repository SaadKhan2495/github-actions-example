#ifndef CALCULATOR_H
#define CALCULATOR_H

class calculator {
public:
  calculator(const int &value);
  int add(int add_value);
  int subtract(int subtract_value);
  int multiply(int multiply_value);
  int divide(int divide_value);
  int get_value() const;

private:
  int _value;
};

#endif