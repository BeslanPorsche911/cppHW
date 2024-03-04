#include <iostream>
using namespace std;

#define random(a, b) a+rand()%(b-a+1)

int findindex(int array[], int size, int n) {
    int index = 0;
    for (int i = 0; i < size / 2; i++) {
        if (n == array[i]) return index;
        index++;
    }
    for (int j = size / 2; j < size; j++) {
        if (n == array[j]) return index;
        index++;
    }
    return -1;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = random(1, 10);
    }
}

void showArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int counterArraykratno(int array[], int size, int counter = 0, int i = 0) {
    if (i == size - 1) return counter;
    if (array[i++] % 2 == 0) counter++;
    counterArraykratno(array, size);
}

int main()
{
    srand(time(NULL));
    int array[10]{};
    int size = sizeof(array) / sizeof(array[0]);
    fillArray(array, size);
    showArray(array, size);
    cout << counterArraykratno(array, size);
}