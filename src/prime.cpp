#include <string>
#include <vector>
#include "prime.hpp"

std::vector<int> Factorizer::primeFactorization(int num)
{

   std::vector<int> factors;

   if (num <= 1)
   {
      return factors;
   }

   for (int i = 2; i <= num; i++)
   {
      while (num % i == 0)
      {
         factors.push_back(i);
         num = num / i;
      }
   }

   return factors;
}