#include <iostream>
using namespace std;

void showArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i];
    }
}

void showArray(int array[][5], int size, int size2) {
    for (int i = 0; i < size; i++) {
        showArray(array[i], size2);
        cout << endl;
    }
}

int avgOfAr(int array[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        count += array[i];
    }
    return (count / size);
}

int avgOfAr(int array[][5], int size, int size2) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2; j++) {
            count += array[i][j];
        }
    }
    return ((float)count / (size * size2));
}

int smallestElOfAr(int array[], int size) {
    int min = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] < min) min = array[i];
    }
    return min;
}

int smallestElOfAr(int array[][5], int size, int size2) {
    int min = array[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2; j++) {
            min = smallestElOfAr(array[j], size2);
        }
    }
    return min;
}

void reverseArr(int array[], int size) {
    for (int i = 0; i < size; i++) {
        swap(array[i], array[--size]);
    }
}

void reverseArr(int array[][5], int size, int size2) {
    for (int i = 0; i < size; i++) {
        reverseArr(array[i], size2);
    }
}

int main()
{
    int array[] = { 1, 3, 5, 7, 9 };
    int bigArray[2][5] = { {1, 2, 3, 4, 5},
                           {6, 7, 8, 9, 1} };
    int size = sizeof(array) / sizeof(array[0]);
    int bigSize = sizeof(bigArray) / sizeof(bigArray[0]);
    int bigSize2 = sizeof(bigArray[0]) / sizeof(bigArray[0][0]);

    showArray(bigArray, bigSize, bigSize2);
    cout << endl;
    reverseArr(bigArray, bigSize, bigSize2);
    cout << endl;
    showArray(bigArray, bigSize, bigSize2);
}