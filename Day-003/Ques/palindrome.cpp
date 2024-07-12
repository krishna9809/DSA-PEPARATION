// Ques-3 Given an integer N, return true if it is a palindrome else return false.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Digit"<<endl;
    cin>>n;

    int sum =0;
    int reserve = n;

    while(n > 0){
    int rem = n%10;
    sum = sum*10+ rem;
    n = n/10;
    }

    if(reserve == sum){
        cout<<"No. is Palindrome"<<endl;
    }

    else{
        cout<<"No. is Not Plaindrome"<<endl;
    }

    return 0;
}