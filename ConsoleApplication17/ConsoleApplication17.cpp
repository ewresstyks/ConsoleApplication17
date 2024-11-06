#include<iostream>
#include <algorithm>
using namespace std; 

template <typename T>
void Sum(T a, T b)
{
    cout << a + b << endl;
}

template <typename T, typename X>
void Sum(T a, X b)
{
    cout << a + b << endl;
}

template<class T>
void Init(T mas[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        mas[i] = rand() % 100 * 1.1;
    }
}

template <typename T>void Print(T mass[], int size) {
    for (int i = 0; i < size; ++i)
    {
        cout << mass[i];
    }
    cout << endl;
}

template<typename T> void summa(T mass[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += mass[i];
    }
    cout << sum << endl;
}

template<typename T> void max(T mass[], int size) {
    T maxx = mass[0];
    for (int i = 1; i < size; ++i)
    {
        maxx = max(maxx, mass[i]);
    }
    cout << maxx << endl;
}

template <typename T, int j>void max2(T mass[][j], int size1, int size2) {
    T max = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int k = 0; k < size2; k++)
        {
            if (mass[i][k] > max) {
                max = mass[i][k];
            }
        }
    }
    cout << "Max 2 - " << max;
}

int main() {

    int mas[10];

    double mas2[5];

    char mas3[8];

    Init(mas, 10);
    Init(mas2, 5);
    Init(mas3, 8);

    Print(mas, 10);
    Print(mas2, 5);
    Print(mas3, 8);

    summa(mas, 10);
    summa(mas2, 5);
    summa(mas3, 8);


    int mass2[3][3] =
    { {3,3,3},
    {3,3,3 },
    {3,13,5 }
    };

    max2(mass2, 3, 3);
}