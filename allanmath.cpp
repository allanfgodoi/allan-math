#include <iostream>
using namespace std;

float power(float a, float b) {
    float result = a;

    for (int i = 1; i < b; i++)
        result = result * a;

    return result;
}