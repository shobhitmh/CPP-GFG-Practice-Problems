#include<iostream>
#include<vector>
using namespace std;
int isprime (int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;

        }
        

    }
    return 1;
    



}
vector<int> prime(int l){


 vector<int> v;

    for(int i=1;i<=l;i++){
        if(i==0||i==1){
            continue;
        }
       else if(isprime(i)){
            v.push_back(i);
        }

    }
    return v;
}
int main(){
    vector<int> v1= prime(10);
 
   
    for(auto i=v1.begin() ;i<v1.end();i++){
        cout<<" "<<*i;
    }

}