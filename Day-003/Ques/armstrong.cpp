// Ques -5 Given an integer N, return true it is an Armstrong number otherwise return false.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter 3 Digit Number"<<endl;
    cin>>n;

    int sum =0;
    int reserve = n;

    while(n > 0){
    int rem = n%10;
    sum = sum + pow(rem,3);
    n = n/10;
    }

   
    if(reserve == sum){
        cout<<"No. is Armstrong"<<endl;
    }

    else{
        cout<<"No. is Not Armstrong"<<endl;
    }

    return 0;
}