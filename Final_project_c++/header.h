
#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


struct Tank_TEU18
{
    float grauge;
    float tr_0;
    float mn_tr_0_5;
    float tr_1;
    float tr_1_5;
    float tr_2;
    float tr_2_5;
    float pl_tr_0_5;

    float fill;
    float lcg;
    float tcg;
    float vcg;
    float imom;
};

const int params = 13;
const int TABLE_SIZE = 17;
Tank_TEU18 table[TABLE_SIZE] = {
 { 0, 2.17, 1.77, 1.37, 1.01, 0.76, 0.63, 2.57, 9.3, 24.22, 0.00, 0.66, 15.8 },
 { 5, 3.51, 3.11, 2.70, 2.30, 1.91, 1.55, 3.91, 15.0, 24.21, 0.00, 0.69, 15.8 },
 { 10, 4.85, 4.44, 4.04, 3.64, 3.24, 2.84, 5.25, 20.7, 24.22, 0.00, 0.71, 15.8 },
 { 15, 6.18, 5.78, 5.38, 4.98, 4.58, 4.18, 6.59, 26.4, 24.22, 0.00, 0.74, 15.8 },
 { 20, 7.52, 7.12, 6.72, 6.32, 5.92, 5.52, 7.92, 32.1, 24.22, 0.00, 0.77, 15.8 },
 { 25, 8.86, 8.46, 8.06, 7.66, 7.26, 6.86, 9.26, 37.8, 24.22, 0.00, 0.79, 15.8 },
 { 30, 10.20, 9.80, 9.40, 9.00, 8.60, 8.19, 10.60, 43.5, 24.22, 0.00, 0.82, 15.8 },
 { 35, 11.54, 11.14, 10.74, 10.34, 9.93, 9.53, 11.94, 49.3, 24.22, 0.00, 0.84, 15.8 },
 { 40, 12.88, 12.48, 12.07, 11.67, 11.27, 10.87, 13.28, 55.0, 24.22, 0.00, 0.87, 15.8 },
 { 45, 14.22, 13.81, 13.41, 13.01, 12.61, 12.21, 14.62, 60.7, 24.22, 0.00, 0.89, 15.8 },
 { 50, 15.55, 15.15, 14.75, 14.35, 13.95, 13.55, 15.96, 66.4, 24.22, 0.00, 0.92, 15.8 },
 { 55, 16.89, 16.49, 16.09, 15.69, 15.29, 14.89, 17.29, 72.1, 24.22, 0.00, 0.94, 15.8 },
 { 60, 18.23, 17.83, 17.43, 17.03, 16.63, 16.23, 18.63, 77.8, 24.22, 0.00, 0.97, 15.8 },
 { 65, 19.57, 19.17, 18.77, 18.37, 17.97, 17.56, 19.97, 83.5, 24.22, 0.00, 0.99, 15.8 },
 { 70, 20.91, 20.51, 20.11, 19.71, 19.30, 18.90, 21.31, 89.3, 24.22, 0.00, 1.02, 15.8 },
 { 75, 22.25, 21.85, 21.45, 21.04, 20.64, 20.24, 22.65, 95.0, 24.22, 0.00, 1.04, 15.8 },
 { 80, 23.43, 23.17, 22.77, 22.38, 21.98, 21.57, 23.43, 100.0, 24.21, 0.00, 1.06, 0.0 }
};

void Interpolation(double x, double x1, double x2, double y1, double y2);

