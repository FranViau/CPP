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
Two famous competing companies ChemForces and TopChemist decided to show their sets of recently discovered chemical elements on an exhibition. However they know that no element should be present in the sets of both companies.

In order to avoid this representatives of both companies decided to make an agreement on the sets the companies should present. The sets should be chosen in the way that maximizes the total income of the companies.

All elements are enumerated with integers. The ChemForces company has discovered n distinct chemical elements with indices a1,a2,…,an, and will get an income of xi Berland rubles if the i-th element from this list is in the set of this company.

The TopChemist company discovered m distinct chemical elements with indices b1,b2,…,bm, and it will get an income of yj Berland rubles for including the j-th element from this list to its set.

In other words, the first company can present any subset of elements from {a1,a2,…,an} (possibly empty subset), the second company can present any subset of elements from {b1,b2,…,bm} (possibly empty subset). There shouldn't be equal elements in the subsets.

Help the representatives select the sets in such a way that no element is presented in both sets and the total income is the maximum possible.

Input
The first line contains a single integer n (1≤n≤105)  — the number of elements discovered by ChemForces.

The i-th of the next n lines contains two integers ai and xi (1≤ai≤109, 1≤xi≤109)  — the index of the i-th element and the income of its usage on the exhibition. It is guaranteed that all ai are distinct.

The next line contains a single integer m (1≤m≤105)  — the number of chemicals invented by TopChemist.

The j-th of the next m lines contains two integers bj and yj, (1≤bj≤109, 1≤yj≤109)  — the index of the j-th element and the income of its usage on the exhibition. It is guaranteed that all bj are distinct.

Output
Print the maximum total income you can obtain by choosing the sets for both companies in such a way that no element is presented in both sets.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n,m, temp1, temp2;
    
    cin >> n;
    map<ull,ull> precios;
    forn(i,n){
        cin >> temp1; cin >> temp2;
        precios[temp1] = temp2;
    }
    cin >> m;
    forn(i,m){
        cin >> temp1; cin >> temp2;
        
        if(precios.find(temp1) == precios.end()){
            precios[temp1] = temp2;
        }
        else if(temp2 > precios[temp1]){
            precios[temp1] = temp2;
        }
    }
    ull sum = 0;
    for(auto &i : precios){
        sum += i.second;
    }
    cout << sum;

}

/* CASOS PRUEBA 


*/