// Ques-6 A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Digit"<<endl;
    cin>>n;

    for(int i = 1;i<n/2;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
        
    }
    return 0;
}