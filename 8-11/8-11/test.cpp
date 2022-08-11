#include<iostream>
#include<string>

using namespace std;
//class Solution {
//public:
//
//    static bool is_judge(char ch)
//    {
//        return (ch >= 'a' && ch < 'z') || (ch >= '0' && ch <= '9');
//    }
//
//    static bool isPalindrome(string s)
//    {
//        for (auto& ch : s)
//        {
//            if (ch >= 'A' && ch <= 'Z')
//                ch += 32;
//        }
//        int begin = 0;
//        int end = s.size() - 1;
//        while (begin < end)
//        {
//            while (begin < end && !is_judge(s[begin]))
//                ++begin;
//            while (begin < end && !is_judge(s[end]))
//                --end;
//
//            if (s[begin] == s[end])
//            {
//                ++begin;
//                --end;
//            }
//            else
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};

class Solution {
public:
    string multiply(string num1, string num2)
    {
        int n1 = num1.size()-1;
        int n2 = num2.size()-1;
        string str;
        int cur = 1;
        while (n1 >= 0 || n2 >= 0)
        {
            if (n1 >= 0)
            {
                if (num1[n1] == '0')
                {
                    cur *= 10;
                    n1--;
                }
                else
                cur *= num1[n1--] - '0';
            }
            if (n2 >= 0)
            {
                if (num2[n2] == '0')
                {
                    cur *= 10;
                    n2--;
                }
                else
                cur *= num2[n2--] - '0';

            }
            str += to_string(cur % 100);
            cur / 100;

        }
        reverse(str.begin(), str.end());
        return str;
    }
};

void test1()
{
    string str1 = "10";
    string str2 = "10";
    Solution c;
    cout << c.multiply(str1, str2)<<endl;
}
int main()
{
    test1();
    return 0;
}