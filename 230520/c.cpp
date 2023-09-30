#include <iostream>
#include <vector>
#include <algorithm>

bool isPossible(const std::vector<std::string>& strings) {
    for (int i = 0; i < strings.size() - 1; i++) {
        const std::string& current = strings[i];
        const std::string& next = strings[i + 1];
        int diffCount = 0;

        for (int j = 0; j < current.size(); j++) {
            if (current[j] != next[j]) {
                diffCount++;
                if (diffCount > 1) {
                    break;
                }
            }
        }

        if (diffCount != 1) {
            return false;
        }
    }

    return true;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::string> strings(N);
    for (int i = 0; i < N; i++) {
        std::cin >> strings[i];
    }

    std::sort(strings.begin(), strings.end());

    bool isPossibleOrder = false;
    do {
        if (isPossible(strings)) {
            isPossibleOrder = true;
            break;
        }
    } while (std::next_permutation(strings.begin(), strings.end()));

    std::cout << (isPossibleOrder ? "Yes" : "No") << std::endl;

    return 0;
}
