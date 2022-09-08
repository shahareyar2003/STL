#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
class Pair
{
    T x, y;

public:
    Pair(T i, T j)
    {
        x = i;
        y = j;
    }
    T getfirst()
    {
        return x;
    }
    T getsecond()
    {
        return y;
    }
};
int main()
{
    Pair<int> p1(2, 3);
    cout << p1.getfirst()<<" "<<p1.getsecond();
    return 0;
}