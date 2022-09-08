#include<iostream>
#include<algorithm>
using namespace std;
template <typename T>
T mymax(T x,T y){
    return (x>y)?x:y;
}
int main(){
    cout<<mymax<int>(3,4)<<endl;
    cout<<mymax<char>('a','b')<<endl;
    return 0;
}