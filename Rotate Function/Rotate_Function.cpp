#include "bits/stdc++.h"
#define ll long long
#define srv(v) sort(v.begin(), v.end())
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define str string
#define sz size()
#define dv(v) vector<ll> v
#define ds(s) set<ll> s
#define dm(mp) map<ll, ll> mp
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 7;

int rotfunc(vector<int> &nums)
{
    int n=nums.size();
    vector<int> rev=nums;
    reverse(rev.begin(),rev.end());
    int res=0,pre=0,sum=0;
    for (int i = 0; i < n; i++)
    {
        res += (i * nums[i]);
        sum += nums[i];
    }
    pre = res;

    int rotate = 1, j = 0;
    while (rotate < n)
    {
        int temp = pre;
        temp = pre + sum - (n * rev[j]);
        j++;

        res = max(res, temp);
        pre = temp;
        rotate++;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    cout<<rotfunc(v);
}

int main()
{
    solve();
    return 0;
}