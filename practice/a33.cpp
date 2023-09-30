#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N;

int main() {
    cin >> N;
    vector<int> A(N+1);

    rep1(i,N) cin >> A[i];
    int ronri = A[1];
    for(int i = 2; i <=N; i++) ronri = (ronri ^ A[i]);

    if(ronri != 0) cout << "First" << endl;
    if(ronri == 0) cout << "Second" << endl;


    return 0;
}