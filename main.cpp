/*
Поле left - вещественное число, левая граница диапазона. Поле right - вещественное
число, правая граница диапазона. Пара этих числе представляет полуоткрытый интервал
[left,right). Реализовать класс, в котором предусмотреть метод rangecheck() - проверку
заданного числа на принадлежность диапазону
*/
#include <iostream>
#include "diap.h"

using namespace std;

int main() {
    diapozon diapozon;
    double left,right;
    cout<<"Введите границу слева"<<endl;
    left=check_number();
    cout<<"Введите границу справа"<<endl;
    right=check_number();
    diapozon.set_diapozon(left,right);
    double number;
    cout<<"Введите число для сравнения"<<endl;
    number=check_number();
    if (diapozon.rangecheck(number)) {
        cout<< "Число "<< number << " входит в диапазон от " << diapozon.get_left() << " до " << diapozon.get_right()<<endl;
    } else {
        cout<< "Число "<< number << " не входит в диапазон от " << diapozon.get_left() << " до " << diapozon.get_right()<<endl;
    } 
    return 0;
}
