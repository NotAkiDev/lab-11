#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

    int value;
    vector<int> arr;
    cin >> value;
    // Добавление элементов в вектор
    while (value != -1) {
        arr.push_back(value);
        cin >> value;
    }
    // Вывод эл-тов вектора
    for (auto it = arr.begin(); it != arr.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Контейнерные алгоритмы
    // Сортировка и вывод
    sort(arr.begin(), arr.end());
    for (int it: arr)
        cout << it << " ";
    cout << endl;

    // Суммирование и вывод
    cout << accumulate(arr.begin(), arr.end(), 0) << endl;

    // Поиск эл-та в контейнере
    auto mew = find(arr.begin(), arr.end(), 3);
    if (mew != arr.end())
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    // Поиск минимум и максимум
    auto pair = minmax_element(arr.begin(), arr.end());
    cout << *pair.first << " " << *pair.second << endl;
    return 0;
}
