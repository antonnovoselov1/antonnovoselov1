#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int N;
double time_1, time_2;

void pivot() {
    int *Mass = new int[N];
    for (int i = 0; i < N; i++)
        cin >> Mass[i];

    time_1 = clock();
    for (int i = 0; i < N; i++) {
        int pivot = Mass[N / 2];
        if (i < pivot)
            if (Mass[i] > Mass[pivot])
                swap(Mass[i], Mass[pivot]);
            else if (i > pivot)
                if (Mass[i] < Mass[pivot])
                    swap(Mass[i], Mass[pivot]);
    }

    for (int i = 0; i < N; i++)
        cout << Mass[i] << " ";
    cout << endl;
    time_2 = clock();
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cin >> N;
    pivot();

    double dtime = (time_2 - time_1) / 1000;
    cout << "Время работы программы, с: " << dtime;
    return 0;
}