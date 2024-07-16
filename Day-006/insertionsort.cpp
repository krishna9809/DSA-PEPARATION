#include<iostream>
#include<vector>
using namespace std;
int main()
{

     vector<int> arr = {2,3,4,5,3,4,1,7};
    int n = arr.size();

    for(int i = 1;i<n;i++){
        int val = arr[i] ;
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>val){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = val;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}