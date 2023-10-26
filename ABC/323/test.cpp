#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<std::pair<int, int>> indexedValues;

    // 各要素とそのインデックスをペアにまとめる
    for (int i = 0; i < values.size(); ++i) {
        indexedValues.push_back(std::make_pair(values[i], i));
    }

    // 降順でソート
    std::sort(indexedValues.rbegin(), indexedValues.rend(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first < b.first; // 降順にソート
});


    // 元のインデックスの順序で要素を表示
    for (const auto& pair : indexedValues) {
        std::cout << "Index: " << pair.second << ", Value: " << pair.first << std::endl;
    }

    return 0;
}
