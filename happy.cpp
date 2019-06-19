// copyright2019 rrajaram@bu.edu
// copyright2019 soumya@bu.edu
#include <iostream>
using std::cin;
using std::cout;
int number_sum_square(int n) {
  int sum_square = 0;
  while (n > 0) {
    sum_square += (n % 10) * (n % 10);
    n /= 10;
  }
  return sum_square;
}

bool is_happy_number(int n) {
// Code to check whether it is happy or not
  while (true) {
    if (number_sum_square(n) == 1) {
      return true;
    }
    if (number_sum_square(n) == 4) {
      return false;
    } else {
      n = number_sum_square(n);
      is_happy_number(n);
    }
  }
}

int main() {
  int n;
  while (true) {
    cin >> n;
    if (n == 0) {
      break;
    }

    if (is_happy_number(n))
      cout << n << " is happy\n";
    else
      cout << n << " is not happy\n";
  }
}

