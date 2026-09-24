#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> arr) {
    int max = 0;

    // First loop: Find maximum height
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count = 0;

    // Second loop: Count maximum candles
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == max) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 4};

    int result = birthdayCakeCandles(arr);

    cout << result << endl;

    return 0;
}
