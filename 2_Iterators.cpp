#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // begin(), end(), prev(), next(), advance()
    vector<int> v={10,20,30,40,50,60,70,80,90};   
    vector<int>::iterator i=v.begin();
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i=v.end();
    i--;
    cout<<(*i)<<" ";
    vector<int>::iterator j=v.begin();
    j=next(j);
    cout<<endl;
    cout<<(*j)<<" ";
    j=prev(j);
    cout<<(*j)<<" ";
    j=next(j,3);
    cout<<(*j)<<" ";
    advance(j,3);
    cout<<(*j)<<" ";
    
    return 0;
}