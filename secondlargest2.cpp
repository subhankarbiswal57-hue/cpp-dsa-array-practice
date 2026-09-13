//optimised method
#include<bits/stdc++.h>
using namespace std;
int slargest(vector<int>arr,int n){
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]> slargest)
        {
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
    vector<int>arr(10);
    int n;
    cout<<"enter number of elements in arr"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"second largest"<<slargest(arr,n)<<endl;
}