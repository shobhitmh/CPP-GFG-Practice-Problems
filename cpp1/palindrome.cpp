#include<iostream>
using namespace std;
int main(){
    int a;
    int on=a;
    cin>>a;
    int p=0;
    int r;
    while (a>0)
    {
        r=a%10;
        p=p*10+r;
        a=a/10;

    }
    cout<<p;
    if(p==on){
        cout<<"palindrome";
    }
    
}