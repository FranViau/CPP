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
Cowboy Vlad has a birthday today! There are n children who came to the celebration. In order to greet Vlad, the children decided to form a circle around him. Among the children who came, there are both tall and low, so if they stand in a circle arbitrarily, it may turn out, that there is a tall and low child standing next to each other, and it will be difficult for them to hold hands. Therefore, children want to stand in a circle so that the maximum difference between the growth of two neighboring children would be minimal possible.

Formally, let's number children from 1 to n in a circle order, that is, for every i child with number i will stand next to the child with number i+1, also the child with number 1 stands next to the child with number n. Then we will call the discomfort of the circle the maximum absolute difference of heights of the children, who stand next to each other.

Please help children to find out how they should reorder themselves, so that the resulting discomfort is smallest possible.

Input
The first line contains a single integer n (2≤n≤100) — the number of the children who came to the cowboy Vlad's birthday.

The second line contains integers a1,a2,…,an (1≤ai≤109) denoting heights of every child.

Output
Print exactly n integers — heights of the children in the order in which they should stand in a circle. You can start printing a circle with any child.

If there are multiple possible answers, print any of them.
*/

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
     
    int n; cin >> n;
    vector<ull> arr(n);
    vector<ull> arr2;
    forn(i,n) cin >> arr[i];
    sort(arr.begin(),arr.end());
    for(int i = 1; i < n; i += 2){
        arr2.pb(arr[i]);
    } 
    reverse(arr2.begin(),arr2.end());
    for(int i = 0; i < n; i += 2){
        cout << arr[i] << " ";
    }
    for(auto e : arr2){
        cout << e << " ";
    }
	

}

/* CASOS PRUEBA 


*/