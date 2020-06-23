#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e6;
int a[mxN], l[mxN];

void decode() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	l[n-1] = 1;
	for(int i = n - 2; i >= 0; --i) {
		if(a[i] * 1LL * a[i+1] < 0) {
			l[i] = l[i+1] + 1;
		}
		else {
			l[i] = 1;
		}
	}
	for(int i = 0; i < n; ++i) {
		cout << l[i] << " ";
	}
	cout << "\n";
}	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
