// Pattern-09
//   *  
//  ***
// ***** 
// *****  
//  ***
//   *   

#include<iostream>
using namespace std;


int main(){
cout<<"Enter the Digit"<<endl;
int n;
cin>>n;

    for(int i = 0 ; i<n;i++){
        // for space 
        for(int j = 0; j<n-i-1;j++){
            cout<<" ";
        }
        // for star
        for(int k = 0;k<i;k++){
            cout<<"*";
        }

        // for 2nd pattern
        for(int l = 0;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

        for(int i = 0 ; i<n;i++){
        // for space 
        for(int j = 0; j<=i-1;j++){
            cout<<" ";
        }
        // for star
        for(int k = 0;k<n-i-1;k++){
            cout<<"*";
        }

        // for 2nd pattern
        for(int l = 0;l<n-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}

