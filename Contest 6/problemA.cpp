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
El viejo del aeropuerto is not that good solving problems.

He is facing the following easy task. He has two integers a and b and he wants to know how many perfect squares lie inside the closed interval [a,b].

Of course, this problem is really easy for you, so please help Viejo to solve this problem.

Input
One integer 1≤t≤105, denoting the number of test cases. Following t lines, one per test case. Each line consists of two integers 1≤a≤b≤1013.

Output
One integer per test case. The number of perfect squares in the interval [a,b].
*/

void solve () { 
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    ull a, b, t, a2, b2; 
    cin >> t;
    forn(i,t){
        cin >> a >> b;
        a2 = sqrt(a);
        b2 = sqrt(b);
        if(a2 * a2 == a){
            cout << b2-a2+1 << endl;
        }
        else{
            cout << b2-a2 << endl;
        }

    }
	

}

/* CASOS PRUEBA 


*/