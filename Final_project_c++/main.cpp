#include <iostream>
//#include "test_hed_funk.h"
#include "header.h"
#include <iomanip>
using namespace std;


int main()
{

    setlocale(LC_ALL, "");
    cout << "Обери пункт: " << endl;

    int choice = -1;
    Show_menu();

    while (choice != 0)
    {
        cin >> choice;
        switch (choice) {
        case 1:
            Measurements();
            Show_menu();
            break;
        case 2:
            cout << "Список усiх танкiв:" << endl;
            cout << "Танк 1:" << "\n";
            cout << "Tank_TEU1800";
            cout << endl;
            Show_menu();
            break;
        case 3:
            cout << "Таблиця вимiрiв:" << endl;
            Print_table();
            cout << endl;
            Show_menu();
            break;
        case 4:
            cout << "Розрахунок маси..." << endl;
            break;
        case 5:
            cout << "ДОВIДКА ЗА ПРОГРАМОЮ" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Програма призначена для роботи з таблицями вимiрiв" << endl;
            cout << "танка TEU1800 (масловий танк судна)." << endl;
            cout << endl;
            cout << "ПУНКТИ МЕНЮ:" << endl;
            cout << endl;
            cout << "1. Зробити замiр" << endl;
            cout << "   Введiть замiр щупа (0-80 см). Програма знайде" << endl;
            cout << "   або iнтерполює значення Fill, LCG, TCG, VCG, IMOM." << endl;
            cout << endl;
            cout << "2. Показати список усiх танкiв" << endl;
            cout << "   Виводить перелiк доступних танкiв у програмi." << endl;
            cout << endl;
            cout << "3. Показати таблицю вимiрiв танка" << endl;
            cout << "   Виводить повну калiбрувальну таблицю танка TEU1800" << endl;
            cout << "   з усiма параметрами для кожного значення щупа." << endl;
            cout << endl;
            cout << "4. Розрахувати масу рiдини" << endl;
            cout << "   (у розробцi)" << endl;
            cout << endl;
            cout << "0. Вихiд iз програми" << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "ПАРАМЕТРИ ТАБЛИЦI:" << endl;
            cout << "  G       - замiр щупа (см)" << endl;
            cout << "  Tr0     - об'єм при trim 0 (м3)" << endl;
            cout << "  Tr+-0.5 - об'єм при вiдхиленнi диференту +-0.5 м (м3)" << endl;
            cout << "  Tr1..2.5- об'єм при диферентi 1-2.5 м (м3)" << endl;
            cout << "  Fill    - заповненiсть танка (%)" << endl;
            cout << "  LCG     - поздовжнiй центр ваги (м)" << endl;
            cout << "  TCG     - поперечний центр ваги (м)" << endl;
            cout << "  VCG     - вертикальний центр ваги (м)" << endl;
            cout << "  IMOM    - момент iнерцii вiльноii поверхнi (м4)" << endl;
            cout << endl;
            cout << "Дiапазон замiрiв : 0 - 80 см" << endl;
            cout << "Крок таблицi     : 5 см" << endl;
            cout << "Метод            : лiнiйна iнтерполяцiя між вузлами таблицi" << endl;
            cout << "-----------------------------------------------------" << endl;
            Show_menu();
            break;
        case 0:
            cout << "Вихiд iз програми" << endl;
            break;
        default:
            cout << "Помилка! Виберiть вд 0 до 5." << endl;
            break;
        }
    }

} 
