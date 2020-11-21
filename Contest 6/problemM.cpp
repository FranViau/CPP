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
We have a string of letters 'a' and 'b'. We want to perform some operations on it. On each step we choose one of substrings "ab" in the string and replace it with the string "bba". If we have no "ab" as a substring, our job is done. Print the minimum number of steps we should perform to make our job done modulo 109 + 7.

The string "ab" appears as a substring if there is a letter 'b' right after the letter 'a' somewhere in the string.

Input
The first line contains the initial string consisting of letters 'a' and 'b' only with length from 1 to 106.

Output
Print the minimum number of steps modulo 109 + 7.
*/
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    string s; cin >> s;
    int lengthS = s.length();

    ull countA = 0, countB = 0, res = 0;

    for(int i = lengthS-1; i >= 0; i--){
        if(s[i] == 'b') countB++;
        else if(s[i] == 'a'){
            res = (res + countB) % mod; 
            countB = (countB * 2) % mod;
        }
    }
    cout << res;
	

}

/* CASOS PRUEBA 

CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA CASOS PRUEBA 
*/