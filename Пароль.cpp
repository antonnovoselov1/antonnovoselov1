#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    bool verify;

    do {
        string pass;
        cout << endl << "Придумайте и введите пароль, который содержит только буквы и цифры:" << endl;
        cin >> pass;
        int l = pass.length();

        if (l < 8)
            cout << "Пароль не соответствует требованиям." << endl;
        else {
            int temp = 0;
            for (int i = 0; i < l; i++)
                if ((pass[i] == '?') || (pass[i] == '!') || (pass[i] == '/') || (pass[i] == '|') || (pass[i] == '<') ||
                    (pass[i] == '>') || (pass[i] == '"') || (pass[i] == '.') || (pass[i] == ',') || (pass[i] == '{') ||
                    (pass[i] == '}') || (pass[i] == '[') || (pass[i] == ']') || (pass[i] == '(') || (pass[i] == ')') ||
                    (pass[i] == '+') || (pass[i] == '=') || (pass[i] == ' '))
                    temp++;

            if (temp > 0) {
                cout << "Пароль не соответствует требованиям." << endl;
                verify = false;
            } else {
                string pass_check;
                cout << "Повторите пароль:" << endl;
                cin >> pass_check;

                if (pass_check != pass) {
                    cout << "Пароли не совпадают." << endl;
                    verify = false;
                } else
                    verify = true;
            }
        }
    } while (verify == false);

    cout << "Пароль успешно создан!";

    return 0;
}