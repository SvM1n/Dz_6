#include <iostream>
#include "Peregruzka.h"
int main()
{
    setlocale(LC_ALL, "rus");
    char ans;
    do {
        enum Mn { Z, Q, R, I };
        int ans1;
        std::cout << "\nС каким множеством чисел вы хотите работать?"<<std::endl<<"\n(Целые - 0, Рациональные - 1, Действительные - 2, Комплексные - 3) : ";
        std::cin >> ans1;
        if (ans1 == Z) {
            int a, b;
            char ch;
            std::cout << "\nВведите два числа из множества целых, а также операцию(+,-,*,/): ";
            std::cin >> a >> b >> ch;
            Calculator(a, b, ch);
        }

        else if (ans1 == Q) {
            float a, b;
            char ch;
            std::cout << "\nВведите два числа из множества рациональных, а также операцию(+,-,*,/): ";
            std::cin >> a >> b >> ch;
            Calculator(a, b, ch);
        }

        else if (ans1 == R) {
            double a, b;
            char ch;
            std::cout << "\nВведите два числа из множества действительных, а также операцию(+,-,*,/): ";
            std::cin >> a >> b >> ch;
            Calculator(a, b, ch);
        }

        else{
            Complex a;
            Complex b;
            char ch;
            std::cout << "\nВведите два числа из множества комплексных, а также операцию(+,-,*,/): ";
            std::cin >> a.re >> a.im>>b.re >>b.im>> ch;
            Calculator(a, b, ch);
        }
        std::cout << "\nХотите прожолжить работу? (y/n): ";
        std::cin >> ans;
    }while (ans!='n');

}