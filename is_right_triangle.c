#include <stdio.h>

float Absolute(float x) {
    return (x < 0) ? -x : x;
}

int IsApproximatelyEqual(float x, float y) {
    static float epsilon = 0.05;
    return Absolute (x - y) < epsilon;
}

int IsRightTriangle(float a, float b, float c) {
    if (IsApproximatelyEqual(a * a + b * b, c * c) || 
        IsApproximatelyEqual(a * a + c * c, b * b) ||
        IsApproximatelyEqual(b * b + c * c, a * a)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

  return 0;
}
