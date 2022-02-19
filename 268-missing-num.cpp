// find missing number in range

#include <iostream>
#include <vector>

int missing_num(std::vector<int>& nums)
{
    int missing{};
    for(int i = 0; i < nums.size() ; ++i)
    {
      missing ^= nums[i] ^ i;
    }
  return missing ^ nums.size();
}