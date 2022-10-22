#include <iostream>

int main() {
  // declare
  int array[5] = { 1, 2, 3, 4, 5 };

  // access element by position/index
  std::cout << array[2] << std::endl;

  // modify element by index
  array[2] = 37;
  std::cout << array[2] << std::endl;

  return 0;
}