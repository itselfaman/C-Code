#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%5==0 and n%3==0)
    {
        cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Not Divisible by 5 or 3";
    }
}

//OR
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%5==0 or n%3==0)
    {
        cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Not Divisible by 5 or 3";
    }
}