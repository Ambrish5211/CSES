#include<bits/stdc++.h>

using namespace std;

int repetitions(string s)
{
    int r=0,l=0;
    int n = s.size();
    int ans = 0;
    while(r<n && l<n)
    {
        while(s[r] == s[l] && r<n)
        {
            ans = max(r-l+1, ans);
            r++;
        }
        l++;
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<repetitions(s);
    return 0;
}