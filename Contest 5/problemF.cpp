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

long long memArriba [100001];
long long memAbajo [100001];
ll n;
vi arr1;
vi arr2;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> n;

    forn(i,n){
        cin >> t;
        arr1.pb(t);
    }

    forn(i,n){
        cin >> t;
        arr2.pb(t);
    }

    for(int i = n-1; i >= 0; i--){

        memArriba[i] = max(arr1[i] + memAbajo[i+1],memArriba[i+1]);

        memAbajo[i] = max(arr2[i] + memArriba[i+1],memAbajo[i+1]);
        
    }
    cout << max(memArriba[0],memAbajo[0] );

}