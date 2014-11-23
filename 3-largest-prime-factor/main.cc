/**
 * Largest prime factor
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *
 */

#include <iostream>

int main(int argc, char *argv[])
{
  long number = 600851475143;
  long largest_prime;

  long div = 2;

  while (div * div < number) {
    while (number % div == 0) {
      number /= div;
      largest_prime = div;
      std::cout << "Div = " << div << std::endl;
    }
    div++;
  }

  if (number != 0) {
    largest_prime = number;
  }

  std::cout << "Largest prime factor = " << largest_prime << std::endl;
  return 0;
}
