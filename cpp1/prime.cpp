#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 2; i<=a; i++)
    {
        if(a%i==0){
            cout<<"Not prime";
            break;
        }
        else{
        cout<<"Prime";
        break;
        }
    }
    
}