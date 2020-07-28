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
    lli n;
    string s;
    cin >> s >> n;
    int cnt_a[s.length() + 1] = {0};
    cnt_a[1] = s[0] == 'a' ? 1 : 0;
    int slen = s.length();
    for (int i = 2; i <= slen; ++i)
    {
        cnt_a[i] = cnt_a[i - 1] + (s[i - 1] == 'a' ? 1 : 0);
        // cout << "cnt_a i: " << i << " " << cnt_a[i] << endl;
    }

    lli ans = cnt_a[slen];
    // printf("%i %lli %i %i\n", slen, n % slen, cnt_a[slen], cnt_a[n % slen]);
    ans *= n / slen;
    ans += cnt_a[n % slen];

    cout << ans << endl;
    return 0;
}

