#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

struct rect{

    double x1;
    double x2;
    double y1;
    double y2;

}ara[14];

int main(){

    int i, j, point;
    double x, y;
    char ch;
    bool flag;

    i = 0;
    point = 0;


    while(scanf("%c", &ch) && ch != '*'){

        scanf("%lf%lf%lf%lf", &ara[i].x1, &ara[i].y1, &ara[i].x2, &ara[i].y2);
        getchar();
        i++;
    }

    //printf("i = %d\n", i);

    while(scanf("%lf%lf", &x, &y) == 2){

        if(x == 9999.9 && y == 9999.9) break;
        point++;
        flag = true;

        for(j = 0; j < i; j++){

            if(x > ara[j].x1 && x < ara[j].x2 && y < ara[j].y1 && y > ara[j].y2){

                printf("Point %d is contained in figure %d\n", point, j + 1);
                flag = false;

            }
        }

        if(flag) printf("Point %d is not contained in any figure\n", point);

    }
    return 0;
}
