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
A restaurant received n orders for the rental. Each rental order reserve the restaurant for a continuous period of time, the i-th order is characterized by two time values — the start time l i and the finish time r i ( l i ≤ r i).

Restaurant management can accept and reject orders. What is the maximal number of orders the restaurant can accept?

No two accepted orders can intersect, i.e. they can't share even a moment of time. If one order ends in the moment other starts, they can't be accepted both.

Input
The first line contains integer number n (1 ≤ n ≤ 5·105) — number of orders. The following n lines contain integer values l i and r i each (1 ≤ l i ≤ r i ≤ 109).

Output
Print the maximal number of orders that can be accepted.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    ll n, l, r;
    cin >> n;
    vector< pair<int,int> > restaurant(n);
    forn(i,n){
        cin >> l;
        cin >> r;
        restaurant[i] = {r,l};
    }
    sort(restaurant.begin(), restaurant.end());
    ll finish = -1, count = 0;

    for( auto p : restaurant){
        //cout << p.second << endl;
        if(p.second > finish){
            finish = p.first;
            count++;

        }

    }
    cout << count;

}

/* CASOS PRUEBA 


*/