// Top 100 Problem  -> 4rd Problem

// Determining Even/Odd Numbers
// Difficulty: Easy
// Topics: Basic Programming
// Description: Write a program to check whether a number is even or odd.
// Example:
// Input: number = 4
// Output: Even
// Explanation: Since 4 is divisible by 2, it is an even number.

#include<iostream>

using namespace std;

// Cheak Odd Or Even Through Loop
bool isprime(int n){

    if(n==0 || n==1){
        return false;
    }
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

// Through Bitwise Operator

bool CheakNumber(int n){

    return (!(n&1));
}
int main(){

    int n;
    cout<<"Enter a number that U want to cheak Prime or not : "<<endl;
    cin>>n;

    if(isprime(n)){
        cout<<n<<" is Even Number ."<<endl;
    }
    if(CheakNumber(n)){
        cout<<n<<" is an Even Number ."<<endl;
    }
    else{
        cout<<n<<" is  an Odd Number . "<<endl;
    }

    return 0;
}