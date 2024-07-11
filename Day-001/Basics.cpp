// User Input Output

#include<iostream>
using namespace std;

int add(int a , int b){
    return a + b;
}

int main (){

    //Datatypes


int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String

// If-Else Statements

int age=10;


if (age >= 18) {
    cout << "You are an adult." << endl;
} else {
    cout << "You are not an adult." << endl;
}

// Switch Statements /

// Functions 

int result = add(3,4);

cout<<result<<endl;
cout<<&result<<endl;

// while loop
int bit;

cout<<"Enter the Value of Bit"<<endl;
cin>>bit;
int ans;
while(bit != 0){
    if(bit&1){
        ans++;
    }
    bit = bit>>1;
}

cout<<"No. of Set bits "<<ans<<endl;

// for loop


    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    }



}