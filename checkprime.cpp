#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cout <<"Enter the number :";
    cin >>n;

    int rn=sqrt(n);

    int i=2;
    while(i<=rn){
        if(n%i==0){
            cout<<n<<" "<<"not a prime number"<<endl;
            return 0;
        }
        i=i+1;

    }
    cout<<n<<"is a prime number"<<endl;


}