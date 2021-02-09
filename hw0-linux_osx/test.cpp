#include <cmath>
#include <iostream>

using namespace std;

const double PI = 3.141592653589793;

int main(int argc, char const *argv[])
{
    double r = 25.0 / 180 * PI;
    double x = 4 * cos(r) - 3 * sin(r);
    double y = 4 * sin(r) + 3 * cos(r);

    printf("x = %a\n", x);
    printf("y = %a\n", y);
    

    return 0;
}
