#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
#define fore(i, a, b) for(int i = a; i < b; i++)
#define fori(i, a, b) for(int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
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
	int t; cin >> t;
	while(t--) {
		lli n; cin >> n;
		int dos = 0, tres = 0;
		while(!(n % 2ll)) {
			n = n / 2ll;
			dos++;
		}
		while(!(n % 3ll)) {
			n = n / 3ll;
			tres++;
		}
		if(n != 1 or dos > tres) cout << -1 << endl;
		else cout << (tres * 2) - dos << endl;
	}
}