// Sort 0's 1's

#include <iostream>
using namespace std;

void printArray(int input[], int size) {
    for (int i = 0; i < size; i++) {
        cout << input[i] << '\t';
    }
    cout << endl;
}
void swap(int input[], int index1, int index2 ) {
    int temp = input[index1];
    input[index1] = input[index2];
    input[index2] = temp;
}
void sort01(int input[], int size) {
    int low = 0, var = 0;
    while (var != size) {
        if(input[var] > 0) {
            swap(input, low, var);
            low++;
            var++;
        }
        else {
            var++;
        }
    }
    printArray(input, size);
    var = low;
    low = low - 1;
    int i = 0;
    while(var < size && low >= 0) {
        if (i%2 == 0) {
            cout << input[low] << " ";
            i++;
            low--;
        } else {
            cout << input[var] << " ";
            i++;
            var++;
        }
    }
    while (low >= 0) {
        cout << input[low] << " ";
        low--;
    }
    while(var < size) {
        cout << input[var] << " ";
        var++;
    }
}
int main() {
    int size = 0;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }
    sort01(input, size);
//    printArray(input, size);
}

