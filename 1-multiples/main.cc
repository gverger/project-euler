/**
 * Multiples of 3 and 5
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we
 * get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <iostream>

int main(int argc, char *argv[])
{
  int nb_5 = 999 / 5;
  int sum_5 = (nb_5 * (nb_5 + 1) / 2) * 5;
  int nb_3 = 999 / 3;
  int sum_3 = (nb_3 * (nb_3 + 1) / 2) * 3;
  int nb_15 = 999 / 15;
  int sum_15 = (nb_15 * (nb_15 + 1) / 2) * 15;

  int sum = sum_5 + sum_3 - sum_15;
  std::cout << "Somme = " << sum << std::endl;

  return 0;

}
