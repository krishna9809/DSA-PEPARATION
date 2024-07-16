// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52

// Here, after each iteration, the array becomes sorted up to the last index of the range. That is why the last index of the range decreases by 1 after each iteration. This decrement is achieved by the outer loop and the last index is represented by variable i in the following code. And the inner loop(i.e. j) helps to push the maximum element of range [0….i] to the last index(i.e. index i).

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 4, 5, 3, 4, 1, 7};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }

           
        }
         if(swapped == false){
              break;
            }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
