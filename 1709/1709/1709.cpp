﻿// 1709.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d,e;
    cin >> a >> b >> c >> d;
    if (a > b && a > c && a > d)
    {
        cout << a;
    }
    else
        if(b > c && b > d)
    {
        cout << b;
    }
    else
        if(c > d)
    {
        cout << c;
    }
    else
    { cout << d; }

    //****************************************************************************************************************************************************************************

    cout << "\n";
    cout << "Введите номер месяца: ";
    int m;
    cin >> m;
    string mass[] = { "январь","февраль","март","апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь" };
    if (m > 12)
    {
        cout << "Такого месяца не существует";
    }
    else
    {
        cout << mass[m - 1];
    }
    //****************************************************************************************************************************************************************************
    cin >> a;
    if (a > 999)
    {
        d = (a - a % 10) / 10;
        c = (a - a % 10) / 10;
        b = (a - a % 10) / 10;
        e = a % 10;
        if (b == c || b == d || b == e)
        {
            cout << "Одинаковые цифры есть";
        }
        else
            if (c == d || c == e)
            {
                cout << "Одинаковые цифры есть";
            }
            else
                if (d == e)
                {
                    cout << "Одинаковые цифры есть";
                }
                else
                {
                    { cout << "Одинаковых цифр нет"; }
                }
    }
    else
        if (a > 99)
        {
            c = (a - a % 10) / 10;
            d = (a - a % 10) / 10;
            e = a % 10;
                if (c == d || c == e)
                {
                    cout << "Одинаковые цифры есть";
                }
                else
                    if (d == e)
                    {
                        cout << "Одинаковые цифры есть";
                    }
                    else
                    {
                        { cout << "Одинаковых цифр нет"; }
                    }
        }
     else
        if (a > 9)
        {
            
            d = (a - a % 10) / 10;
            e = a % 10;
                    if (d == e)
                    {
                        cout << "Одинаковые цифры есть";
                    }
                    else
                    {
                        cout << "Одинаковых цифр нет"; 
                    }
        }
        else
        {
            cout << "Одинаковых цифр нет";
        }

    //****************************************************************************************************************************************************************************
    cin >> a >> b >> c;
    d = (a + b + c) / 2;
    e = sqrt(d*(d-a)*(d-b)*(d-c));
    cout << e;
    
    
}
