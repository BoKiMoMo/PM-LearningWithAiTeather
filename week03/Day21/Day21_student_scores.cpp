// Day21 - C++ 練習範例

#include <iostream>
using namespace std;

const int MAX = 100;

void addScore(int scores[], int& count, int score) {
    scores[count++] = score;
}

double getAverage(int scores[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) sum += scores[i];
    return count > 0 ? sum / count : 0;
}

int getMax(int scores[], int count) {
    int maxVal = scores[0];
    for (int i = 1; i < count; i++)
        if (scores[i] > maxVal) maxVal = scores[i];
    return maxVal;
}

int getMin(int scores[], int count) {
    int minVal = scores[0];
    for (int i = 1; i < count; i++)
        if (scores[i] < minVal) minVal = scores[i];
    return minVal;
}

int main() {
    int scores[MAX], count = 0;
    addScore(scores, count, 85);
    addScore(scores, count, 92);
    addScore(scores, count, 76);

    cout << "平均分數: " << getAverage(scores, count) << endl;
    cout << "最高分: " << getMax(scores, count) << endl;
    cout << "最低分: " << getMin(scores, count) << endl;
    return 0;
}