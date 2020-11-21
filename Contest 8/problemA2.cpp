
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
int main(){		
	int n, m; cin >> n >> m;

	vector<string> a (n);

	forn(i, n) cin >> a[i];
    
	int ret = 0;
	vector<string> rial (n, "");
	forn(j, m){
		bool ok = 1;
		forn(i, n-1){
			if(rial[i]+a[i][j] > rial[i+1]+a[i+1][j]) ok = 0;
		}
		if(ok){
			forn(i, n) rial[i]+=a[i][j];
		}else{
			ret++;
		}
	}
	cout << ret << endl;
}
