#ifndef NUMBER_H
#define NUMBER_H
#include <QTextStream>

class Number
{
private:
    int x, y;
public:
    Number();
    Number(int _x);
    Number(int _x, int _y);
    Number(const Number& obj);

    void NotLargSumCub(QTextStream& out)const;
    void SearchPrimeSumQuad(QTextStream&  out) const;
    void FirstNoNullFactRight(QTextStream& out) const;
    void DublLarg(QTextStream& out) const;

};
#endif // NUMBER_H
