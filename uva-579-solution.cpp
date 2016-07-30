#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    double H, M, hm, mh, angel;

    while((scanf("%lf:%lf", &H, &M) == 2) && (H || M)){
        hm = (H + M / 60.0) * 30.0;
        mh = M * 6.0;
        angel = abs(hm - mh);

        if(angel > 180)
            angel = 360 - angel;

        printf("%0.3lf\n", angel);
    }

    return 0;
}
