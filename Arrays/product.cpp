// calculate the product of all elements in the given array.

#include<iostream>
using namespace std;
int main() {
    int arr[] = {12,11,10,5};
    int product = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }
    cout << product << endl;
}