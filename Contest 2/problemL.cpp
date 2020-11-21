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

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

typedef tuple<int,int,int> tupi;
typedef tuple<ll,ll,ll> tupll;



using namespace std;
const int mod = 1e9 + 7;
const ll INF = 1e10;

/*
Vasya decided to learn to play chess. Classic chess doesn't seem interesting to him, so he plays his own sort of chess.

The queen is the piece that captures all squares on its vertical, horizontal and diagonal lines. If the cell is located on the same vertical, horizontal or diagonal line with queen, and the cell contains a piece of the enemy color, the queen is able to move to this square. After that the enemy's piece is removed from the board. The queen cannot move to a cell containing an enemy piece if there is some other piece between it and the queen.

There is an n × n chessboard. We'll denote a cell on the intersection of the r-th row and c-th column as (r, c). The square (1, 1) contains the white queen and the square (1, n) contains the black queen. All other squares contain green pawns that don't belong to anyone.

The players move in turns. The player that moves first plays for the white queen, his opponent plays for the black queen.

On each move the player has to capture some piece with his queen (that is, move to a square that contains either a green pawn or the enemy queen). The player loses if either he cannot capture any piece during his move or the opponent took his queen during the previous move.

Help Vasya determine who wins if both players play with an optimal strategy on the board n × n.

Input
The input contains a single number n (2 ≤ n ≤ 109) — the size of the board.

Output
On the first line print the answer to problem — string "white" or string "black", depending on who wins if the both players play optimally.

If the answer is "white", then you should also print two integers r and c representing the cell (r, c), where the first player should make his first move to win. If there are multiple such cells, print the one with the minimum r. If there are still multiple squares, print the one with the minimum c.
*/


int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n; 
	cin >> n;

    

    if( n % 2 == 0 ){
        cout << "white" << endl;
        cout << "1 2";
    }
    else{
        cout << "black" << endl;
    }

}

/* CASOS PRUEBA 


*/