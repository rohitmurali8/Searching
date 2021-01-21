#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cmath>

using namespace std;

int interpolation_search(int arr[], int low, int high, int elem){
    int i = 0;
    while (low <= high)
    {
        int pos = low + (elem - arr[low])*(high - low)/(arr[high] - arr[low]);
        if(arr[pos] == elem)
            return pos;
        else if(arr[pos] < elem)
            low = pos + 1;
        else
            high = pos - 1;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Searching for element 9 using interpolation search gives us the index " << interpolation_search(arr, 0, len, 9) << endl;
}