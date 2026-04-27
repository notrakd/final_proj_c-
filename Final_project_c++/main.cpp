#include <iostream>
#include "header.h"
#include <clocale>
using namespace std;



struct Tank_TEU18
{
    float grauge;     // тут в м^3 всё
    float tr_0;
    float mn_tr_0_5;
    float tr_1;
    float tr_1_5;
    float tr_2;
    float tr_2_5;
    float pl_tr_0_5;

    float fill;     // тут в % всё
    float lcg;
    float tcg;
    float vcg;
    float imom;
};


int main()
{

    const int size = 17;
    Tank_TEU18 table[size];

    table[0] = {0, 2.17, 1.77, 1.37, 1.01, 0.76, 0.63, 2.57, 9.3, 24.22, 0.00, 0.66, 15.8};
    table[1] = {5, 3.51, 3.11, 2.70, 2.30, 1.91, 1.55, 3.91, 15.0, 24.21, 0.00, 0.69, 15.8};

    cout << "grauge: ";
    cout << "\n" << table[0].grauge << "\n" << table[1].grauge << endl;


    // setlocale(LC_ALL, ".UTF8");
    // cout << "Обери пункт: ";

    // int choice;
    // cout << "1. Выбрать танк и сделать замер" << endl;
    // cout << "2. Показать список всех танков" << endl;
    // cout << "3. Показать таблицу замеров танка" << endl;
    // cout << "4. Рассчитать массу жидкости" << endl;
    // cout << "5. Справка" << endl;
    // cout << "0. Выход" << endl;

    // cin >> choice;

    //     switch (choice) {
    //         case 1:
    //             cout << "Выполняю замер..." << endl;
    //             break;
    //         case 2:
    //             cout << "Список всех танков:" << endl;
    //             break;
    //         case 3:
    //             cout << "Таблица замеров:" << endl;
    //             break;
    //         case 4:
    //             cout << "Расчет массы..." << endl;
    //             break;
    //         case 5:
    //             cout << "Справка по программе..." << endl;
    //             break;
    //         case 0:
    //             cout << "Выход из программы. До свидания!" << endl;
    //             break;
    //         default:
    //             cout << "Ошибка! Выберите пункт от 0 до 5." << endl;
    //             break;
    //     }

    }
    

    
