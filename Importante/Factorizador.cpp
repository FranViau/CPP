#include <iostream>

using namespace std;

int primos[454546];
bool primosb[454546];
int factores[454546];


void criba(long long n){
	primosb[0] = false; primosb[1] = false;primosb[2] = true;
	for(int i = 4; i <= n;i += 2){
		primosb[i] = false;
		primosb[i-1] = true;
	}
	for (int i = 3;i <= n;i+=2){
		if(primosb[i]){
			for (int j = i*i; j <= n; j += 2*i){
				primosb[j] = false;
			}
		}
	}
	for (int i = 0; i <= n;i++){
		if(primosb[i]){
			cout << i << endl;
		}
	}
}

int mcd(int a, int b){
	if(b == 0){
		return a;
	}
	return mcd(b,a%b);
}

void criba_para_factorizar(int n){
	primos[0] = 1; primos[1] = 1;primos[2] = 2;
	for(int i = 4; i <= n;i += 2){
		primos[i] = 2;
		primos[i-1] = i-1;
	}
	for (int i = 3;i <= n;i+=2){
		if(primos[i] == i){
			for (int j = i*i; j <= n; j += 2*i){
				primos[j] = i;
			}
		}
	}
}

void factorizar(int n){
	while(n != 1){
		factores[primos[n]]++;
		n /= primos[n];
	}
	
}
	

	

int main(){
	criba_para_factorizar(454546);
	factorizar(454546);
	for (int i = 0; i <= 454546; i++){
		if(factores[i] != 0){
			cout << "EL FACTOR ES " << i << " Y SU VALOR ES " << factores[i] << endl;
		}
	}
}