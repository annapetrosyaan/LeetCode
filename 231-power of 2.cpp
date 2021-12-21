
#include <iostream>

bool check(int num)
{
    return num > 0 && !(num & (num - 1));
}

int main()
{ 
    int x = 5;
    std::cout << check(x);
}