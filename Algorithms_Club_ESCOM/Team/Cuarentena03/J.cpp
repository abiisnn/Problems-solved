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
	string s; cin >> s;
	
	vector<string> ans;
	fore(i, 0, s.size()) {
		fore(j, i+1, s.size()) {
			string aux = s;
			swap(aux[i], aux[j]);
			if(aux < s) ans.pb(aux);
		}
	}
	sort(ans.begin(), ans.end());
	if(ans.size() > 0) {
		if(ans[ans.size()-1][0] != '0') cout << ans[ans.size()-1];
		else cout << -1;
	}else cout << -1;
	cout << endl;
}