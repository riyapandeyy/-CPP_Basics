#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int rev=0;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    
    }

    cout<<"reversed number is : "<<rev<<endl;

    return 0;
    
}
