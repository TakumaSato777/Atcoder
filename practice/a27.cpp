#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int A,B;

int GCD(int A,int B){
    while(A >= 1 && B >= 1){
        if(A >= B){
            A = A % B;
        }
        else{
            B = B % A;
        }
    }
    if(A != 0) return A;
    else return B;
}

int main() {
    cin >> A >> B;
    
    cout << GCD(A,B) << endl;

    return 0;
}