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
Our friend REC is back.

While he was flying back to his country, Mexico, he started to think about a very important problem he was given during the competition. He had to compute the sum of digits of the sum of digits of the sum of digits of the sum of digits of the sum of digits... ok... of the sum of digits of a number.

WTF? Yes, for example if you have the number 99281293, its sum of digits is 43, and the sum of the digits is 7, and the sum of the digits is 7, and the sum of the digits is 7... And so on for the eternity.

So, if you are given a number, you have to compute what is the last number (one-digit) you get when you perform this operation, i.e. the number that remains for the eternity.

Concretely, you will be given two numbers a and b, and you have to compute the result of applying the described operation for ab.

Input
You are given two integers 1≤a≤10000 and 1≤b≤10000.

Output
One integer, the answer of performing the operation to the number ab.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
     
    int a, b; cin >> a >> b;
    int res = 1;
    a  %= 9;
    for(int i = 0; i < b; i++){
        
        res = (res * a) % 9;
    }
    if(res == 0) res = 9;
    cout << res;
	

}

/* CASOS PRUEBA 


*/