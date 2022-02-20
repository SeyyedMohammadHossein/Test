#include <iostream>
#include <malloc.h>

using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            if (a[j+1] > a[j]) {
                a[j+1] += a[j];
                a[j] = a[j+1] - a[j];
                a[j+1] -= a[j];
            }

    for (int i : a) {
        cout<<i<<"\t";
    }
    return 0;
}