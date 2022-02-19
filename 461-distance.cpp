/* number of positions that are 
 different between two integers */

 #include <iostream>

 int hamming_distance(int x , int y)
 {
    //XOR x and y which sets bits 
    //to one if theyre different
     x = x ^ y;
    //use y as a counter
    y{};
    while(x)
    {
        //check if index is set 
        if (a & 1)
        {
            ++y;
        }
     x = x >> 1;   
    }
  return y;
 }