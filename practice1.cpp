#include <bits/stdc++.h>
using namespace std;
vector <long long>print(int n)
{
    vector <long long > ans;
    ans.push_back(1);
    ans.push_back(1);
    for(int i=2;i<n;i++)
    {
        ans.push_back(ans[i-1]+ans[i-2]);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector <long long> result=print(n);
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    
    
    return 0;
}
