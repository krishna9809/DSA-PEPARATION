// Ques-1 Given an integer N, return the number of digits in N.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Digit"<<endl;
    cin>>n;

    int reserve = n;
    int count = 0;

    while(n != 0){
    count++;
    n = n/10;
    }

    cout<<"No. of DIgit in Your Number is "<<count<<endl;;
    return 0;
}