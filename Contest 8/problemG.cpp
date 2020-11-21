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

void solve (int i, int j) { 
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n, cont = 0;
    string t;
	cin >> n;
    vector<string> prev(n), curr(n);
    vector<pair<int,int> > v;
    pair<int,int> cantS = {0,0}, cantM = {0,0}, cantL = {0,0}, cantXS = {0,0}, cantXL = {0,0};
    pair<int,int> cantXXS = {0,0}, cantXXL = {0,0}, cantXXXS = {0,0}, cantXXXL = {0,0};
    
    forn(i,n){
        cin >> t;
        if(t == "S") cantS.first++;
        else if(t == "L") cantL.first++;
        else if(t == "M") cantM.first++;
        else if(t == "XS") cantXS.first++;
        else if(t == "XXS") cantXXS.first++;
        else if(t == "XXXS") cantXXXS.first++;
        else if(t == "XL") cantXL.first++;
        else if(t == "XXL") cantXXL.first++;
        else if(t == "XXXL") cantXXXL.first++;
    } 
    forn(i,n){
        cin >> t;
        if(t == "S") cantS.second++;
        else if(t == "L") cantL.second++;
        else if(t == "M") cantM.second++;
        else if(t == "XS") cantXS.second++;
        else if(t == "XXS") cantXXS.second++;
        else if(t == "XXXS") cantXXXS.second++;
        else if(t == "XL") cantXL.second++;
        else if(t == "XXL") cantXXL.second++;
        else if(t == "XXXL") cantXXXL.second++;
    } 
    v.pb(cantS); v.pb(cantM); v.pb(cantL); v.pb(cantXS); v.pb(cantXL); v.pb(cantXXS); v.pb(cantXXL);
    v.pb(cantXXXS); v.pb(cantXXXL);
    int cant = 0;
    forn(i,v.size()){
        cant += abs(v[i].first - v[i].second);

    }
    if(cant == 0) cout << cant;
    else cout << cant/2;


    


    
}

/* CASOS PRUEBA 


*/