#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int a=0;
    int b=1;

    while(true){
       int c=a+b;

       if(c==n){
        cout<<"true"<<endl;
        break;
       }if(c>n){
        cout<<"false "<<endl;
        break;
       }
       
       a=b;
       b=c;
    }
    return 0;
}