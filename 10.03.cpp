#include <iostream>
using namespace std;



int main()
{
    srand(time(NULL));

    const int STUDENTS = 4;
    const int MARKS = 5;
    float avgStM = 0;
    float avgDisc = 0;
    float avgStudents = 0;
    int best = 0;
    int sttry = 1;
    float bStValue = 0;
    float bStIndex = 0;
    float wStValue = 0;
    float wStIndex = 0;
    float bDiscValue = 0;
    float bDiscIndex = 0;
    float wDiscValue = 0;
    float wDiscIndex = 0;
    int array[STUDENTS][MARKS]{ {} };

    cout << "\t\t|RUS|\t|MAT|\t|ENG|\t|LIT|\t|GEO|\t|AvgSt|" << endl;
    for (int i = 0, k = 1; i < STUDENTS; i++) {
        avgStM = 0;
        cout << "Student " << k++ " ";
        for (int j = 0; j < MARKS; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << "\t" "| " << array[i][j] << " |";
            avgStM += array[i][j];
            avgStudents += array[i][j];
            best = avgStM;
        }
        float avgSt = avgStM / MARKS;
        cout << "\t" << "| " << avgSt << " |" << "\t" << endl;
        if (avgSt < wStValue) {
            wStValue = avgSt;
            wStIndex = i;
        }
        if (avgSt > bStValue) {
            bStValue = avgSt;
            bStIndex = i;
        }
    }
    cout << "AvgDis: ";
    for (int i = 0; i < MARKS; i++) {
        avgDisc = 0;
        for (int j = 0; j < STUDENTS; j++) {
            avgDisc += array[j][i];
        }
        float avgDDisc = avgDisc / MARKS;
        cout << "\t" << "| " << avgDisc / MARKS << " |";
        if (avgDDisc < wDiscValue) {
            wDiscValue = avgDDisc;
            wDiscIndex = i;
        }
        if (avgDDisc > bDiscValue) {
            bDiscValue = avgDDisc;
            bDiscIndex = i;
        }
    }
    cout << endl << endl;
    cout << "Average all students: " << avgStudents / (MARKS * STUDENTS) << endl << endl;
    cout << "The best students is: " << bStIndex << endl << endl << "The Words students is: " << wStIndex << endl << endl;
    cout << "The best discipline is: " << bDiscIndex << endl << endl << "The Worst discipline is: " << wDiscIndex << endl << endl;
}