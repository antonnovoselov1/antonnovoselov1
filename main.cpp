#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int N, M;
    cout << "Введите N, M: " << endl;
    cin >> N >> M;
    cout << endl;

    int* arr_1 = new int [N];
    int kol_1=0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr_1[i];
        if (arr_1[i]%2!=0)
            kol_1++;
    }
    int kol_2=0;
    int* arr_2 = new int [N];
    for (int i = 0; i < M; i++)
    {
        cin >> arr_2[i];
        if (arr_2[i]%3!=0)
            kol_2++;
    }
    int j=0;
    int* arr_3 = new int [kol_1+kol_2];
    for (int i=0; i<kol_1; i++)
    {
        while (arr_1[j]%2==0)
            j++;
        arr_3[i]=arr_1[j];
        j++;
    }
    j=0;
    for (int i=kol_1; i<kol_1+kol_2; i++)
    {
        while (arr_2[j]%3==0)
            j++;
        arr_3[i]=arr_2[j];
        j++;
    }

    for(int i=0;i<kol_1+kol_2;i++)
    {
        for(int j=0;j<kol_1+kol_2;j++)
        {
            int temp;
            if (arr_3[i]>arr_3[j])
            {
                temp=arr_3[i];
                arr_3[i]=arr_3[j];
                arr_3[j]=temp;
            }
        }
    }
    for (int i=0;i<kol_1+kol_2;i++)
        cout << arr_3[i]<<" ";
    return 0;
}