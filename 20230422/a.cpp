#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    bool bou = false;
    bool hantei = false;

    for( char c : s){
        if(c == '|'){
            if(bou == false){
                bou = true;
            } else{
                bou = false;
            }
        }

        if(c == '*'){
            if(bou == true) hantei = true;
        }
    }

    if(hantei == true) cout << "in" << endl;
    if(hantei == false) cout << "out" << endl;
    
    return 0;
}