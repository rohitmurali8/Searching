#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cmath>

using namespace std;

int linear_search(int arr[], int low, int high, int elem){
    int out;
    for (int i = low; i < high; i++)
    {
        if(arr[i] == elem){
            out = i;
            break;
        }
    }
    return out;
}

int jump_search(int arr[], int low, int high, int elem){
    int block = int(sqrt(high));
    int j = 0, new_low = 0;
    int i = low;
    while (i < high)
    {
        if(arr[i] > elem){
            new_low = j;
            break;
        }
        j = i;
        i = i + block;
    }
    return linear_search(arr, new_low, high, elem);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Finding the index of element 8 using Jump Search gives " << jump_search(arr, 0, len, 8) << endl;
}