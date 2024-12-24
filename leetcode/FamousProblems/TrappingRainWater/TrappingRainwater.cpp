#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& vec) {
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;
}

vector<int> getLeftMax(vector<int> &height, int n) {
    vector<int> leftMax(n);
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]); // Accumulate max height
    }
    return leftMax;
}

vector<int> getRightMax(vector<int> &height, int n) {
    vector<int> rightMax(n);
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]); // Accumulate max height
    }
    return rightMax;
}

int trap(vector<int> &height) {
    int n = height.size();
    if (n == 0) {
        return 0;
    }

    vector<int> leftMax = getLeftMax(height, n);
    vector<int> rightMax = getRightMax(height, n);

    int sum = 0;
    int width = 1;
    for (int i = 0; i < n; i++) {
        int h = min(leftMax[i], rightMax[i]) - height[i];
        sum += (h * width);
    }
    return sum;
}

int main() {
    vector<int> height = {3, 1, 4, 1, 3, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapped Rainwater: " << trap(height) << endl;
    return 0;
}


// To run this code write the following command in terminal
// g++ -std=c++20 TrappingRainwater.cpp -o TrappingRainwater
// ./TrappingRainwater

// leftMax: { 3 3 4 4 4 4 4 4 4 4 4 4 }
// rightMax:{ 4 4 4 3 3 3 3 3 2 2 2 1 }