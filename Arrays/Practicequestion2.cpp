//Given an array of integer,change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10;
#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        if(arr[i]%2!=0) {
            arr[i] +=10;
            }
        else {
            arr[i] *=2;
        }
        cout<<arr[i]<<endl;
    }
}