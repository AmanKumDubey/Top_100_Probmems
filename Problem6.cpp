// Top 100 Problem  -> 6th Problem

// Checking for Prime Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to determine if a number is prime.
// Example:
// Input: number = 7
// Output: Prime
// Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.

#include<bits/stdc++.h>
using namespace std;

// Through Loop

bool isPrime(int n){

    if(n==1 || n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// Through Recursion

bool isPrimeR(int n, int i=2){

    if(n<=2){
        return (n==2)?true:false;
    }
    if(n%i==0){
        return false;
    }
    if(i*i>n){
        return true;
    }
    return isPrimeR(n,i+1);

}
int main(){

    int n;
    cout<<"Enter Number for Cheaking Prime or not : "<<endl;
    cin>>n;

    
    if(isPrimeR(n)){
        cout<<n<<" is a Prime Number ."<<endl;
    }
    if(isPrime(n)){
         cout<<n<<" is a Prime Number ."<<endl;
    }
    else{
        cout<<n<<" is not a prime number ."<<endl;
    }

    return 0;
}