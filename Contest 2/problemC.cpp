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

using namespace std;
const int mod = 1e9 + 7;
const ll INF = 1e10;

/*
The records are expressed as a string s of characters '0', '1' and '.', where '0' denotes a low tide, '1' denotes a high tide, and '.' denotes an unknown one (either high or low).

You are to help Mino determine whether it's possible that after replacing each '.' independently with '0' or '1', a given integer p is not a period of the resulting string. In case the answer is yes, please also show such a replacement to Mino.

In this problem, a positive integer p is considered a period of string s, if for all 1≤i≤|s|−p, the i-th and (i+p)-th characters of s are the same. Here |s| is the length of s.

Input
The first line contains two space-separated integers n and p (1≤p≤n≤2000) — the length of the given string and the supposed period, respectively.

The second line contains a string s of n characters — Mino's records. s only contains characters '0', '1' and '.', and contains at least one '.' character.

Output
Output one line — if it's possible that p is not a period of the resulting string, output any one of such strings; otherwise output "No" (without quotes, you can print letters in any case (upper or lower)).
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n, p;
    string s;
    bool funciona = true;
    
    cin >> n >> p;
    cin >> s;
    vector<char> vc(n);
    forn(i,n){
        vc[i] = s[i];
    }
    
    forn(i,n-p){

        if(vc[i+p] == '.' && vc[i] != '.'){
            if(vc[i] == '0') vc[i+p] = '1';

            else vc[i+p] = '0';
            funciona = false;
        }
        else if(vc[i] == '.' && vc[i+p] != '.'){

            if(vc[i+p] == '0') vc[i] = '1';

            else vc[i] = '0';
            funciona = false;
        }
        else if(vc[i] == '.' && vc[i+p] == '.'){
            vc[i] = '0'; vc[i+p] = '1';
            funciona = false;
        }
        else if( vc[i] != '.' && vc[i+p] != '.' && vc[i] != vc[i+p]){
            funciona = false;
        }
        
    }
    if(funciona) cout << "No";
    else{
        forn(i,n){
            if(vc[i] == '.') vc[i] = '0';
            cout << vc[i];
        }
        
    } 


    


}