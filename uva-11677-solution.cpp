#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int h1, m1, h2, m2, time_asleep;
    int initial_time, ringed_time;

    while((scanf("%d%d%d%d", &h1, &m1, &h2, &m2) == 4) &&(h1 || m1 || h2 || m2)){
        initial_time = h1 * 60 + m1;
        ringed_time = h2 * 60 + m2;
        time_asleep = abs(ringed_time - initial_time);

        if(initial_time > ringed_time){
            time_asleep = 1440 - time_asleep;
        }else if(initial_time == ringed_time){
            time_asleep = 1440;
        }
        printf("%d\n", time_asleep);
    }

    return 0;
}

