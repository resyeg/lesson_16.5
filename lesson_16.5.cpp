﻿// lesson_16.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
//#include <QDate>

int main()
{
    const int N = 5;
    int massiv[N][N];
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            massiv[i][j] = i + j;
            std::cout << massiv[i][j];
        }
        std::cout << "\n";
    }
    int index = 7 % N;
    int sum=0;
    for (int j = 0; j < N; j++)
    {
        sum = sum + massiv[index][j];
    }
    std::cout << "Summa stroki po indeksu " << index << " ravno " << sum;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
