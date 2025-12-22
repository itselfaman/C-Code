//Count the number of elements in given array grater than a given number x.

#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,9,7,6,5,4,3,2,8};
    int x = 3;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    cout <<"Count of elements greater than "<< x << " is: "<< count << endl;
}
