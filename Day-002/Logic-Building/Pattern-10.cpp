//     Pattern 10
//   *  
//   **
//   ***  
//   **
//   *

#include<iostream>
using namespace std;


int main(){
cout<<"Enter the Digit"<<endl;
int n;
cin>>n;

    for(int i = 0 ; i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

       for(int i = 0 ; i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}