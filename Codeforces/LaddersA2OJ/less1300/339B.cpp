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
	int n, m; cin >> n >> m;
	vector<int> v(m);
	fore(i, 0, m) cin >> v[i];

	int last = 1;
	lli sum = 0;
	fore(i, 0, m) {
		if(v[i] == last) continue;
		if(v[i] < last) {
			sum += (n - last) + v[i];
		} else sum += v[i] - last;
		last = v[i];
	}
	cout << sum << endl;
}