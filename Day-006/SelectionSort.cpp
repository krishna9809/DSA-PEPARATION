// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {2,3,4,5,3,4,1,7};
    int n = arr.size();


    for(int i = 0 ; i< n-1;i++){
        int min = i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }


   for(int i = 0 ; i<arr.size(); i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
