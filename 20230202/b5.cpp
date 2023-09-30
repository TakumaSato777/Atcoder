#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i =0; i < N; ++i) cin >> d[i];
    
    set<int> val;
    for(int i = 0; i < N; ++i){
        val.insert(d[i]);
    }

    cout << val.size() << endl;
    return 0;
}