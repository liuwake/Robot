//
// Created by liuwake on 2023/12/23.
//
#include <iostream>
#include <vector>

std::vector<int> calculateDifference(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::vector<int> result;

    // 检查两个vector的大小是否一致
    if (vec1.size() != vec2.size()) {
        std::cout << "Error: The sizes of the vectors are not the same." << std::endl;
        return result; // 返回空的vector
    }

    // 计算差值
    for (size_t i = 0; i < vec1.size(); ++i) {
        result.push_back(vec1[i] - vec2[i]);
    }

    return result;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 4, 3, 2, 1};

    std::vector<int> difference = calculateDifference(vec1, vec2);

    // 打印结果
    std::cout << "Difference: ";
    for (const auto& num : difference) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
