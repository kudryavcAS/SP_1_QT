#include "number.h"

Number::Number():x(0), y(0){}
Number::Number(int _x):x(_x), y(0){}
Number::Number(int _x, int _y):x(_x), y(_y){}
Number::Number(const Number& obj):x(obj.x), y(obj.y){}

void Number::NotLargSumCub(QTextStream& out)const  {
    out<<"Числа, меньше Х, равные сумме кубов цифр:";
    for (long long i = 1; i < x; i++) {
        long long c;
        long long k = 0;
        c = i;
        for (; c != 0; c = c / 10) {

            k = k + (c % 10) * (c % 10) * (c % 10);
        }
        if (k == i) {

            out<<"\n"<<k;
        }
    }
    out.flush();

}
void Number::SearchPrimeSumQuad(QTextStream&  out) const {
    int i = x, g = y;

    int a, p1, p2, res = 0;
    a = (i * i) - (g * g);

    for (int c = 2; c * c <= a; c++) {

        if (a % c == 0) {

            p2 = a / c;
            p1 = c;
            for (int i = 2; i * i <= p1; i++) {
                if (p1 % i == 0) {
                    p1 = 0;
                    break;
                }

            }
            for (int i = 2; i * i <= p2; i++) {
                if (p2 % i == 0) {
                    p2 = 0;
                    break;
                }
            }
            if (p1 != 0 && p2 != 0) {
                out<< "X*X - Y*Y = " <<p1<< "*"<< p2 << ", где "<< p1<<" и "<<p2<<" - простые числа.";
                res = 1;


            }

        }
    }
    if (res == 0) out<<"Таких простых чисел нет";

    out.flush();

}
void Number::FirstNoNullFactRight(QTextStream& out) const
{
    out<<"Первая ненулевая цифра числа Х!:\n";
    int Answer = 1;
    int FiveCount = 0, TwoCount = 0;;
    for (int i = 2; i <= x; i++)
    {
        int Current = i;
        while (Current % 5 == 0)
        {
            FiveCount++;
            Current /= 5;
        }
        while (Current % 2 == 0)
        {
            TwoCount++;
            Current /= 2;
        }
        Answer = (Answer * (Current % 10)) % 10;
    }

    for (int i = 0; i < TwoCount - FiveCount; i++) Answer = (Answer * 2) % 10;
    out<< Answer;
    out.flush();
}

void Number::DublLarg(QTextStream& out) const{


    int a = x;
    int a1 = 0, max = 0;
    for (int i = a; i != 0; i /= 10) {
        if (i % 10 >= max) max = i % 10;
    }
    int x = 1;
    for (int i = a; i != 0; i /= 10) {

        if (i % 10 != max) {
            a1 = a1 + (i % 10) * x;
            x *= 10;

        }
        else {
            a1 = a1 + (i % 10) * x;
            x *= 10;
            a1 = a1 + (i % 10) * x;
            x *= 10;
        }

    }
    out<< a1;
}
