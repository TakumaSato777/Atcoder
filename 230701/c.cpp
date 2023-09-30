#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

struct IndexedElement {
    double value;
    int index;

    IndexedElement(long double val, int idx) : value(val), index(idx) {}
};

bool compareIndexedElements(const IndexedElement& a, const IndexedElement& b) {
    return a.value > b.value;
}


int main() {
    int n;
    int A[200009],B[200009];
    long double C; 
    vector<IndexedElement> indexedArray;
    cin >> n;
    rep1(i,n) cin >> A[i] >>B[i];

    rep1(i,n){
        C = (long double)A[i] / (A[i] + B[i]);
        indexedArray.emplace_back(C,i);
    }

    sort(indexedArray.begin(), indexedArray.end(), compareIndexedElements);

    for (const IndexedElement& element : indexedArray) {
        cout<< element.index << endl;
    }
    return 0;
}