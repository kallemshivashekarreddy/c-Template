#include<bits/stdc++.h>
#define ll long long int
#define fo(i,n)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x,0,sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define vvii(a,n,m) vector<vector<int>> a(n,vector<int>(m,0))
#define pii pair<int,int> 
#define vi vector<int>
#define vl vector<ll>  
#define vpii vector<pii> 
#define vvi vector<vi> 
#define vvl vector<vl> 
using namespace std;
int power(int base, int exp); 
const int mod = 1000000007;

void solve() {
  int i, j, n, m;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    while(t--) {

      solve();
    }

    return 0;
}

int power(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}
