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
#define sz(x) int(x.size());

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vll;
typedef vector<vll> vvll;


using namespace std;

/*
Alice and Bob like games. And now they are ready to start a new game. They have placed n chocolate bars in a line. Alice starts to eat chocolate bars one by one from left to right, and Bob — from right to left. For each chocololate bar the time, needed for the player to consume it, is known (Alice and Bob eat them with equal speed). When the player consumes a chocolate bar, he immediately starts with another. It is not allowed to eat two chocolate bars at the same time, to leave the bar unfinished and to make pauses. If both players start to eat the same bar simultaneously, Bob leaves it to Alice as a true gentleman.

How many bars each of the players will consume?

Input
The first line contains one integer n (1 ≤ n ≤ 105) — the amount of bars on the table. The second line contains a sequence t 1, t 2, ..., t n (1 ≤ t i ≤ 1000), where t i is the time (in seconds) needed to consume the i-th bar (in the order from left to right).

Output
Print two numbers a and b, where a is the amount of bars consumed by Alice, and b is the amount of bars consumed by Bob.
*/

		
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n, t; 
	cin >> n;
    vi arr;
    forn(i,n) {
        cin >> t;
        arr.pb(t); 
    }
    if(n == 1){
        cout << 1 << " " << 0;
    }
    else if(n == 2){
        cout << 1 << " " << 1;
    }
    else{
        int i = 0, j = n-1;
        int sumaAlice = 0, sumaBob = 0;
        int chocoAlice = 1, chocoBob = 1;
        bool entra = true;
        sumaAlice += arr[i];
        sumaBob += arr[j];
        int cont = 0;
        while(j-i > 2){
            cont++;
            if(sumaBob < sumaAlice){
                j--; 
                chocoBob++;
                sumaBob += arr[j];
            }
            else if( sumaBob > sumaAlice ){
                i++;
                chocoAlice++;
                sumaAlice += arr[i];
            }
            else{
                i++; j--;
                chocoAlice++; chocoBob++;
                sumaAlice += arr[i];
                sumaBob += arr[j];
                cont++;
            }
        }
        if(sumaAlice <= sumaBob && cont != n-2){
            chocoAlice++;
        }
        else if(cont != n-2) chocoBob++;
        cout << chocoAlice << " " << chocoBob;
    }
    


}

/* CASOS PRUEBA 


*/