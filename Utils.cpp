#include "Utils.h"
#include <random>

int Utils::GetRandomNumber(int min, int max)
{
    // ʹ������豸�����������
    std::random_device rd;
    // ʹ�� Mersenne Twister ����
    std::mt19937 gen(rd());
    // ����ֲ��������� [min, max] ��Χ�ڵ�����
    std::uniform_int_distribution<int> dis(min, max);
    // ���������
    return dis(gen);
}
