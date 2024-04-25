// lab8.2(2)_Петрушев.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int array[25] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 };

    cout << "Прості числа у масиві:" << endl;
    
    for (int i = 0; i < 25; ++i) {
        bool is_prime = true;
        if (array[i] <= 1) {
            is_prime = false;
        }
        else {
            for (int j = 2; j * j <= array[i]; ++j) {
                if (array[i] % j == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            cout << array[i] << " ";
        }
    }
    cout << endl;

    return 0;
}