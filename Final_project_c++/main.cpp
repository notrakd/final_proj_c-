#include <iostream>
//#include "test_hed_funk.h"
#include "header.h"
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, ".UTF8");
    cout << "Обери пункт: " << endl;

    int choice = -1;
    Show_menu();

    while (choice != 0)
    {
        cin >> choice;
        switch (choice) {
            case 1:
                // Measurements();
                // Show_menu();
                break;
            case 2:
                cout << "Список усіх танків:" << endl;
                cout << "Танк 1:" << "\n";
                cout << "Tank_TEU1800";
                cout << endl;
                Show_menu();
                break;
            case 3:
                cout << "Таблиця вимірів:" << endl;
                Print_table();
                cout << endl;
                Show_menu();
                break;
            case 4:
                cout << "Розрахунок маси..." << endl;
                break;
            case 5:
                cout << "Справка за програмою..." << endl;
                break;
            case 0:
                cout << "Вихід із програми" << endl;
                break;
            default:
                cout << "Помилка! Виберіть від 0 до 5." << endl;
                break;
        }
    }

    }
    

    
