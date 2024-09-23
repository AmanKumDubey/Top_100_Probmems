// Top 100 Problem  -> 2nd Problem
// Problem -> Rat in Maze

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>>&arr, vector<vector<bool>>&visited,int n){

    if((x>=0 && x<n) && (y>=0 && y<n) && arr[x][y]==1 && visited[x][y]!=1){
        return true;
    }
    else{
        return false;
    }
}

void solve(int x, int y, vector<vector<int>>&arr, vector<string>&ans, vector<vector<bool>>&visited, string path, int n){

    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    // For Down Call
    visited[x][y]=1;
    if(isSafe(x+1,y, arr, visited, n)){
        solve(x+1,y,arr, ans,visited,path+'D',n);
    }
    // For Left
    if(isSafe(x,y-1,arr, visited,n)){
        solve(x, y-1,arr, ans,visited,path+'L',n);
    }
    // For Right
    if(isSafe(x,y+1,arr, visited,n)){
        solve(x,y+1,arr, ans, visited,path+'R',n);
    }

    // For Up
    if(isSafe(x-1,y,arr, visited,n)){
        solve(x-1,y,arr, ans,visited,path+'U',n);
    }

    visited[x][y]=0;
}

int main(){

    int n=4;
    vector<vector<int>>rate={{1,1,1,1},
                             {1,1,1,1},
                             {1,1,1,1},
                             {1,1,1,1}};
    vector<string>ans;
    string path="";
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    // cout<<"Aman"<<endl;
    solve(0,0,rate,ans, visited, path, n);

      
    for(int i=0;ans.size();i++){
        cout<<ans[i]<<endl;
    }
    

    return 0;
}