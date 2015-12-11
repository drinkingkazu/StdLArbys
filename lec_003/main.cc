
#include <iostream>

class foo {
public:

  foo()  { _value = 0; }
  ~foo() {}

  double _value;

};

int main() {

  foo obj1;

  std::cout << "[0] obj1._value = " << obj1._value << std::endl;

  foo* obj_ptr = new foo;

  std::cout << "[1] obj_ptr->_value = " << obj_ptr->_value << std::endl;

  std::cout << "[2] (*obj_ptr)._value = " << (*obj_ptr)._value << std::endl;

  std::cout << "[3] obj_ptr print out: " << obj_ptr << std::endl;

  return 0;
};
