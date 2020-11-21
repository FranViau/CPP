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
You are given a string s consisting of n lowercase Latin letters. n is even.

For each position i (1≤i≤n) in string s you are required to change the letter on this position either to the previous letter in alphabetic order or to the next one (letters 'a' and 'z' have only one of these options). Letter in every position must be changed exactly once.

For example, letter 'p' should be changed either to 'o' or to 'q', letter 'a' should be changed to 'b' and letter 'z' should be changed to 'y'.

That way string "codeforces", for example, can be changed to "dpedepqbft" ('c' → 'd', 'o' → 'p', 'd' → 'e', 'e' → 'd', 'f' → 'e', 'o' → 'p', 'r' → 'q', 'c' → 'b', 'e' → 'f', 's' → 't').

String s is called a palindrome if it reads the same from left to right and from right to left. For example, strings "abba" and "zz" are palindromes and strings "abca" and "zy" are not.

Your goal is to check if it's possible to make string s a palindrome by applying the aforementioned changes to every position. Print "YES" if string s can be transformed to a palindrome and "NO" otherwise.

Each testcase contains several strings, for each of them you are required to solve the problem separately.

Input
The first line contains a single integer T (1≤T≤50) — the number of strings in a testcase.

Then 2T lines follow — lines (2i−1) and 2i of them describe the i-th string. The first line of the pair contains a single integer n (2≤n≤100, n is even) — the length of the corresponding string. The second line of the pair contains a string s, consisting of n lowercase Latin letters.

Output
Print T lines. The i-th line should contain the answer to the i-th string of the input. Print "YES" if it's possible to make the i-th string a palindrome by applying the aforementioned changes to every position. Print "NO" otherwise.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int t, n; cin >> t;
    string s = "", res = "";
    forn(i,t){
        cin >> n;
        cin >> s;
        res = "YES";
        forn(i,n/2){
            if(abs(s[i] - s[n-1-i]) != 0 && abs(s[i] - s[n-1-i]) != 2 ){
               res = "NO";
               break;
                
            }
        }
        cout << res << endl;

    }

}

/* CASOS PRUEBA 


*/