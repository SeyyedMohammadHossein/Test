#include <iostream>
#include <malloc.h>

using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int key, j, i = 1; i <= 9; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] <= key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i: a) cout << i << "\t";
    return 0;
}