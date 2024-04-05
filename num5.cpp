#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto iter = numbers.rbegin(); iter != numbers.rend(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
