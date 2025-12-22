// Input a string and update all the even positions in the string to character 'a'.condider 0-based indexing.

#include<iostream>
using namespace std;
int main() {
    string s = "Aman Kumar";
    for(int i=0;i<s.length();i++) {
        if (i%2==0) {
            s[i] = 'a' ;
        }
    }
    cout<<s;
}