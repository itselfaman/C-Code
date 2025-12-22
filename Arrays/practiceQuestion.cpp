// Given an integer n.Create an array containing square of all natural number till n and print the elements of the array.

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++) {
        arr[i-1] = i * i;
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}