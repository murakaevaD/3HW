#pragma once 
#include <cmath>
#include <iostream>
#define EPS 1e-10

/*
���������� ����������� ����� ImNumber - ����������� �����
����������� ���������
'+', '-', '/', '*', '+=', '-=', '*=', '/=', '!'(�����������), '()' - ������ ������ �����,
'=', '==', '<' (�� ������), '<<' - �������� ������ (�������� 2+i3)

����������� �������
const double phi() - ���������� ������������� ���� ����������� ����� ����������� �����
ImNumber(); - ������������� ������
ImNumber(double real, double im);


10 ������
����� ������ ���������� ������� pull reequest(������� ����� ����� ��������), ����� ������ �����.

���� ��������� ����� 20.10.23 ������������
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
