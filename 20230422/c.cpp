#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    int max = 0;
    bool hantei = false;

    for(char c : s){
        if(c == 'o'){
            count += 1;
            hantei = true;
        }
        if(c == '-'){
            if(count > max) max = count;
            count = 0;
        }
    }
    if(count > max) max = count;
    ///if(s.at(0) == s.at(n-1)) hantei = false;///

    if(hantei)cout << max << endl;
    else cout << -1 << endl;
    return 0;
}