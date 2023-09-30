#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    string s;;
    int ans = 0;
    cin >> s;
    string t = {};
    string divide[4] = {"dream", "dreamer", "erase", "eraser"};

    reverse(s.begin(),s.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

    bool hantei = true;
    for(int i = 0; i < s.size();){
        bool hantei2 = false;
        for(int j = 0; j < 4; j++){
            string d = divide[j];
            if(s.substr(i,d.size()) == d){
                hantei2 = true;
                i += d.size();
            }
        }
        if(!hantei2){
            hantei = false;
            break;
        }
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}