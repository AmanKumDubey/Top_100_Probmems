// Top 100 Problem  -> 7th Problem

// Calculating Armstrong Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to check if a number is an Armstrong number.
// Example:
// Input: number = 153
// Output: Armstrong Number
// Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include<bits/stdc++.h>
using namespace std;
int CountDigit(int number){

    int count=0;
    while(number!=0){
        count++;
        number=number/10;
    }
    return count;
}
bool isArmStrong(int number){

    int count=CountDigit(number);
    int OriginalNumber=number;
    int cont=0;
    while(number!=0){
        int digit=number%10;
        cont+=pow(digit,count);
        number=number/10;
    }

    if(cont==OriginalNumber){
        return true;
    }
    else{
        return false;
    }
    return false;
}

int main(){

    int number;
    cout<<"Enter number for Cheaking Armstrong or not : "<<endl;
    cin>>number;

    if(isArmStrong(number)){
        cout<<number<<" is an Armstrong ."<<endl;
    }
    
    else{
        cout<<number<<" is not an Armstrong number ."<<endl;;
    }

    return 0;
}