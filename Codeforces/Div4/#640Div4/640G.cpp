#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
#define fore(i, a, b) for(int i = a; i < b; i++)
#define fori(i, a, b) for(int i = a; i <= b; i++)
#define pb push_back
#define popb pop_back
#define mk make_pair
#define fi first
#define se second
#define endl '\n'
#define MAX 60
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
ld eps = 1e-9;

int main() {
	optimizar_io
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		if(n >= 4) {
			int inicio = n;
			if(!(n & 1)) inicio = n-1;
			for(int i = inicio; i >= 0; i -= 2) cout << i << " ";
			cout << "4 2 ";
			for(int i = 6; i <= n; i += 2) cout << i << " ";
			cout << endl;
		} else cout << -1 << endl;
	}
}