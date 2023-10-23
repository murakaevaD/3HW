#pragma once 
#include <cmath>
#include <iostream>
#define EPS 1e-10

/*
Необходимо реализовать класс ImNumber - комплексное число
Перегрузить операторы
'+', '-', '/', '*', '+=', '-=', '*=', '/=', '!'(сопряженное), '()' - взятие модуля числа,
'=', '==', '<' (по модулю), '<<' - оператор вывода (например 2+i3)

Реализовать функцию
const double phi() - наименьший положительный угол покательной формы комплекного числа
ImNumber(); - инициализация нулями
ImNumber(double real, double im);


10 баллов
Перед сдачей необходимо создать pull reequest(назвать ветку своей фамилией), чтобы пройти тесты.

Дата последней сдачи 20.10.23 включительно
*/


class Complex {
    double real;
    double im;
public:
    Complex(double real = 0.0, double im = 0.0) : real(real), im(im) {}
    bool operator=(const Complex& num)const;
    bool operator<(const Complex& other) const;
    bool operator==(const Complex& rhs) const;
    Complex& operator=(const Complex& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    const double phi();
    double operator()() const;
    Complex operator!() const;
    Complex& operator/=(const Complex& rhs);
    Complex& operator*=(const Complex& rhs);
    Complex& operator-=(const Complex& rhs);
    Complex& operator+=(const Complex& rhs);
    Complex operator/(const Complex& c) const;
    Complex operator*(const Complex& c) const;
    Complex operator-(const Complex& other) const;
    Complex operator+(const Complex& other) const;

};
