#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
void sortchar(int arr[], char b[], int n){
    pair<int, char>pa[n];
    for (int i = 0; i < n; i++)
    {
        pa[i]={arr[i], b[i]};
    }
    sort(pa,pa+n);
    for (int i = 0; i < n; i++)
    {
        cout<<pa[i].second<<" ";
    }
}
int main(){
    int arr[]={100,40,70};
    char b[]={'f','k','l'};
    sortchar(arr,b,3);
    return 0;
}