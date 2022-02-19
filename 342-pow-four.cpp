// find if number is power of 4

#include <iostream>

 bool isPowerOfFour(int n) 
 {
 if(n<1){return false;}
  if(n==1){return true;}
  if( ( n& (n-1)) == 0)
    {
      while(n)
      {
         n = n >> 2;
         if((n&1) == 1) {return true;}
       }
     }
  return false;
}
