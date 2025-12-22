// If an array arr contains n elements,then check if the given array is a palindrome or not.

#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,3,2,1};
    int n = sizeof(arr) ;/// sizeof(arr[0]);
    // int n=arr.length;
    bool isPalindrome = true;

    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (arr[i] != arr[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
}


