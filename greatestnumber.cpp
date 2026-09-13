#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr(10);
    cout<<"enter the of elementd"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest"<<largest<<endl;
    return 0;
}