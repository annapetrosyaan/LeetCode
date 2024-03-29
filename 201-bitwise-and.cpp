/*
Given two integers left and right that represent 
the range [left, right], return the bitwise AND of all numbers in this range, inclusive.
*/

#include <iostream>

int rangeBitwiseAnd(int left, int right) 
{
  while (left < right)
   {
    right -= (right & (-right));
   } 
 return right;   
}