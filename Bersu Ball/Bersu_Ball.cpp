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


int main(){
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll m;
    cin >> m;
    ll b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] != -1)
            {
                if (abs(a[i] - b[j]) <= 1)
                {
                    ++count;
                    b[j] = -1;
                    break;
                }
            }
        }
    }
    cout << count << endl;
}
