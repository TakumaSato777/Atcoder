#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int A,B;
    int ans = 0;
    cin >> A >> B;
    bool hantei = false;
    int dx1[3] = {-3,1,3};
    int dx2[4] = {1,-3,1,3};
    int dx3[3] = {-1,-3,3};
    if(A % 3 == 1){
        rep(i,3){
            if(A + dx1[i] == B) hantei = true;
        }
    }

    if(A % 3 == 2){
        rep(i,4){
            if(A + dx2[i] == B) hantei = true;
        }
    }

    if(A % 3 == 0){
        rep(i,3){
            if(A + dx3[i] == B) hantei = true;
        }
    }



    if(hantei)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}