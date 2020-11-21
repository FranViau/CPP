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

void debugMatrix (vii &matrix) {
    forn (i,matrix.size())
    {
        forn(j,matrix[0].size())
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void debugVector (vi &array) {
    forn (i,array.size())
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void debugPair (pll p) {
    cout << p.first << " " << p.second << endl << endl;
}


void solve () { 
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    string s; cin >> s;
    string t = "";
    int cont = 0;
    int n = s.length();
    forn(i,n-1){
        if(s[i] != s[n-1]){
            cont++;
            t += s[i];
        }
        else {
            cont++;
            t += s[i];
            break;
        }
        
    }
    int j = 0;
    for(int i = cont; i < n-cont; i++){
        if(s[i] == t[j]){
            j++;
        }
        else{
            j = 0;
        }
        if(j == cont){
            break;
        }
    }
    if(j == cont) {
        forn(i,t.length()){
            cout << t[i];
        }
    }
    else{
        cout << "Just a legend";
    }


}

/* CASOS PRUEBA 


*/