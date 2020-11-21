#include<bits/stdc++.h>
#define forn(i,n) for(int i = 0; i < n; i++)
#define form(i,n) for(int i = 1; i <= n; i++)
#define forinv(i,n) for(int i = n; i >= 0; i--)
#define pb push_back
#define pob pop_back
#define f first
#define s second

#define modulo(x,m) x = ((x%m) + m) % m ;
#define dbg(x) cerr << #x << " = " << x << "\n"
#define sz(x) int(x.size());
#define raya cerr << "===============================" << endl

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vll;
typedef vector<vll> vvll;

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

typedef tuple<int,int,int> tupi;
typedef tuple<ll,ll,ll> tupll;



using namespace std;
const int mod = 1e9 + 7;
const ll INF = 1e10;

/*
A remote island chain contains n islands, labeled 1 through n. Bidirectional bridges connect the islands to form a simple cycle — a bridge connects islands 1 and 2, islands 2 and 3, and so on, and additionally a bridge connects islands n and 1. The center of each island contains an identical pedestal, and all but one of the islands has a fragile, uniquely colored statue currently held on the pedestal. The remaining island holds only an empty pedestal.

The islanders want to rearrange the statues in a new order. To do this, they repeat the following process: First, they choose an island directly adjacent to the island containing an empty pedestal. Then, they painstakingly carry the statue on this island across the adjoining bridge and place it on the empty pedestal.

Determine if it is possible for the islanders to arrange the statues in the desired order.

Input
The first line contains a single integer n (2 ≤ n ≤ 200 000) — the total number of islands.

The second line contains n space-separated integers a i (0 ≤ a i ≤ n - 1) — the statue currently placed on the i-th island. If a i = 0, then the island has no statue. It is guaranteed that the a i are distinct.

The third line contains n space-separated integers b i (0 ≤ b i ≤ n - 1) — the desired statues of the ith island. Once again, b i = 0 indicates the island desires no statue. It is guaranteed that the b i are distinct.

Output
Print "YES" (without quotes) if the rearrangement can be done in the existing network, and "NO" otherwise.
*/



int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    int n; cin >> n;
    ll empieza, t;
    vector<ll> start;
    vector<ll> target;
    vector<ll> change, change2;

    forn(i,n){
        cin >> t;
        start.pb(t);
    }
    
    forn(i,n) {
        cin >> t;
        if(t == start[0]) empieza = i;
        target.pb(t);
    }
    for(int i = 0; i < n; i++){
        if(start[i] != 0) change.pb(start[i]);
    }

    for(ll i = empieza; i < n; i++){
        if(target[i] != 0) change2.pb(target[i]);
    }


    for(ll i = 0; i < empieza; i++){
        if(target[i] != 0) change2.pb(target[i]);
    }

    bool sePuede = true;
    forn(i,change.size()){
        if(change[i] != change2[i]){
            sePuede = false;
        }
    }

    if(sePuede) cout << "YES";
    else cout << "NO";

}
