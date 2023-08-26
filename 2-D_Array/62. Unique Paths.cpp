class Solution {
public:
    int uniquePaths(int m, int n) {

        //using combination we note that to reach end element we take m+n-2 i.e is N and n-1 or m-1 steps to reach end 
        //i.e r use NCr.

        int N = m+n-2;
        int r = m-1;
        long res = 1;

        for(int i=1;i<=r;i++){
          res = res * (N-r+i)/i; //remember this standard formula for finding combination
        }
        return (int)res;
    }
};