// Find the minimum value out of all the elements in the array.

#include<iostream>
using namespace std;
int main() {
    int arr[] = {12,11,10,5,-5,-11,-25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minVal = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << minVal << endl;
}