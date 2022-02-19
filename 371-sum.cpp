//sum of two integer without using + or -

#include <iostream>

 int get_sum(int a, int b) 
{
    unsigned carry{};
    while(b != 0)
    {
        carry = a & b;
        a =  a^b;
        b = carry << 1;
    }
return a;    
}