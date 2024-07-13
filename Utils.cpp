#include "Utils.h"
#include <random>

int Utils::GetRandomNumber(int min, int max)
{
    // 使用随机设备来生成随机数
    std::random_device rd;
    // 使用 Mersenne Twister 引擎
    std::mt19937 gen(rd());
    // 定义分布，生成在 [min, max] 范围内的整数
    std::uniform_int_distribution<int> dis(min, max);
    // 返回随机数
    return dis(gen);
}
