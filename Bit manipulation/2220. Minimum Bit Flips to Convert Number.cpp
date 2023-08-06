class Solution {
public:
    int minBitFlips(int start, int goal) {


        //Xor start with goal , the number of set bits is the answer 

        int x = start^goal;
 
      //using inbuilt function to count the nuber of set bits 
       int n = __builtin_popcount(x);

        return n;
    }
};