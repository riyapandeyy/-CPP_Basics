#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a positive number: ";
    cin>>n;

    int sum=0;
    while(n>0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
     
     cout<<"sum of the digit: "<<sum <<endl;
}