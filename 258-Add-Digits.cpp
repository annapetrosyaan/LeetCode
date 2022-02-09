/*Given an integer num, repeatedly add all its 
digits until the result has only one digit, and return it. */

int addDigits(int num) 
{
  int res{};
  while (num>0)
  {
    res += num % 10;
    num = num / 10;
    if(num == 0 && res > 9)
    {
     num = res;
     res = 0;
    }
  }
return res;
}