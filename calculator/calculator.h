//
// Created by moreal-gram on 2018-09-23.
//

#ifndef GTESTTEST_CALCULATOR_H
#define GTESTTEST_CALCULATOR_H


class Calculator {
    int a, b;

public:
    Calculator(int a, int b)
            : a(a), b(b) {

    }

    int Sum();
    int Sub();
    int Mul();
    int Div();
    int Remain();
};


#endif //GTESTTEST_CALCULATOR_H
