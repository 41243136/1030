#include <iostream>
#include <cmath> // �Ω� M_PI �M exp

int main() {
    double size = 10.0; // ��l�j�p
    std::cout << "��l�j�p: " << size << std::endl;

    // �ﶵ 1: ���ƭ��k�W��
    size *= 2;
    std::cout << "size x= 2 ��: " << size << std::endl;

    // ���m�j�p
    size = 1.0;

    // �ﶵ 2: �u�ʥ[�k�W��
    size += 2;
    std::cout << "size += 2 ��: " << size << std::endl;

    // ���m�j�p
    size = 1.0;

    // �ﶵ 3: ���������ƨ�ƼW��
    size += std::exp(size * 3.14); // M_PI �O �k ����
    std::cout << "size += e^(size * �k) ��: " << size << std::endl;

    // ��L�X�W�覡
    // �i�H�ھڻݨD�۩w�q�A�Ҧp����W��
    size = 1.0;
    size += std::pow(size, 2); // size += size^2
    std::cout << "��L�覡 (size += size^2) ��: " << size << std::endl;

    return 0;
}
