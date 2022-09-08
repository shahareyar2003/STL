/* Some Important Function In Vector:-
    pop_back(), front(), back(), insert(), erase(), clear(), resize(), empty()
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
// 1. pop_back(), front(), back()
    vector<int> v{10,20,30,40};
    v.pop_back();
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.front()=7;
    cout<<v.front()<<endl;
    v.front()=10;

// 2. insert()
    auto it= v.insert(v.begin(),100); //100,10,20,30
    v.insert(v.begin()+2,200); //100,10,200,20,30
    v.insert(v.begin(),2,300); //300,300,100,10,20,30
    for(auto x:v){
        cout<<x<<" ";
    }
    // inserting element from one vector to another
    vector<int> v1;
    v1.insert(v1.begin(),v.begin(),v.begin()+3);
    cout<<endl;
    for(auto x: v1){
        cout<<x<<" ";
    }
    cout<<"\n";
// 3. erase()
    vector<int> v2{10,20,30,40,50,60,70,80,90};
    v2.erase(v.begin());
    for(auto x: v2){
        cout<<x<<" ";
    }
    // erase all element between interval
    v2.erase(v.begin(),v.end()-4);
    cout<<endl;
    for(auto x: v2){
        cout<<x<<" ";
    }
    cout<<endl;
// 4.clear(): removes all element from vector.
    cout<<v2.size()<<endl;
    v2.clear();
    cout<<v2.size()<<endl;

// 5. resize()
    vector<int> v3{10,20,30,60,70};
    v3.resize(3);
    for(auto x: v3){
        cout<<x<<" ";
    }
    cout<<endl;
    v3.resize(5);
    for(auto x: v3){
        cout<<x<<" ";
    }
    cout<<endl;
    v3.resize(8,100);
    for(auto x: v3){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}