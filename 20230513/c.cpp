#include<iostream>
#include<map>
#include<cstring>
using namespace std;
const int N = 2e5 + 5;
char s[N], t[N];
map<char, int> m1,m2;
int main() {
	cin >> s >> t;
	int len1 = strlen(s);
	int len2 = strlen(t);
	if (len1 != len2) {
		cout << "No" << endl;
		return 0;
	}
	for (int i = 0;i < len1;i++) {
		m1[s[i]]++;
		m2[t[i]]++;
	}
	for (char i = 'a';i <= 'z';i++)
	{
		if (m1[i] != m2[i]) {
			if (i != 'c' && i != 'o' && i != 'd' && i != 'e' && i != 'a' && i != 'r' && i != 't') {
				cout << "No" << endl;
				return 0;
			}
			if (m1[i] < m2[i]) {
				if (m1['@'] < m2[i]-m1[i]) {
					cout << "No" << endl;
					return 0;
				}
				else {
					m1['@'] -= m2[i] - m1[i];
				}
			}	
			if (m1[i] >m2[i]) {
				if (m2['@'] < m1[i] - m2[i]) {
					cout << "No" << endl;
					return 0;
				}
				else {
					m2['@'] -= m1[i] - m2[i];
				}
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}