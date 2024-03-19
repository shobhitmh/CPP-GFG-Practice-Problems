#include<iostream>
using namespace std;
int main(){
    int arr[]={1,21,3,4};
    int sum=0;
    for (int i = 0; i <4; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"avg= "<<(float)((float)sum/4);
    
}