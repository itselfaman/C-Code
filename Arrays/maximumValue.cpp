// Find the maximum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main() {
    int arr[] = {12,11,10,5,100};
    int maxVal = arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << maxVal << endl;
}