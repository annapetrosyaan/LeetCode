/* given array all elements are repeated 2
 times expect one return that one */

 #include <iostream>
 #include <vector>

 int single_num(std::vector<int>& nums)
 {
     int result{};
     for(const int & i: nums)
     {
         result ^= i;
     }
 return result; 
 }
