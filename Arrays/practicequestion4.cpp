//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main() {
    int arr[]={1,3,0,10,2,5,6};
    int sumEven = 0;
    int sumOdd = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        if(i%2==0) {
            sumEven += arr[i];
        }
        else {
            sumOdd += arr[i];
        }
    }
    int diff = sumEven - sumOdd;
    cout<<diff;
}
