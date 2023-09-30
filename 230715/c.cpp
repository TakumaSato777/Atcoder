#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N;
string tmp,s;
vector<string> S;


int main() {
    cin >> N;
    rep(i,N){
        cin >> tmp;
        S.push_back(tmp);
    }
    int count = 0;

    rep(i,N){
        bool hantei = false;
        int c = 0;
        for(int j = i+1; j < N; j++){
            s = S[j];
            reverse(s.begin(), s.end());
            if(S[i] == S[j] || S[i] == s){
                count += 1;
                c += 1;
                hantei = true;
            }
        if(hantei) count -= c-1;
        }
    }

    cout << count << endl;

    return 0;
}