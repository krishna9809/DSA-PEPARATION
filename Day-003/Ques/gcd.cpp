// Ques-4 Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>n1>>n2;
    int gcd;

    for(int i = 1; i <= min(n1,n2);i++){
        if((n1%i == 0)&& (n2%i == 0)){
            gcd = i;
        }
     
    }
       cout<<"Your GSD is "<<gcd<<endl;

    return 0;
}

