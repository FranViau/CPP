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
There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x 1, the second friend lives at the point x 2, and the third friend lives at the point x 3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x 1, x 2 and x 3 (1 ≤ x 1, x 2, x 3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.
*/
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int a, b, c;
    int sum;
    int dist;
    cin >> a >> b >> c;
    int mini = min(a,b);
    mini = min(mini,c);
    int maxi = max(a,b);
    maxi = max(maxi,c);
    int minDist = 10000;

    for(int i = mini; i<= maxi; i++){
        dist = 0;
        dist = dist + abs(a-i);
        dist = dist + abs(b-i);
        dist = dist + abs(c-i);
        minDist = min(minDist,dist);
    }
    cout << minDist << endl;

}

/* CASOS PRUEBA 


*/