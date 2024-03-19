#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int arr[]={a,b,c};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2-i; j++)
        {
            if(arr[j+1]>arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;



            }
            continue;

            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[0];
    
    
  

    

    
    


}