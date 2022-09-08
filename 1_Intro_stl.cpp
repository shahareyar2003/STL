/* Standard Template Library
1.  Containers:
    a.  Simple: pair, vector, linked_list, doubly linked list
    b.  Container adapters: stack, queue, priority_queue
    c.  Associative: set, map, unordered_map, unordered_set
2.  Algorithm: binary_search, find, reverse, sort, etc;

        [begin(),end())
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,8,2,0,5,3,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for sorting
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for search
    if(binary_search(arr,arr+n,8)){
        cout<<"Present"<<endl;
    }    
    else{
        cout<<"Not present"<<endl;
    }
    return 0;
}