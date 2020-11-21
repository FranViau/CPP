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
You are developing a project to build a new data center. The data center will be a rectangle with an area of exactly n square meters. Each side of the data center must be an integer.

Your goal is to minimize the impact of the external environment on the data center. For this reason, you want to minimize the length of the perimeter of the data center (that is, the sum of the lengths of its four sides).

What is the minimum perimeter of a rectangular data center with an area of exactly n square meters, if the lengths of all its sides must be integers?

Input
The first and only line of the input contains an integer n (1≤n≤105), where n is the area of the data center in square meters.

Output
Print the required minimum perimeter in meters.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n, lado1, lado2; 
	cin >> n;

    if(n == 1) cout << 4;
    else{
        int raiz = sqrt(n);
        for(int i = raiz; raiz >= 1; i--){
            if(n % i == 0){
                lado1 = i;
                lado2 = n / i;
                break;
            }
        }
        cout << (lado1 * 2) + (lado2 * 2);
    }
    

}

/* CASOS PRUEBA 


*/