void Print_table()
{


    cout << fixed << setprecision(2);

    cout << setw(6) << "G"
        << setw(8) << "Tr0"
        << setw(10) << "Tr-0.5"
        << setw(8) << "Tr1"
        << setw(10) << "Tr1.5"
        << setw(8) << "Tr2"
        << setw(10) << "Tr2.5"
        << setw(10) << "Tr+0.5"
        << setw(8) << "Fill"
        << setw(8) << "LCG"
        << setw(8) << "TCG"
        << setw(8) << "VCG"
        << setw(8) << "IMOM"
        << endl;

    cout << setw(6) << "cm"
        << setw(8) << "m3"
        << setw(10) << "m3"
        << setw(8) << "m3"
        << setw(10) << "m3"
        << setw(8) << "m3"
        << setw(10) << "m3"
        << setw(10) << "m3"
        << setw(8) << "%"
        << setw(8) << "m"
        << setw(8) << "m"
        << setw(8) << "m"
        << setw(8) << "m4"
        << endl;

    for (int i = 0; i < 110; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        cout << setw(6) << table[i].grauge
            << setw(8) << table[i].tr_0
            << setw(10) << table[i].mn_tr_0_5
            << setw(8) << table[i].tr_1
            << setw(10) << table[i].tr_1_5
            << setw(8) << table[i].tr_2
            << setw(10) << table[i].tr_2_5
            << setw(10) << table[i].pl_tr_0_5
            << setw(8) << table[i].fill
            << setw(8) << table[i].lcg
            << setw(8) << table[i].tcg
            << setw(8) << table[i].vcg
            << setw(8) << table[i].imom
            << endl;
    }
}


void Show_menu()
{
    cout << endl;
    cout << "1. Зробити замiр" << endl;
    cout << "2. Показати список усiх танкiв" << endl;
    cout << "3. Показати таблицю вимiрiв танка" << endl;
    cout << "4. Розрахувати масу рiдини" << endl;
    cout << "5. Довiдка" << endl;
    cout << "0. Вихiд" << endl;
}


void Measurements()
{
    float gauge;
    cout << "Танк: TEU1800" << endl;
    cout << "Мiст: Oil" << endl;
    cout << "Максимальний замiр: 80 см" << endl;
    cout << "Введiть замiр (0-80 см): ";
    cin >> gauge;
    cout << endl;

    if (gauge < 0 || gauge > 80)
    {
        cout << "Помилка! Поза межами.";
        return;
    }


    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i].grauge == gauge)
        {
            cout << endl;
            cout << "Знайдене значення в таблицi: ";
            cout << "Fill " << table[i].fill << endl;
            cout << "LCG " << table[i].lcg << endl;
            cout << "TCG " << table[i].tcg << endl;
            cout << "VCG " << table[i].vcg << endl;
            cout << "IMOM " << table[i].imom << endl;
            return;
        }

    }



    for (int i = 0; i < TABLE_SIZE - 1; i++)
    {
        if (gauge >= table[i].grauge && gauge <= table[i + 1].grauge)
        {
            double x = gauge;
            double x1 = table[i].grauge;
            double x2 = table[i + 1].grauge;

            double y1;
            double  y2;

            cout << "Fill ";
            y1 = table[i].fill;
            y2 = table[i + 1].fill;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "LCG ";
            y1 = table[i].lcg;
            y2 = table[i + 1].lcg;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "TCG ";
            y1 = table[i].tcg;
            y2 = table[i + 1].tcg;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "VCG ";
            y1 = table[i].vcg;
            y2 = table[i + 1].vcg;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "IMOM ";
            y1 = table[i].imom;
            y2 = table[i + 1].imom;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            return;
        }
    }
}

void Interpolation(double x, double x1, double x2, double y1, double y2)
{
    double y = y1 + (x - x1) * (y2 - y1) / (x2 - x1);
    cout << y;
}


void Calculate_mass()
{
    float gauge;
    const double density = 0.90;

    cout << "Введiть замiр (від 0 до 80 см): ";
    cin >> gauge;

    if (gauge < 0 || gauge > 80)
    {
        cout << "Помилка!";
        return;
    }

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i].grauge == gauge)
        {
            double volume = table[i].tr_0;
            double mass = volume * density;

            cout << "Замiр: " << gauge << " см" << endl;

            cout << "Об'єм: " << volume << " м3" << endl;

            cout << "Маса: " << mass << " т" << endl;
            return;
        }
    }


    for (int i = 0; i < TABLE_SIZE - 1; i++)
    {
        if (gauge >= table[i].grauge && gauge <= table[i + 1].grauge)
        {
            double x = gauge;
            double x1 = table[i].grauge;
            double x2 = table[i + 1].grauge;

            double y1 = table[i].tr_0;
            double y2 = table[i + 1].tr_0;

            cout << "Замiр: " << gauge << " см" << endl;

            cout << "Об'єм: ";
            Interpolation(x, x1, x2, y1, y2);
            cout << " м3" << endl;

            double volume = y1 + (x - x1) * (y2 - y1) / (x2 - x1);
            double mass = volume * density;

            cout << "Маса: " << mass << " т" << endl;

            return;
        }
    }
}


