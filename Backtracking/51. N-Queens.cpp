#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    
    bool can_place(vector<vector<int>>& board,int n,int x,int y){

        for(int k=0;k<n;k++){
            if(board[k][y]==1){
                return false;
            }
        }

        int i = x;
        int j = y;

        while(i>=0 && j>=0){
            if(board[i][j]==1){
                return false;
            }
            i--;
            j--;
        }

         i =x;
         j = y;

        while(i>=0 && j<n){
            if(board[i][j]==1){
                return false;
            }
            i--;
            j++;
        }

       return true;
    }

    void helper(vector<string>& temp,vector<vector<string>>& ans,vector<vector<int>>& board,int n,int i){
              
              //base case
              if(i==n){
                  ans.push_back(temp);
                  return;
              }

              for(int j=0;j<n;j++){

                  if(can_place(board,n,i,j)){
                   temp[i][j]='Q';
                   board[i][j]=1;
                  
                 
                   helper(temp,ans,board,n,i+1);

                   //backtrack
                   temp[i][j] = '.';
                   board[i][j]=0;
            
                  }
              }

    }


    vector<vector<string>> solveNQueens(int n) {

          vector<string> temp(n,string(n,'.'));
          vector<vector<string>> ans;

          vector<vector<int>> board(n,vector<int>(n,0));
          int i=0;

          helper(temp,ans,board,n,i);
        
        return ans;
    }
};