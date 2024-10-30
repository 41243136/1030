#include <iostream>
#include <vector>
#include <cmath> // �Ω� M_PI �M exp

// ��ܰ}�C���e
void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

// �W�[�}�C�j�p�����
void resizeArray(std::vector<int>& arr, int newSize) {
    arr.resize(newSize, 0); // �N�s��m�]�� 0
}

int main() {
    std::vector<int> arr(1, 1); // ��l�j�p�� 1�A���e�� [1]
    std::cout << "��l�}�C�j�p: " << arr.size() << "�A���e: ";
    printArray(arr);

    // �ﶵ 1: ���ƭ��k�W�� (size x= 2)
    int newSize = arr.size() * 2;
    resizeArray(arr, newSize);
    std::cout << "size x= 2 �᪺�j�p: " << arr.size() << "�A���e: ";
    printArray(arr);

    // ���m�}�C�j�p
    arr = std::vector<int>(1, 1);

    // �ﶵ 2: �u�ʥ[�k�W�� (size += 2)
    newSize = arr.size() + 2;
    resizeArray(arr, newSize);
    std::cout << "size += 2 �᪺�j�p: " << arr.size() << "�A���e: ";
    printArray(arr);

    // ���m�}�C�j�p
    arr = std::vector<int>(1, 1);

    // �ﶵ 3: ���������ƨ�ƼW�� (size += e^(size * �k))
    newSize = arr.size() + static_cast<int>(std::exp(arr.size() * 3.14));
    resizeArray(arr, newSize);
    std::cout << "size += e^(size * �k) �᪺�j�p: " << arr.size() << "�A���e: ";
    printArray(arr);

    // ���m�}�C�j�p
    arr = std::vector<int>(1, 1);

    // ��L�X�W�覡 (����W��)
    newSize = arr.size() + static_cast<int>(std::pow(arr.size(), 2));
    resizeArray(arr, newSize);
    std::cout << "��L�覡 (size += size^2) �᪺�j�p: " << arr.size() << "�A���e: ";
    printArray(arr);

    return 0;
}