void Heart() 
{ 
    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {
            float a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0.0f) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
} 
#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


struct Tank_TEU18
{
    float grauge;
    float tr_0;
    float mn_tr_0_5;
    float tr_1;
    float tr_1_5;
    float tr_2;
    float tr_2_5;
    float pl_tr_0_5;

    float fill;
    float lcg;
    float tcg;
    float vcg;
    float imom;
};

const int params = 13;
const int TABLE_SIZE = 17;
Tank_TEU18 table[TABLE_SIZE] = {
 { 0, 2.17, 1.77, 1.37, 1.01, 0.76, 0.63, 2.57, 9.3, 24.22, 0.00, 0.66, 15.8 },
 { 5, 3.51, 3.11, 2.70, 2.30, 1.91, 1.55, 3.91, 15.0, 24.21, 0.00, 0.69, 15.8 },
 { 10, 4.85, 4.44, 4.04, 3.64, 3.24, 2.84, 5.25, 20.7, 24.22, 0.00, 0.71, 15.8 },
 { 15, 6.18, 5.78, 5.38, 4.98, 4.58, 4.18, 6.59, 26.4, 24.22, 0.00, 0.74, 15.8 },
 { 20, 7.52, 7.12, 6.72, 6.32, 5.92, 5.52, 7.92, 32.1, 24.22, 0.00, 0.77, 15.8 },
 { 25, 8.86, 8.46, 8.06, 7.66, 7.26, 6.86, 9.26, 37.8, 24.22, 0.00, 0.79, 15.8 },
 { 30, 10.20, 9.80, 9.40, 9.00, 8.60, 8.19, 10.60, 43.5, 24.22, 0.00, 0.82, 15.8 },
 { 35, 11.54, 11.14, 10.74, 10.34, 9.93, 9.53, 11.94, 49.3, 24.22, 0.00, 0.84, 15.8 },
 { 40, 12.88, 12.48, 12.07, 11.67, 11.27, 10.87, 13.28, 55.0, 24.22, 0.00, 0.87, 15.8 },
 { 45, 14.22, 13.81, 13.41, 13.01, 12.61, 12.21, 14.62, 60.7, 24.22, 0.00, 0.89, 15.8 },
 { 50, 15.55, 15.15, 14.75, 14.35, 13.95, 13.55, 15.96, 66.4, 24.22, 0.00, 0.92, 15.8 },
 { 55, 16.89, 16.49, 16.09, 15.69, 15.29, 14.89, 17.29, 72.1, 24.22, 0.00, 0.94, 15.8 },
 { 60, 18.23, 17.83, 17.43, 17.03, 16.63, 16.23, 18.63, 77.8, 24.22, 0.00, 0.97, 15.8 },
 { 65, 19.57, 19.17, 18.77, 18.37, 17.97, 17.56, 19.97, 83.5, 24.22, 0.00, 0.99, 15.8 },
 { 70, 20.91, 20.51, 20.11, 19.71, 19.30, 18.90, 21.31, 89.3, 24.22, 0.00, 1.02, 15.8 },
 { 75, 22.25, 21.85, 21.45, 21.04, 20.64, 20.24, 22.65, 95.0, 24.22, 0.00, 1.04, 15.8 },
 { 80, 23.43, 23.17, 22.77, 22.38, 21.98, 21.57, 23.43, 100.0, 24.21, 0.00, 1.06, 0.0 }
};

