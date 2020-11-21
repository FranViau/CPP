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



using namespace std;
const int mod = 1e9 + 7;
const ll INF = 1e10;

/*
Vanya loves playing. He even has a special set of cards to play with. Each card has a single integer. The number on the card can be positive, negative and can even be equal to zero. The only limit is, the number on each card doesn't exceed x in the absolute value.

Natasha doesn't like when Vanya spends a long time playing, so she hid all of his cards. Vanya became sad and started looking for the cards but he only found n of them. Vanya loves the balance, so he wants the sum of all numbers on found cards equal to zero. On the other hand, he got very tired of looking for cards. Help the boy and say what is the minimum number of cards does he need to find to make the sum equal to zero?

You can assume that initially Vanya had infinitely many cards with each integer number from  - x to x.

Input
The first line contains two integers: n (1 ≤ n ≤ 1000) — the number of found cards and x (1 ≤ x ≤ 1000) — the maximum absolute value of the number on a card. The second line contains n space-separated integers — the numbers on found cards. It is guaranteed that the numbers do not exceed x in their absolute value.

Output
Print a single number — the answer to the problem.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n, x, t, sum = 0;
	cin >> n >> x;
    forn(i,n) { cin >> t; sum += t; }
    sum = abs(sum);

    if( sum == 0 ) cout << 0;
    else if( sum % x == 0 ){
        cout << sum / x;
    }
    else{
        int print = ( sum / x ) + 1;
        cout << print;
    }


}

/* CASOS PRUEBA 


*/