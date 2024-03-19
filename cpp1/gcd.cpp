#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    while(b!=0){
        int rem=0;
        rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a;

}