#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    int n;
    cin >> n;
    vi v(n);
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    }
    int i = 0;
    while (i < n){
        if (i == n - 1)
            break;
        if (i == n - 2){
            ans += 1;
            break;
        }
        if (v[i + 2] == 0){
            ans += 1;
            i += 2;
        }
        else if (v[i + 1] == 0){
            ans += 1;
            i += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

