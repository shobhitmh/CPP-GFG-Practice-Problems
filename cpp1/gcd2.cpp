#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b>0){
        int r;
        r=a%b;
        a=b;
        b=r;
}
    return a;

}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans=gcd(a,b);
    cout<<ans;

}