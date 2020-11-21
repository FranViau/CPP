#include<bits/stdc++.h>
#define forn(i,n) for(int i = 0; i < n; i++)
#define form(i,n) for(int i = 1; i <= n; i++)
#define forinv(i,n) for(int i = n; i >= 0; i--)
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define sz(x) int(x.size());
#define modulo(x,m) x=((x%m) + m) % m ;

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


const int mod = 1e9 + 7;
const ll INF = 1e10;

/*
You are given two positive integers a and b.

In one move, you can change a in the following way:

Choose any positive odd integer x (x>0) and replace a with a+x;
choose any positive even integer y (y>0) and replace a with a−y.
You can perform as many such operations as you want. You can choose the same numbers x and y in different moves.

Your task is to find the minimum number of moves required to obtain b from a. It is guaranteed that you can always obtain b from a.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤104) — the number of test cases.

Then t test cases follow. Each test case is given as two space-separated integers a and b (1≤a,b≤109).

Output
For each test case, print the answer — the minimum number of moves required to obtain b from a if you can perform any number of moves described in the problem statement. It is guaranteed that you can always obtain b from a.
*/
		
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t; 
    cin >> t;

    forn(i,t){
        int a, b, dif, res;
        cin >> a >> b;
        dif = b - a;
        int dif2 = dif;
        int modDif = modulo(dif2,2);
        if(a == b) {
            res = 0;
        }
        if(dif > 0 && modDif == 1){
            res = 1;
        }
        else if(dif < 0 && modDif == 0){
            res = 1;
        }
        else if( dif < 0 && modDif == 1){
            res = 2;
        }
        else if( dif > 0 && dif % 4 == 0){
            res = 2;
        }
        else if( dif % 4 == 2 && dif > 0){
            res = 2;
        }
        cout << res << endl;
        

    }
}

/* CASOS PRUEBA 


*/