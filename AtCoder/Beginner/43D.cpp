#include<bits/stdc++.h>
using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
#define fore(i, a, b) for(int i = a; i < b; i++)
#define fori(i, a, b) for(int i = a; i <= b; i++)
#define all(a) a.begin(), a.end()
#define pb push_back
#define popb pop_back
#define mk make_pair
#define fi first
#define se second
#define endl '\n'
#define MAX 20000000
#define MOD 1000000007
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
ld eps = 1e-9;

int main() {
	optimizar_io
	string s; cin >> s;

	bool flag = false;
	int i, j;
	for(i = 0, j = 0; i < (int)s.size(); i++) {
		if(i+1 < (int)s.size() && s[i] == s[i+1]) {
			j = i+1;
			flag = true; break;
		}
		if(i+2 < (int)s.size() && s[i] == s[i+2]) {
			j = i+2;
			flag = true; break;
		}
	}
	i++, j++;
	if(!flag) i = -1, j = -1;
	cout << i << " " << j << endl;
}