// Top 100 Problem  -> 1st Problem

// Problem -> Uncommon Words from two Sentences

#include<bits/stdc++.h>
 
using namespace  std;

map<string,int>mp;

void StringSTR(string s){

    stringstream str(s);
    string word;
    while(str>>word){
        mp[word]++;
    }
}
int main(){

    string s1;
    string s2;
    cout<<"Enter The First String  : "<<endl;
    cin>>s1;
    cout<<endl;
    cout<<"Enter the Second String : "<<endl;
    cin>>s2;
    

    vector<string>ans;

    StringSTR(s1);
    StringSTR(s2);

    for(auto x:mp){
        if(x.second==1){
            ans.push_back(x.first);
        }
    }
    cout<<"The Uncommon Strings are : "<<endl;

    for(auto i:ans){
        cout<<i<<" ";
    }

     return 0;
}
