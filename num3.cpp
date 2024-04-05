#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string PATH = "/Users/aki/Desktop/lab_11/text.txt";

    vector<int> arr = {2, 3, 4, 5, 9};

    ofstream outputFile(PATH);
    copy(arr.begin(), arr.end(), ostream_iterator<int>(outputFile, " "));
    outputFile.close();

    ifstream inputFile(PATH);
    istream_iterator<int> input(inputFile);
    istream_iterator<int> eof;

    vector<int> arr_2;
    while (input != eof) {
        arr_2.push_back(*input);
        input++;
    }
    for (int num: arr_2) {
        cout << num << " ";
    }
}