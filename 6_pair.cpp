#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
    pair<int, int>p1(10,10);
    pair<int ,string>p2(10,"Geeks");
    pair<int, int> p3;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    p3={10,2};   //p3=make_pair(10,50);
    cout<<p3.first<<" "<<p3.second<<endl;
    // Comparison of pairs.
    cout<<(p1==p3)<<endl;
    cout<<(p1>p3)<<endl;
    cout<<(p1<p3)<<endl;
    cout<<(p1!=p3)<<endl;
    return 0;
}