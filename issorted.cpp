#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            
        }
        else{
            return false;        
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"decision"<<sorted(arr,n)<<endl;
    return 0;
}