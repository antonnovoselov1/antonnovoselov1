#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N = 15;
    int arr[15] = {1, 14, 89, 71, 13, 8, 3, 0, 29, 54, 53, 68, 10, 101, 37};

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
    for (int i=0;i<N;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<clock()/1000.0;
    return 0;
}

# Тут также сортировка происходит за O(N**2)
# Вданном случае за ~ 0.08 секунд
