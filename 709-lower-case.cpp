class Solution {
public:
    string toLowerCase(string s) 
    {
       for(auto& i: s)
      {
         if(i>='A' && i<='Z')
         {
            i+=32;
         }
       }
    return s;
   }
};
~    
