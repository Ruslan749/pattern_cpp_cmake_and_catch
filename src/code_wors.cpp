#include "code_wors.h"
#include <unordered_map>
int score(const std::array<unsigned, 5>& dice) {
      std::unordered_map<int, int> counts;
    for (int d : dice) {
        counts[d]++;
    }
    
    int totalScore = 0;
    
    std::unordered_map<int, int> tripletScores = {
        {1, 1000}, {6, 600}, {5, 500}, {4, 400}, {3, 300}, {2, 200}
    };
    
    for (auto& [num, count] : counts) {
        if (count >= 3) {
            totalScore += tripletScores[num];
            count -= 3;
        }
    }
    
    totalScore += counts[1] * 100;
    totalScore += counts[5] * 50;
    
    return totalScore; 
}