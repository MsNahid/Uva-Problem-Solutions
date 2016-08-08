#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

double PI = 2 * acos(0.0);

int main(){

    double r, area, angle;
    int n;

    while(scanf("%lf%d", &r, &n) == 2){

        angle = ((2 * PI * 1.0) / (n * 1.0));
        area = (0.5 * n * 1.0 * r * r) * sin(angle);

        printf("%0.3lf\n", area);
    }

    return 0;
}
