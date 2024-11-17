#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[200001] = {0};
    for(int i=1;i<n;i++)
    {
        int num = 0;
        cin>>num;
        arr[num] = 1;
    }
    for(int i =1;i<=n;i++)
    {
        if(arr[i] == 0) {
            cout<<i;
            break;
        }
    }
    return 0;
}