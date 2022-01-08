#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// view the image in this repository for better understanding
		// a possible arrangement would be to place the rooks in the main diagonal of the grid
		// and skipping 1 row after (in order to this, the no. of rooks should be <= (n + 1) / 2)
		if (k > ((n + 1) / 2)) {
			cout << -1 << '\n';
			continue;	
		}
		vector<vector<char>> a(n, vector<char>(n, '.'));
		for (int i = 0; i < n; i += 2) {
			if (k > 0) {
				a[i][i] = 'R';
				k--;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j]; // there are no spaces
			}
			cout << '\n';
		}
	}
	return 0;
}