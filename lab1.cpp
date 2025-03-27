#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <chrono>

void countSort(std::vector<std::pair<int, std::string>>& numbers) {
    if (numbers.empty()) return;

    int maxKey = std::max_element(numbers.begin(), numbers.end(),
        [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
            return a.first < b.first;
        })->first;

    std::vector<int> counts(maxKey + 1, 0);

    for (const auto& pair : numbers) {
        counts[pair.first]++;
    }

    for (size_t i = 1; i < counts.size(); i++) {
        counts[i] += counts[i - 1];
    }

    std::vector<std::pair<int, std::string>> sortedNumbers(numbers.size());
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = numbers.size() - 1; i >= 0; i--) {
        int key = numbers[i].first;
        counts[key]--;
        sortedNumbers[counts[key]] = numbers[i];
    }

    for (const auto& pair : sortedNumbers) {
        printf("%06d\t%s\n", pair.first, pair.second.c_str());
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "time: " << elapsed.count() << "ms\n";
}

int main() {
    std::vector<std::pair<int, std::string>> numbers;
    int key;
    char value[2049];

    while (scanf("%d %2048s", &key, value) != EOF) {
        numbers.emplace_back(key, value);
    }

    countSort(numbers);

    return 0;
}