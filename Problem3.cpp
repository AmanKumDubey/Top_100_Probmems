// Top 100 Problem  -> 3rd Problem
// Problem -> Fill Suduko

#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>>&board, int val){

    for(int i=0;i<9;i++){
        if(board[row][i]==val){
            return false;
        }
        if(board[i][col]==val){
            return false;
        }
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    
    return true;
}

bool solve(vector<vector<int>>&board){

    for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){
            // cell empty
            if(board[row][col]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(row,col,board,val)){
                        board[row][col]=val;

                        if(solve(board)){
                            return true;
                        }
                        else{
                            board[row][col]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main(){

    vector<vector<int>>arr={ {3, 0, 6, 5, 0, 8, 4, 0, 0},
                                {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                {0, 0, 3, 0, 1, 0, 0, 8, 0},
                                {9, 0, 0, 8, 6, 3, 0, 0, 5},
                                {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
                                {1, 3, 0, 0, 0, 0, 2, 5, 0},
                                {0, 0, 0, 0, 0, 0, 0, 7, 4},
                                {0, 0, 5, 2, 0, 6, 3, 0, 0} };
        
    solve(arr);

    for(int i=0;i<9;i++){
        cout<<"[ ";
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" ] "<<endl;
    }


    return 0;
}