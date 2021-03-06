/**
 * Author: MatijaL
 * Time: 2021-02-07 15:35:02
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pll pair<ll, ll>
#define loop(i, n) for(ll i = 0; i < n; i++)
#define FOR(i,n,m) for(ll i = n; i <= m; i++)
#define isIn(vec, item) find(vec.begin(), vec.end(), item) != vec.end()
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define inf 1000000005
#define mod 1000000007
#define print(v) for(auto e : v) cout << e << " "; cout << endl;

void solve(){
    int L, R;
    cin >> L >> R;
    int N = 1;
    vector<pair<pll, int>> ans;
    int M = 0;

    cout << "YES" << endl;
    ll D = R-L;
    FOR(i, 1, 21){
        while(D >= (1LL << i)-1){
            //dodaj i vozlisc
            int start = N;
            FOR(node, 0, i-1){
                FOR(prev, 0, node){
                    M++;
                    ans.pb(mp(mp(N+prev, N+node+1), (1LL << node)));
                }
            }
            N += i; 
            D -= (1LL << i) -1;
        }
    }


    //iz vseh na konec
    FOR(i, 1, N){
        M++;
        ans.pb(mp(mp(i, N+1), L));
    }
    

    cout << N+1 << " " << M << endl;
    for(auto e : ans){
        cout << e.fs.fs << " " << e.fs.sc << " " << e.sc << endl;
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    t = 1;
    while(t--) solve();   
}
