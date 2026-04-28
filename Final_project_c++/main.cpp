#include <iostream>
#include "header.h"
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, ".UTF8");
    cout << "Обери пункт: ";

    int choice;
    cout << "1. Выбрать танк и сделать замер" << endl;
    cout << "2. Показать список всех танков" << endl;
    cout << "3. Показать таблицу замеров танка" << endl;
    cout << "4. Рассчитать массу жидкости" << endl;
    cout << "5. Справка" << endl;
    cout << "0. Выход" << endl;

    while (choice != 0)
    {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Выполняю замер..." << endl;
                break;
            case 2:
                cout << "Список всех танков:" << endl;
                break;
            case 3:
                cout << "Таблица замеров:" << endl;
                Print_table();
                cout << endl;
                cout << "1. Выбрать танк и сделать замер" << endl;
                cout << "2. Показать список всех танков" << endl;
                cout << "3. Показать таблицу замеров танка" << endl;
                cout << "4. Рассчитать массу жидкости" << endl;
                cout << "5. Справка" << endl;
                cout << "0. Выход" << endl;
                break;
            case 4:
                cout << "Расчет массы..." << endl;
                break;
            case 5:
                cout << "Справка по программе..." << endl;
                break;
            case 0:
                cout << "Выход из программы" << endl;
                break;
            default:
                cout << "Ошибка! Выберите пункт от 0 до 5." << endl;
                break;
        }
    }

    }
    

    
