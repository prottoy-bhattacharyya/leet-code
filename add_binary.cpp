#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string add(char a,char b,char c){
        if(c=='0'){
            //str[0]=result & str[1]=carry
            if(a=='0'&&b=='0') return "00";
            else if(a=='0'&&b=='1') return "10";
            else if(a=='1'&&b=='0') return "10";
            else if(a=='1'&&b=='1') return "01";
        }
        else if(c=='1'){
            if(a=='0'&&b=='0') return "10";
            else if(a=='0'&&b=='1') return "01";
            else if(a=='1'&&b=='0') return "01";
            else if(a=='1'&&b=='1') return "11";
        }
        return "00";
    }

    string addBinary(string a, string b)
    {
        if (a.size() > b.size())
        {
            int t = a.size() - b.size();
            for (int i = 0; i < t; i++)
                b = "0" + b;
        }
        
        else if (a.size() < b.size())
        {
            int t = b.size() - a.size();
            for (int i = 0; i < t; i++)
                a = "0" + a;
        }
        cout << a << " ";cout <<  b<< endl;
        string ans="";
        char carry = '0';
        for (int i = a.size() - 1; i >= 0; i--)
        {
            string temp = add(a[i],b[i],carry);
            ans=temp[0]+ans;
            carry=temp[1];
        }
        return (carry!='0')?carry+ans:ans;
    }
};
// class Solution2
// {
// public:
//     string addBinary(string a, string b)
//     {
//         string result;
//         int carry = 0;
//         int i = a.length() - 1;
//         int j = b.length() - 1;

//         while (i >= 0 || j >= 0 || carry == 1)
//         {
//             int sum = carry;
//             if (i >= 0)
//             {
//                 sum += a[i--] - '0';
//             }
//             if (j >= 0)
//             {
//                 sum += b[j--] - '0';
//             }
//             result.push_back(sum % 2 + '0');
//             carry = sum / 2;
//         }
//         reverse(result.begin(), result.end());
//         return result;
//     }
// };
int main()
{
    Solution s;
    // Solution2 s2;
    string a;
    string b;
    cin >> a >> b;
    cout << s.addBinary(a, b) << endl;
    // cout << s2.addBinary(a,b) << endl;
    return 0;
}
