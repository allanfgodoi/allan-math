#include <iostream>
#include <vector>
using namespace std;

float power(float a, float b) {
    float result = a;
    for (int i = 1; i < b; i++)
        result = result * a;

    return result;
}

float mean(vector<float> v) {
    float counter = 0;
    for (int j = 0; j < v.size(); j++)
        counter += v[j];

    float mean = (counter / v.size());

    return mean;
}