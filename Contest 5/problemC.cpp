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
#define sz(x) int(x.size())
#define RAYA cerr << "========================== \n"
 
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
 
 
int main(){
    int n; cin >> n;
    string b; cin >> b;
 
    vector<int> levels;
    int l = 1;
    int maxL = -1;
    int cantCols = 0;
 
    forn(i, n){
        if(b[i] == '['){
            levels.pb(l);
            l++;
            if(l > maxL) maxL = l;
            cantCols++;
        }
        else{
            l--;
            levels.pb(l);
            if(l > maxL) maxL = l;
            cantCols ++;
            if(i > 0 && b[i-1] == '[') cantCols += 3;
        }
    }
 
    forn(i, n){
        levels[i] = maxL - levels[i];
    }
 
    char out[(maxL-1)*2+1][cantCols];
    forn(i, (maxL-1)*2+1){
        forn(j, cantCols){
            out[i][j] = ' ';
        }
    }
 
    int medio = maxL-1;
    int parCounter = -1;
 
    forn(i, cantCols){
        parCounter++;
        out[medio + levels[parCounter]][i] = '+';
        out[medio - levels[parCounter]][i] = '+';
 
        forn(j, levels[parCounter]){
            out[medio+j][i] = '|';
            out[medio-j][i] = '|';
        }
 
        if(parCounter < n && b[parCounter] == '[' && b[parCounter+1] == ']'){
            out[medio + levels[parCounter]][i+1] = '-';
            out[medio - levels[parCounter]][i+1] = '-';
            out[medio + levels[parCounter]][i+3] = '-';
            out[medio - levels[parCounter]][i+3] = '-';
            i += 3;
        }
        else{
            if(b[parCounter] == '['){
                out[medio + levels[parCounter]][i+1] = '-';
                out[medio - levels[parCounter]][i+1] = '-';
            }
            else{
                out[medio + levels[parCounter]][i-1] = '-';
                out[medio - levels[parCounter]][i-1] = '-';
            }
        }
    }
 
    forn(i, (maxL-1)*2+1){
        forn(j, cantCols){
            cout << out[i][j];
        }
        cout << "\n";
    }
}