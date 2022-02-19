//number of 1s in binary string

#include <iostream>

int hamming_weight(uint32_t n)
{
   int count{};
   while(n)
   {
       count += (n & 1);
       n = n>> 1;
   }
   return count;
}