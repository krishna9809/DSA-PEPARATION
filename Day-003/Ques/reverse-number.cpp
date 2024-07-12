// Ques -2 Given an integer N return the reverse of the given number.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Digit"<<endl;
    cin>>n;

    int sum =0;

    while(n > 0){
    int rem = n%10;
    sum = sum*10+ rem;
    n = n/10;
    }

    cout<<"Reverse of Your Number is "<<sum<<endl;;
    return 0;
}