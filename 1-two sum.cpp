#include <iostream>

void two_sum(int* num, int target)
{
    int size = sizeof(num);
    for (int i = 0; i < size; ++i)
    {
        if (num[i] + num[i + 1] == target)
        {
            std::cout << i;
            std::cout << " " << i + 1;
        }
    }

}

int main()
{
    int x[] = { 2,7,11,15 };
    two_sum(x, 9);
}