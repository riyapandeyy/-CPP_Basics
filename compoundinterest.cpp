#include <iostream>
using namespace std;
int main()
{
  int p;
    cout<<"Enter INITIAL PRINCIPAL BALANCE : ";
    cin>>p;


  int r;
    cout<<"Enter the  rate: ";
    cin>>r;


  int n;
    cout<<"Enter the no of time applied: ";
    cin>>n;


  int t;
    cout<<"Enter time period elapsed: ";
    cin>>t;


    cout<<"COMPOUND INTEREST = " << p*(1+r/n)<<endl ;


return 0;

}