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
Vasya has a beautiful garden where wonderful fruit trees grow and yield fantastic harvest every year. But lately thieves started to sneak into the garden at nights and steal the fruit too often. Vasya can’t spend the nights in the garden and guard the fruit because there’s no house in the garden! Vasya had been saving in for some time and finally he decided to build the house. The rest is simple: he should choose in which part of the garden to build the house. In the evening he sat at his table and drew the garden’s plan. On the plan the garden is represented as a rectangular checkered field n × m in size divided into squares whose side length is 1. In some squares Vasya marked the trees growing there (one shouldn’t plant the trees too close to each other that’s why one square contains no more than one tree). Vasya wants to find a rectangular land lot a × b squares in size to build a house on, at that the land lot border should go along the lines of the grid that separates the squares. All the trees that grow on the building lot will have to be chopped off. Vasya loves his garden very much, so help him choose the building land lot location so that the number of chopped trees would be as little as possible.

Input
The first line contains two integers n and m (1 ≤ n, m ≤ 50) which represent the garden location. The next n lines contain m numbers 0 or 1, which describe the garden on the scheme. The zero means that a tree doesn’t grow on this square and the 1 means that there is a growing tree. The last line contains two integers a and b (1 ≤ a, b ≤ 50). Note that Vasya can choose for building an a × b rectangle as well a b × a one, i.e. the side of the lot with the length of a can be located as parallel to the garden side with the length of n, as well as parallel to the garden side with the length of m.

Output
Print the minimum number of trees that needs to be chopped off to select a land lot a × b in size to build a house on. It is guaranteed that at least one lot location can always be found, i. e. either a ≤ n and b ≤ m, or a ≤ m и b ≤ n.
*/

int matrix[51][51];

int solve (int i, int j, int a, int b) {
    int sum = 0;
    for(int x = i; x < a+i; x++){
        for(int y = j; y < b+j; y++){
            if(matrix[x][y] == 1){
                sum++;
            }
        }
    }
    return sum;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int a, b;
    int n, m; 
    cin >> n >> m;
    
    forn(i,n){
        forn(j,m){
            cin >> matrix[i][j];
        }
    }
    cin >> a >> b;
    int minim = 1e8;
    forn(i,n-a+1){
        forn(j,m-b+1){
            minim = min(minim, solve(i,j,a,b));
        }
    }
    forn(i,n-b+1){
        forn(j,m-a+1){
            minim = min(minim, solve(i,j,b,a));
        }
    }
    
    cout << minim;
    
    
	

}

/* CASOS PRUEBA 


*/