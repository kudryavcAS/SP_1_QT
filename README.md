Данный проект представляет собой реализацию класса чисел для решения 4-х задач целочисленной арифметики
на Qt, используя Qt Gui. 
Методы класса:
    void NotLargSumCub(QTextStream& out, int )const; - поиск таких чисел не больших данного (int), что они равны сумме кубов своих цифр
    void SearchPrimeSumQuad(QTextStream&  out, int, int) const; - поиск таких простых чисел а и b, что X*X-Y*Y = a*b, где X и Y - параметры функции
    void FirstNoNullFactRight(QTextStream& out, int) const; - поиск первой ненулевой цифры int! 
    void DublLarg(QTextStream& out, int) const; - возвращает число int с дублированными максимальными цифрами
