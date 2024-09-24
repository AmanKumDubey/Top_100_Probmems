// Top 100 Problem  -> 7th Problem

// Validating Leap Years
// Difficulty: Easy
// Topics: Basic Programming, Date Handling
// Description: Write a program to check if a given year is a leap year.
// Example:
// Input: year = 2020
// Output: Leap Year
// Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.

#include<bits/stdc++.h>
using namespace std;

bool isLeap(int year){

    if((year%4==0)&&(year%100!=0) || (year%400==0)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int year;
    cout<<"Enter Year for Cheaking : "<<endl;
    cin>>year;

    if(isLeap(year)){
        cout<<year<<" is a Leap Year . "<<endl;
    }
    else{
        cout<<year<<" is not a Leap year . "<<endl;
    }
    return 0;
}
