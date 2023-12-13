

#include <iostream>
using namespace std;

int main()
{
//массив находит нечетное элемент
   // int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   // int length = sizeof(arr) / sizeof(arr[0]);

    //for (int i = 0; i < length; i++) {
    //    if (arr[i] % 2 != 0) {
   //         cout << arr[i] << " ";
   //     }
   // }

   // return 0;

    //удаляет элемент из позиции
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;
    int position = 5;

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (position >= 0 && position < size) {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        cout << "Измененный массив: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Ошибка: недопустимая позиция!" << endl;
    }

    return 0;


}



