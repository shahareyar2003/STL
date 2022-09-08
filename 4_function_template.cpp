#include<iostream>
#include<algorithm>
using namespace std;
template <typename T>
T arrMax(T arr[], int n){
    T res=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}
template<typename G,int limit>
G arrMin(G arr[], int n){
    if(n>limit){
        cout<<"Length of array is max"<<endl;
        return -1;
    }
    G res=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<res)
        {
            res=arr[i];
        }
    }
    return res;
}
int main(){
    int arr[]={1,2,4,6,7,8,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arrMax<int>(arr,n)<<endl;
    float arr1[]={1.3,4.6,1.2,9.8,9.9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    cout<<arrMax<float>(arr1,n1);
    cout<<endl;
    // cout<<arrMin<int,5>(arr,n)<<endl;
    cout<<arrMin<int,100>(arr,n)<<endl;
    return 0;
}