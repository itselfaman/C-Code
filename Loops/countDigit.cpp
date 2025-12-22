//wap to count digit of a given no:
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int count=0;
//     while (n!=0) {
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }

// wap to print sum of digit of a given number:
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//     while (n!=0) {
//         int ld=n%10;
//         n=n/10;
//         sum+=ld;
//     }
//     cout<<sum;
// }
// wap to print product of digits of a given number:
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int product=1;
//     while (n!=0) {
//         int ld = n%10;
//         n=n/10;
//         product*=ld;
//     }
//     cout<<product;
// }

//wap to print sum of all the even digits of a given number:
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//     while (n!=0) {
//         int ld=n%10;
//         if(ld%2==0){
//         sum+=ld;
//         }
//        n=n/10;
//     }
//     cout<<sum;
// }

// wap to print reverse of a given number:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev=0;
    while(n!=0) {
        int ld = n%10;
        rev*=10;
        rev+=ld;
        n=n%10;
    }
    cout<<rev;
}