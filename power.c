#include "myMath.h"

#define EX 2.71828182846

double Exp(int x) {
    if (x == 0) {
        return 1;
    }
    double res = 1;
    if (x > 0) {
        for (int i = 0; i < x; i++) {
            res *= EX;
        }
        return res;
    } else {
        for (int i = 0; i < (x * -1); i++) {
            res *= EX;
        }
        return 1 / res;
    }
}

double Pow(double x, int y) {
    if (y == 0)
        return 1;
    double res = 1;
    if (y > 0) {
        for (int i = 0; i < y; i++) {
            res *= x;
        }
        return res;
    } else {
        for (int i = 0; i < (y * -1); i++) {
            res *= x;
        }
        return 1 / res;
    }
}