#include <bitset>
#include <vector>
#include <algorithm>
#include <iostream>
#include <tuple>
#include <queue>
#include <cstring>
#include <stack>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector <ll>
#define mii map<ll, ll>
#define si set<ll>
#define loop(i, n) for(ll i = 0; i < n; i++)
#define FOR(i,n,m) for(ll i = n; i < m; i++)
#define isIn(vec, item) find(vec.begin(), vec.end(), item) != vec.end()
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define inf INT_MAX
#define mod 1000000007
#define debug(x) cout << "# " << x << endl;

int main(){
    ll T;
    cin >> T;
    loop(q, T){
        ll N;
        cin >> N;
        bool first;
        int f;
        cin >> f;
        first = (f%2)==0;
        bool v = 1;
        FOR(i, 1, N){
            int temp;
            cin >> temp;
            v &= first == (temp%2==0);
        }
        if(v) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}