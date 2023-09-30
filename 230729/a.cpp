#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

string S;

int main() {
    cin >> S;
    bool hantei = false;

    string X[7] = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};

    rep(i,7){
        if(S == X[i]) hantei = true;
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}