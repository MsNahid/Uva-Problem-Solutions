#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define ZERO 0.0

int main(){

    double h, u, d, f;
    double j, k, l;
    double in_h, dc, hfc, hfs;
    int day, i;
    while((scanf("%lf%lf%lf%lf", &h, &u, &d, &f) == 4) && h){

        day = 1;
        f = (u * f) / 100.0;
        //printf("%lf\n", f);

        for(i = 1; ; i++){

            if(day == 1){

                in_h = 0.0;
                dc = in_h + u;
                hfc = in_h + dc;
                hfs = hfc - d;

                day++;
                //printf("%lf %lf %lf %lf\n", in_h, dc, hfc, hfs);
                if(hfc > h){

                    puts("success on day 1");
                    break;

                }else if(hfs < ZERO){

                    puts("failure on day 1");
                    break;

                }

            }else{

                in_h = hfs;
                if(dc > ZERO){

                    dc = dc - f;

                    if(dc < ZERO) dc = ZERO;
                }
                hfc = in_h + dc;
                hfs = hfc - d;

                //printf("%lf %lf %lf %lf\n", in_h, dc, hfc, hfs);

                if(hfc > h){

                    printf("success on day %d\n",i);
                    break;

                }else if(hfs < ZERO){

                   //if(dc == zero) printf("failure on day %d\n",i + 1);
                    printf("failure on day %d\n",i);

                   break;

                }
            }

        }

    }

    return 0;
}
