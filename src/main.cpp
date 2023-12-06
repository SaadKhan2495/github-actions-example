#include "calculator.h"
#include <iostream>

int main() {
  calculator cal(10);
  std::cout<<"Value: "<<cal.get_value()<<std::endl;
  std::cout<<"Add 25 | Value: "<<cal.add(25)<<std::endl;
  std::cout<<"Sub  5 | Value: "<<cal.subtract(5)<<std::endl;
  std::cout<<"Mul  2 | Value: "<<cal.multiply(2)<<std::endl;
  std::cout<<"Div  0 | Value: "<<cal.divide(0)<<std::endl;
  std::cout<<"Div 10 | Value: "<<cal.divide(10)<<std::endl;
}
