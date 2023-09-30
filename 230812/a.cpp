#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    // 円周率の値（100 位まで）
    std::string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    // 小数第 N 位までの円周率を出力
    std::cout << pi.substr(0, N + 2) << std::endl;

    return 0;
}
