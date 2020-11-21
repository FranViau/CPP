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

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vll;
typedef vector<vll> vvll;

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

typedef tuple<int,int,int> tupi;
typedef tuple<ll,ll,ll> tupll;

/*
Someday, Drazil wanted to go on date with Varda. Drazil and Varda live on Cartesian plane. Drazil's home is located in point (0, 0) and Varda's home is located in point (a, b). In each step, he can move in a unit distance in horizontal or vertical direction. In other words, from position (x, y) he can go to positions (x + 1, y), (x - 1, y), (x, y + 1) or (x, y - 1).

Unfortunately, Drazil doesn't have sense of direction. So he randomly chooses the direction he will go to in each step. He may accidentally return back to his house during his travel. Drazil may even not notice that he has arrived to (a, b) and continue travelling.

Luckily, Drazil arrived to the position (a, b) successfully. Drazil said to Varda: "It took me exactly s steps to travel from my house to yours". But Varda is confused about his words, she is not sure that it is possible to get from (0, 0) to (a, b) in exactly s steps. Can you find out if it is possible for Varda?

Input
You are given three integers a, b, and s ( - 109 ≤ a, b ≤ 109, 1 ≤ s ≤ 2·109) in a single line.

Output
If you think Drazil made a mistake and it is impossible to take exactly s steps and get from his home to Varda's home, print "No" (without quotes).

Otherwise, print "Yes".
*/

using namespace std;
const int mod = 1e9 + 7;
const ll INF = 1e10;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    ll a, b, s; 
	cin >> a >> b >> s;
    ll sum = abs(a) + abs(b);
    if(sum > s){
        cout << "No";
    }
    else{
        if( ( sum - s ) % 2 == 0) cout << "Yes";
        else cout << "No";
    }

}

/* CASOS PRUEBA 


*/