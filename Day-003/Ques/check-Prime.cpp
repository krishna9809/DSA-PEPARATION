// Ques - 7 Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Digit"<<endl;
    cin>>n;
    int prime = 0;

    for(int i = 2;i<=n/2;i++){
        if(n%i == 0){
            prime++;
        }
       
        
    }


    if(prime > 0){
        cout<<"No. is not Prime"<<endl;
    }

    else{
        cout<<"No. is Prime"<<endl;
    }

    return 0;
}