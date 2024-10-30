#include <iostream>
#include <vector>
#include <cmath> // 用於 M_PI 和 exp

// 顯示陣列內容
void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

// 增加陣列大小的函數
void resizeArray(std::vector<int>& arr, int newSize) {
    arr.resize(newSize, 0); // 將新位置設為 0
}

int main() {
    std::vector<int> arr(1, 1); // 初始大小為 1，內容為 [1]
    std::cout << "初始陣列大小: " << arr.size() << "，內容: ";
    printArray(arr);

    // 選項 1: 指數乘法增長 (size x= 2)
    int newSize = arr.size() * 2;
    resizeArray(arr, newSize);
    std::cout << "size x= 2 後的大小: " << arr.size() << "，內容: ";
    printArray(arr);

    // 重置陣列大小
    arr = std::vector<int>(1, 1);

    // 選項 2: 線性加法增長 (size += 2)
    newSize = arr.size() + 2;
    resizeArray(arr, newSize);
    std::cout << "size += 2 後的大小: " << arr.size() << "，內容: ";
    printArray(arr);

    // 重置陣列大小
    arr = std::vector<int>(1, 1);

    // 選項 3: 複雜的指數函數增長 (size += e^(size * π))
    newSize = arr.size() + static_cast<int>(std::exp(arr.size() * 3.14));
    resizeArray(arr, newSize);
    std::cout << "size += e^(size * π) 後的大小: " << arr.size() << "，內容: ";
    printArray(arr);

    // 重置陣列大小
    arr = std::vector<int>(1, 1);

    // 其他擴增方式 (平方增長)
    newSize = arr.size() + static_cast<int>(std::pow(arr.size(), 2));
    resizeArray(arr, newSize);
    std::cout << "其他方式 (size += size^2) 後的大小: " << arr.size() << "，內容: ";
    printArray(arr);

    return 0;
}
