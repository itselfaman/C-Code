#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main() {
    string s = "aman";
    cout<<s<<endl;
    reverse(s.begin(), s.begin()+2);
    cout<<s<<endl;
}