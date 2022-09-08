#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
// 1
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

// 2
    vector<int> v1{1,2,3,4};
    cout<<"Vector Initially"<<endl;
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    // if we want to change vector element then
    for(int &x:v1){
        int y;
        cin>>y;
        x=y;
    }
    cout<<endl<<"Vector after updated"<<endl;
    for(int x:v1){
        cout<<x<<" ";
    }

// 3
    int n=3,x=10;
    vector<int>v3(n,x);
    cout<<endl;
    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<(*it)<<" ";
    }

// 4
    cout<<endl;
    vector<int> v4{1,2,3,4,5};
    vector<int>::iterator it=v4.begin();
    for(it;it!=v4.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

// 5
    int arr[]={0,9,8,7,7};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>v5(arr,arr+n1);
    for(auto it=v5.rbegin();it!=v5.rend();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}
/*
1.  begin:-	Return iterator to beginning 
2.  end:- Return iterator to end 
3.  rbegin:- Return reverse iterator to reverse beginning 
4.  rend:- Return reverse iterator to reverse end 
5.  cbegin:- Return const_iterator to beginning 
6.  cend:- Return const_iterator to end 
7.  crbegin:- Return const_reverse_iterator to reverse beginning 
8.  crend:- Return const_reverse_iterator to reverse end 


// vector::cbegin/cend
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {10,20,30,40,50};

  std::cout << "myvector contains:";

  for (auto it = myvector.cbegin(); it != myvector.cend(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
*/