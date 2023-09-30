#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    cin >> n;
    int a[110];
    rep1(i,n) cin >> a[i];
    bool hantei = false;

    for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (a[i] + a[j] + a[k] == 1000) hantei = true;
			}
		}
	}

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}