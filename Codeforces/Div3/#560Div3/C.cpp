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
#define MAX 10000000
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
ld eps = 1e-9;

int main() {
	optimizar_io
	string s;
	int n; cin >> n >> s;

	string ans = "";
	char last = '%';
	fore(i, 0, n) {
		if(!(ans.size() & 1)) last = '%';
		if(s[i] != last) {
			ans += s[i];
			last = s[i];
		}
	}
	if(ans.size() & 1) ans = ans.substr(0, ans.size()-1);
	
	cout << s.size() - ans.size() << endl;
	if(ans.size()) cout << ans << endl;
}