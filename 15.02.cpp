

#include <iostream>
using namespace std;

void conveyer(int array[][3], string direction, int step, int array_size, int string_size) {
   
    if (direction == "left") {
        for (int k = 0; k < step; k++) {
            for (int i = 0; i < array_size; i++) {
                for (int j = 1; j < string_size; j++) {
                    swap(array[i][j - 1], array[i][j]);
                }
            }
        }
    }
    else if (direction == "right") {
        for (int k = 0; k < step; k++) {
            for (int i = 0; i < array_size; i++) {
                for (int j = string_size-2; j >= 0; j--) {
                    swap(array[i][j], array[i][j + 1]);
                }
            }
        }
    }

    else if (direction == "up") {
        for (int k = 0; k < step; k++) {
            for (int i = 1; i < array_size; i++) {
                for (int j = 0; j < string_size; j++) {
                    swap(array[i][j], array[i-1][j]);
                }
            }
        }
    }

    else if (direction == "down") {
        for (int k = 0; k < step; k++) {
            for (int i = array_size-2; i >= 0; i--) {
                for (int j = 0; j < string_size; j++) {
                    swap(array[i+1][j], array[i][j]);
                }
            }
        }
    }


    else {
        cout << "Unknown direction.";
        return;
    }
}

int main()
{
    const int array_size = 3;
    const int string_size = 3;

    int array[array_size][string_size]{ {1,2,3},
                                        {4,5,6},
                                        {7,8,9} };


    string direct;
    cin >> direct;

    for (int i = 0; i < array_size; i++) {
        for (int j = 0; j < string_size; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    conveyer(array, direct, 2, array_size, string_size);

    cout << endl;
    for (int i = 0; i < array_size; i++) {
        for (int j = 0; j < string_size; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
