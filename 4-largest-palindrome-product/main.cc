/**
 * Largest palindrome product
 *
 * A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 */

#include <iostream>
#include <vector>

/*
 * Returns true if the number is a palindrome
 */
bool
is_palindrome(int nb) {
  std::vector<int> numbers;
  while ( nb > 0 ) {
    numbers.push_back(nb%10);
    nb /= 10;
  }
  int s = numbers.size();
  int mid = numbers.size() / 2;
  for (int i = 0; i < mid; ++i) {
    if (numbers[i] != numbers[s - i - 1]) {
      return false;
    }
  }
return true;
}

int main(int argc, char *argv[])
{
  int pal = 0;
  for (int nb1 = 999; nb1 > 99; --nb1) {
    int to_test = nb1 * 999;
    if (to_test < pal) {
      break;
    }
    for (int nb2 = 999; nb2 > 99; --nb2) {
      if (to_test < pal) {
        break;
      }
      if (is_palindrome(to_test)) {
        pal = to_test;
      }
      to_test -= nb1;
    }
  }

  std::cout << "Palindrome = " << pal << std::endl;

  return 0;
}
