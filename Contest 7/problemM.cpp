#include<bits/stdc++.h>
#define forn(i,n) for(int i = 0; i < n; i++)

#define pb push_back


using namespace std;


typedef vector<int> vi;


typedef pair<int,int> pii;






using namespace std;



int main () {
    int n,m,d;
    cin >> n >> m >> d;
    int matrix[n][m];
    bool sePuede = true;
    int t;
    vector<int> median;
    for (int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> matrix[i][j];
            median.push_back(matrix[i][j]);

        }
    }
    int first_num = matrix[0][0];
    for (int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(first_num%d != matrix[i][j]%d){
                sePuede = false;
            }
        }
    }
    if(!sePuede){
        cout << -1;
    }else{
        sort(median.begin(),median.end());
        int medio = median[n*m/2];
        int cant = 0;
        for (int i = 0; i < n;i++){
            for(int j = 0; j < m;j++){
                cant += (abs(matrix[i][j] - medio)/d);
            }
        }
        cout << cant << endl;
    }





}