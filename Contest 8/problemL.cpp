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

/*
Kefa decided to celebrate his first big salary by going to the restaurant.

He lives by an unusual park. The park is a rooted tree consisting of n vertices with the root at vertex 1. Vertex 1 also contains Kefa's house. Unfortunaely for our hero, the park also contains cats. Kefa has already found out what are the vertices with cats in them.

The leaf vertices of the park contain restaurants. Kefa wants to choose a restaurant where he will go, but unfortunately he is very afraid of cats, so there is no way he will go to the restaurant if the path from the restaurant to his house contains more than m consecutive vertices with cats.

Your task is to help Kefa count the number of restaurants where he can go.

Input
The first line contains two integers, n and m (2 ≤ n ≤ 105, 1 ≤ m ≤ n) — the number of vertices of the tree and the maximum number of consecutive vertices with cats that is still ok for Kefa.

The second line contains n integers a 1, a 2, ..., a n, where each a i either equals to 0 (then vertex i has no cat), or equals to 1 (then vertex i has a cat).

Next n - 1 lines contains the edges of the tree in the format " x i y i" (without the quotes) (1 ≤ x i, y i ≤ n, x i ≠ y i), where x i and y i are the vertices of the tree, connected by an edge.

It is guaranteed that the given set of edges specifies a tree.

Output
A single integer — the number of distinct leaves of a tree the path to which from Kefa's home contains at most m consecutive vertices with cats.
*/

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

int main () {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n, m;
    int u, v;
    cin >> n >> m;
 
    vector< int > g [n+1];
    vi distance(n+1);
    vector<bool> visited (n+1, false);
    for(int i = 1; i< n+1; i++){
        cin >> distance[i];
    }
 
    for (int i = 0; i < n-1; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        
    }
 
    queue<int> q;
    
    for(int i = 0; i < n+1; i++){ // DEBUGGEAR
        forn(j,g[i].size()){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
 
    q.push(1); visited[1] = true;

    while (!q.empty()) {
        int temp = q.front(); q.pop();
        

        for (auto k: g[temp]) {
            if (!visited[k]) {
                if(distance[temp] > m || distance[temp] == -1) distance[k] = -1;
                else if(distance[k] > 0){
                    distance[k] += distance[temp];
                }
                visited[k] = true;
                
                q.push(k);
            } 
        }
    }
    int cont = 0;
    for(int i = 1; i< n+1; i++){
        if(g[i].size() == 1 && distance[i] <= m && distance[i] != -1) cont++;
    }
    cout << cont; 
}
/* CASOS PRUEBA 
4 1
1 1 0 0
1 2
1 3
1 4

2

7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7

2   

*/