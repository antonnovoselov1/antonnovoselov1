#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N = 15;
    int arr[15] = {1, 14, 89, 71, 13, 8, 3, 0, 29, 54, 53, 68, 10, 101, 37};

    int step=N-1;
    while(step>=1) {
        for (int i = 0; i+step < N; i++)
            if(arr[i]>arr[i+step])
                swap(arr[i],arr[i+step]);
        step=(int)(step/1.247);

    }
    for (int i=0;i<N;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<clock()/1000.0;
    return 0;
}
# Сортировка в данном случае происходит за O(N**2)
# В данном случае за ~ 0.009 секунды
