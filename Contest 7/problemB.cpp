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


int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n; cin >> n;
    vi nums(n);
    forn(i,n)  cin >> nums[i];
    int cont = 0, maxim = 0, dif1, dif2;
    int swap = -1;
    forn(i,n){
        if(nums[i] < nums[i+1]) cont++;
        else{
            if(swap != -1){
                maxim = max(cont,maxim);
                cont = 0;
                i = swap;
                swap = -1;
            }
            else if(nums[i] - nums[i+1] >= 2){
                dif1 = nums[i] - nums[i+1];
                dif2 = nums[i+2] - nums[i];
                if(dif2>= 2) {
                    if(dif1 > dif2){
                        i += 2;
                        cont +=2;
                    }
                }
                else{
                    cont++;
                }
                swap = i+1;
                
            }
        }
    }
    maxim = max(cont,maxim);
    cout << maxim;


}

/* CASOS PRUEBA 


*/