#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

int binary_search(int arr[], int low, int high, int elem){
    int mid = low + (high - low)/2;
    if(arr[mid] == elem)
        return mid;
    else if(arr[mid] < elem)
        return binary_search(arr, mid + 1, high, elem);
    else
        return binary_search(arr, low, mid - 1, elem);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Finding the index of element with value 7 gives us " << binary_search(arr, 0, len - 1, 7) << endl;
    return 0;
}