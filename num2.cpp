#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int num: arr)
        cout << num << " ";
    cout << endl;

    // Адаптер back inserter
    cout << "Back inserter" << endl;
    back_insert_iterator<vector<int>> insert(arr);
    *insert = 6;
    *insert = 7;

    for (int num: arr)
        cout << num << " ";
    cout << endl;


    // Адаптер front inserter
    deque<int> lst = {1, 2, 3, 4, 5};
    cout << "Front inserter" << endl;
    front_insert_iterator<deque<int>> rinsert(lst);
    *rinsert = 0;
    *rinsert = -1;
    for (int num: arr)
        cout << num << " ";
    cout << endl;

    // Адаптер inserter
    cout << "Inserter" << endl;
    deque<int> dq1 = {1, 2, 3};
    deque<int> dq2 = {4, 5, 6};
    auto iter = dq2.begin();

    copy(dq1.begin(), dq1.end(), inserter(dq2, iter));
    for (int num: dq2)
        cout << num << " ";
    cout << endl;
}