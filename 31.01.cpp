#include <iostream>
using namespace std;

void showArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void showArray(int array1[][5], int size, int size1) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size1; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int avg(int array[], int size) {
    int summa = array[0];
    for (int i = 1; i < size; i++) {
        summa += array[i];
    }
    return summa /= size;
}

int avg(int array1[][5], int size3, int size1) {
    int summa = array1[0][0];
    for (int j = 0; j < size1; j++) {
        summa += avg(array1[j], size3);
    }
    return (summa / (size1,size3));
}

void swapArray(int array1[][5], int size3) {
    int size = _msize(array1) / sizeof(array1[0]);
    for (int i = 0, int k = 0; i < size / 2; i++) {
        for (int j = 0; j < size3; j++) {
            swap(array1[i][j], array1[size3 - 1 - i][j]);
        }
    }
}






int main()
{
    int array[] = { 3,5,2,1,5 };
    int size = sizeof(array) / sizeof(array[0]);
    int array1[2][5] = { {3,4,65,1,5},{4,2,1,762,2} };
    int sizeSecArr = sizeof(array1[0]) / sizeof(array1[0][0]);
    int sizeFirArr = sizeof(array1) / sizeof(array1[0]);
    showArray(array1, sizeFirArr, sizeSecArr);
    swapArray(array1, sizeSecArr);
    showArray(array1, size3, size1);
    showArray(array, size); 

}