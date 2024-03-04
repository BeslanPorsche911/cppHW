#include <iostream>
using namespace std;


int math(int basDegree, int indiDegree) {
    int answer = basDegree;
    for (int i = 1; i < indiDegree; i++) {
        answer *= basDegree;
    }
    return answer;
}


int summNumbers(int min, int max) {
    int summ = 0;
    for (int i = min; i <= max; i++) {
        summ += i;
    }
    return summ;
}

int main()
{
    //cout << math(3, 3); // number 1
    cout << summNumbers(1, 5);



}