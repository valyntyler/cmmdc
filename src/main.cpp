#include <iostream>

int euclid(int a, int b) {
  while (b != 0) {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}

int main() {
  int a, b;

  std::cout << "To find the greates common denominator between a and b, please "
               "supply the following:\n";
  std::cout << "a: ";
  std::cin >> a;
  std::cout << "b: ";
  std::cin >> b;
  std::cout << euclid(a, b);

  return 0;
}
