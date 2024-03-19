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

int maxProduct(vector<int>& nums) {
        int p1=0,p2=0,ans1=nums[0],ans2=nums[0];
        for(int i=0;i<nums.size();i++){
            if(p1==0) p1=nums[i];
            else p1*=nums[i];
            ans1=max(p1,ans1);
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(p2==0) p2=nums[i];
            else p2*=nums[i];
            ans2=max(p2,ans2);
        }
        return max(ans1,ans2);
    }
void solve()
{
    ll n;
    cin >> n;
    vector<int> nums(n);
    for(ll i=0;i<n;i++) cin>>nums[i];
    cout<<maxProduct(nums)<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}