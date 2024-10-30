#include <iostream>
#include <cmath> // 用於 M_PI 和 exp

int main() {
    double size = 10.0; // 初始大小
    std::cout << "初始大小: " << size << std::endl;

    // 選項 1: 指數乘法增長
    size *= 2;
    std::cout << "size x= 2 後: " << size << std::endl;

    // 重置大小
    size = 1.0;

    // 選項 2: 線性加法增長
    size += 2;
    std::cout << "size += 2 後: " << size << std::endl;

    // 重置大小
    size = 1.0;

    // 選項 3: 複雜的指數函數增長
    size += std::exp(size * 3.14); // M_PI 是 π 的值
    std::cout << "size += e^(size * π) 後: " << size << std::endl;

    // 其他擴增方式
    // 可以根據需求自定義，例如平方增長
    size = 1.0;
    size += std::pow(size, 2); // size += size^2
    std::cout << "其他方式 (size += size^2) 後: " << size << std::endl;

    return 0;
}
