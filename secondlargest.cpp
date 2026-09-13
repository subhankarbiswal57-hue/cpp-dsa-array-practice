//better solution
#include<bits/stdc++.h>
using namespace std;
int slargest(vector<int>arr,int n){
    int largest =arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>slargest&&arr[i]!=largest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
    int n;
    vector<int>arr(10);
    cout<<"enter the number of elements of the array";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"second largest"<<slargest(arr,n)<<endl;
    return 0;
}