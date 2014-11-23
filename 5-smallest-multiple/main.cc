/**
 *
 * Smallest multiple
 *
 * 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 *
 */

#include <iostream>

int main(int argc, char *argv[])
{
  int max = 20;
  int factors[max+1];
  for (int i = 2; i <= max; ++i) {
    factors[i] = 0;
  }

  for (int nb = 2; nb <= max; ++nb) {
    int to_test = nb;
    for (int i = 2; i <= to_test; ++i) {
      int nb_i = 1;
      while (to_test % i == 0) {
        nb_i *= i;
        to_test /= i;
      }
      if (factors[i] < nb_i) {
        factors[i] = nb_i;
      }
    }
  }

  int number = 1;

  for (int i = 2; i <= max; ++i) {
    if (factors[i] != 0) {
      number *= factors[i];
    }
  }

  std::cout << "Number = " << number << std::endl;
  return 0;
}
