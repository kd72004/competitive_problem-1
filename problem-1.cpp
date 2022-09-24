#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    int d_x=x;
    long int y=0;
    while(d_x)
    {
        y=(y*10)+(d_x%10);
        d_x/=10;
    }
    if(x<0)
        return false;
    if(x==y)
    return true;
    return false;

    }
};
int main()
{
    Solution s1;
    cout<<s1.isPalindrome(12321)<<endl;
}