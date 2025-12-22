// Find the second largest element in the given array.

#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,1,0,9,4,12,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
    }
    int smx = INT_MIN;
    for(int i = 0; i < n; i++) {
        if (arr[i]!=mx)
        smx = max(smx, arr[i]);
    }
    cout<<mx<<endl<<smx;
}
