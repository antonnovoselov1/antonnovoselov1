#include <iostream>
#include <windows.h>

using namespace std;

class Monster_idetifier {
public:
    string sword(string sword, string enemy) {
        if ((enemy == "разбойник") || (enemy == "волк"))
            sword = "стальной";
        else
            sword = "серебряный";
        return sword;
    }

    double win(int level, int experience, int var, double win) {
        win = level * experience * var / 10000;
        return win;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string enemy, sword;
    int level, experience, var;
    double win;
    cin >> enemy >> level >> experience >> var;
    Monster_idetifier monster;
    cout << "Нужен " << monster.sword(sword, enemy) << " меч" << endl;
    cout << "Вероятность выигрыша " << monster.win(level, experience, var, win);
    return 0;
}
