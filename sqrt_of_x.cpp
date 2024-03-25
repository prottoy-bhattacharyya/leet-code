#include <iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
class Solution {
public:
    int mySqrt(int x) {
        long long int i;
        for(i=0;i*i<=x;i++);
        if(i*i==x)return i;
        else return i-1;
    }
};

class Solution2 {
public:

    int mySqrt(int x) {
        int i;
        for(i=1;i<=(x/i);i++);
        if(i==(x/i))return i;
        else return i-1;
    }
};

int main()
{
    Solution s;
    Solution2 s2;
    int a;
    cin >> a;
    auto start1 = high_resolution_clock::now();
    cout << s.mySqrt(a)<< endl;
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cout << duration.count() << endl;

    // auto start2 = high_resolution_clock::now();
    cout << s2.mySqrt(a)<< endl;
    // auto stop2 = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop2 - start2);
    // cout << duration.count() << endl;
    return 0;
}
