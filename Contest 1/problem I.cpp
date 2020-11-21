#include<bits/stdc++.h>
#define forn(i,n) for(int i = 0; i < n; i++)
#define form(i,n) for(int i = 1; i <= n; i++)
#define forinv(i,n) for(int i = n; i >= 0; i--)
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define modulo(x,m) x=((x%m) + m) % m ;
#define dbg(x) cerr << #x << " = " << x << "\n"
#define sz(x) int(x.size());

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
You are given an array a consisting of n integers.

In one move, you can choose two indices 1≤i,j≤n such that i≠j and set ai:=aj. You can perform such moves any number of times (possibly, zero). You can choose different indices in different operations. The operation := is the operation of assignment (i.e. you choose i and j and replace ai with aj).

Your task is to say if it is possible to obtain an array with an odd (not divisible by 2) sum of elements.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤2000) — the number of test cases.

The next 2t lines describe test cases. The first line of the test case contains one integer n (1≤n≤2000) — the number of elements in a. The second line of the test case contains n integers a1,a2,…,an (1≤ai≤2000), where ai is the i-th element of a.

It is guaranteed that the sum of n over all test cases does not exceed 2000 (∑n≤2000).

Output
For each test case, print the answer on it — "YES" (without quotes) if it is possible to obtain the array with an odd sum of elements, and "NO" otherwise.
*/

		
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n, x, t; 
    bool existeImpar, existePar;
    cin >> t;
    vi arr;
    forn(i,t){
        existeImpar = false;
        existePar = false;
        cin >> n;
        forn(i,n) { 
            cin >> x;
            if(x % 2 == 1) existeImpar = true;
            else existePar = true;
        }
        if(!existeImpar){
            cout << "NO" << endl;
        } 
        
        else if(n % 2 == 1){
            cout << "YES" << endl;
        }
        else if(existePar){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }
    
}

/* CASOS PRUEBA 


*/