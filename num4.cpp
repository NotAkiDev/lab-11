#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    deque<int> queue;

    copy(arr.begin(), arr.end(), back_inserter(queue));

    for (auto num : queue) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