void Interpolation(double x, double x1, double x2, double y1, double y2);

void Print_table()
{


    cout << fixed << setprecision(2);

    cout << setw(6) << "G"
        << setw(8) << "Tr0"
        << setw(10) << "Tr-0.5"
        << setw(8) << "Tr1"
        << setw(10) << "Tr1.5"
        << setw(8) << "Tr2"
        << setw(10) << "Tr2.5"
        << setw(10) << "Tr+0.5"
        << setw(8) << "Fill"
        << setw(8) << "LCG"
        << setw(8) << "TCG"
        << setw(8) << "VCG"
        << setw(8) << "IMOM"
        << endl;

    cout << setw(6) << "cm"
        << setw(8) << "m3"
        << setw(10) << "m3"
        << setw(8) << "m3"
        << setw(10) << "m3"
        << setw(8) << "m3"
        << setw(10) << "m3"
        << setw(10) << "m3"
        << setw(8) << "%"
        << setw(8) << "m"
        << setw(8) << "m"
        << setw(8) << "m"
        << setw(8) << "m4"
        << endl;

    for (int i = 0; i < 110; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        cout << setw(6) << table[i].grauge
            << setw(8) << table[i].tr_0
            << setw(10) << table[i].mn_tr_0_5
            << setw(8) << table[i].tr_1
            << setw(10) << table[i].tr_1_5
            << setw(8) << table[i].tr_2
            << setw(10) << table[i].tr_2_5
            << setw(10) << table[i].pl_tr_0_5
            << setw(8) << table[i].fill
            << setw(8) << table[i].lcg
            << setw(8) << table[i].tcg
            << setw(8) << table[i].vcg
            << setw(8) << table[i].imom
            << endl;
    }
}


void Show_menu()
{
    cout << endl;
    cout << "1. Зробити замiр" << endl;
    cout << "2. Показати список усiх танкiв" << endl;
    cout << "3. Показати таблицю вимiрiв танка" << endl;
    cout << "4. Розрахувати масу рiдини" << endl;
    cout << "5. Довiдка" << endl;
    cout << "0. Вихiд" << endl;
}


void Measurements()
{
    float gauge;
    cout << "Танк: TEU1800" << endl;
    cout << "Мiст: Oil" << endl;
    cout << "Максимальний замiр: 80 см" << endl;
    cout << "Введiть замiр (0-80 см): ";
    cin >> gauge;
    cout << endl;

    if (gauge < 0 || gauge > 80)
    {
        cout << "Помилка! Поза межами.";
        return;
    }


    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i].grauge == gauge)
        {
            cout << endl;
            cout << "Знайдене значення в таблицi: ";
            cout << "Fill " << table[i].fill << endl;
            cout << "LCG " << table[i].lcg << endl;
            cout << "TCG " << table[i].tcg << endl;
            cout << "VCG " << table[i].vcg << endl;
            cout << "IMOM " << table[i].imom << endl;
            return;
        }

    }



    for (int i = 0; i < TABLE_SIZE - 1; i++)
    {
        if (gauge >= table[i].grauge && gauge <= table[i + 1].grauge)
        {
            double x = gauge;
            double x1 = table[i].grauge;
            double x2 = table[i + 1].grauge;

            double y1;
            double  y2;

            cout << "Fill ";
            y1 = table[i].fill;
            y2 = table[i + 1].fill;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "LCG ";
            y1 = table[i].lcg;
            y2 = table[i + 1].lcg;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "TCG ";
            y1 = table[i].tcg;
            y2 = table[i + 1].tcg;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "VCG ";
            y1 = table[i].vcg;
            y2 = table[i + 1].vcg;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            cout << "IMOM ";
            y1 = table[i].imom;
            y2 = table[i + 1].imom;

            Interpolation(x, x1, x2, y1, y2);

            cout << endl;

            return;
        }
    }
}

void Interpolation(double x, double x1, double x2, double y1, double y2)
{
    double y = y1 + (x - x1) * (y2 - y1) / (x2 - x1);
    cout << y;
}
