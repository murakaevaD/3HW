#include "Header.h"
#include <math.h>
bool Complex::operator=(const Complex& num)const {
    return fabs(real - num.real) < EPS && fabs(im - num.im) < EPS;
}


    Complex Complex::operator+(const Complex& other) const
    {
        return Complex(real + other.real, im + other.im);
    }

    Complex Complex::operator-(const Complex& other) const
    {
        return Complex(real - other.real, im - other.im);
    }

    Complex Complex:: operator/(const Complex& c) const
    {
        Complex result = *this;
        double denominator = c.real * c.real + c.im * c.im;
        result.real = (real * c.real + im * c.im);
        result.im = (im * c.real - real * c.im);
        return result;
    }

    Complex Complex::operator*(const Complex& c) const
    {
        return Complex(real * c.real - im * c.im,
            real * c.im + im * c.real);
    }

    Complex& Complex::operator+=(const Complex& rhs)
    {
        real += rhs.real;
        im += rhs.im;
        return *this;
    }

    Complex& Complex::operator-=(const Complex& rhs)
    {
        real -= rhs.real;
        im -= rhs.im;
        return *this;
    }

    Complex& Complex::operator*=(const Complex& rhs)
    {
        double temp_real = real;
        real = real * rhs.real - im * rhs.im;
        im = temp_real * rhs.im + im * rhs.real;
        return *this;
    }

    Complex& Complex::operator/=(const Complex& rhs)
    {
        double denominator = pow(rhs.real, 2) + pow(rhs.im, 2);
        double temp_real = real;
        real = (real * rhs.real + im * rhs.im);
        im = (im * rhs.real - temp_real * rhs.im);
            return *this;
    }

    Complex Complex::operator!() const
    {
        return Complex(real, -im);
    }

    double Complex::operator()() const
    {
        return sqrt(pow(real, 2) + pow(im, 2));
    }

    Complex& Complex:: operator=(const Complex& rhs)
    {
        if (this == &rhs) {
            return *this;
        }
        real = rhs.real;
        im = rhs.im;
        return *this;
    }


    std::ostream& operator<<(std::ostream& os, const Complex& c)
    {
        os << c.real;
        if (c.im >= 0) {
            os << "+";
        }
        os << c.im << "i";
        return os;
    }

    //bool Complex:: operator<(const Complex& other) const
    //{
    //    return (abs(*this) < abs(other));
    //}




    const double Complex:: phi()
    {
        if (real != 0.0 || im != 0.0) {
            return std::atan2(im, real);
        }
        return 0.0;
    }
