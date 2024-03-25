#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int temp=0;
        for(auto i=digits.rbegin();i!=digits.rend();i++){
            if(*i==9) {
                temp=1;
                continue;
            }
            else {
                temp=0;
                break;
            }
        }
        if(temp==1){
            digits.resize(digits.size()+1);
            digits.at(0)=1;
            for(int i=1;i<digits.size();i++)
                digits.at(i)=0;
            return digits;
        }
        else{
            int size=digits.size()-1;
            if(digits.at(digits.size()-1) < 9){
                digits.at(digits.size()-1)++;
                return digits;
            }
            else if(digits.at(digits.size()-1)==9){
                digits.at(digits.size()-1)=0;
                digits.at(size-1)++;
                return digits;
            }
        }

    }
};
    int main()
    {
        Solution s;
        vector<int> digits{9,9,9,9};
        // for(int i=0;i<5;i++)
        // cin>>digits[i];
        s.plusOne(digits);
        for(auto i:digits)
        cout<<i<<" ";
        return 0;
    }
