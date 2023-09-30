#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	vector<string> a;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (i < k) a.push_back(s);
	}
	sort(a.begin(), a.end());
	for (string s : a) cout << s << '\n';
}
