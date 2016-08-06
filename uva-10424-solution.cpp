#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 27
char str[sz + 5], str2[sz + 5];

int main(){

    int i, j, n, n2, flag;
    int str_sum, str2_sum;
    double lv_cal;

    while(gets(str)){
        gets(str2);

        n = n2 = flag = 0;
        for(i = 0; str[i]; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                n += ((str[i] - '0') - 48);
            }else if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;
                n += ((str[i] - '0') - 48);
            }
        }
        for(i = 0; str2[i]; i++){
            if(str2[i] >= 'a' && str2[i] <= 'z'){
                n2 += ((str2[i] - '0') - 48);
            }else if(str2[i] >= 'A' && str2[i] <= 'Z'){
                str2[i] = str2[i] + 32;
                n2 += ((str2[i] - '0') - 48);
            }
        }
        //printf("n = %d n2 = %d\n", n, n2);
        if(n < 10){
            str_sum = n;
        }else{
            while(n > 9){
                str_sum = 0;
                while(n > 0){
                     str_sum =  str_sum  + (n % 10);
                    n /= 10;
                }
                n =  str_sum ;
            }
        }

        if(n2 < 10){
            str2_sum = n2;
        }else{
            while(n2 > 9){
                str2_sum = 0;
                while(n2 > 0){
                     str2_sum =  str2_sum  + (n2 % 10);
                    n2 /= 10;
                }
                n2 =  str2_sum ;
            }
        }
        //printf("str = %d str2 = %d\n", str_sum, str2_sum);
        /*if(str_sum < str2_sum){
            lv_cal = ((str_sum * 1.0) /(str2_sum * 1.0)) * 100.0;
            printf("%0.2lf %%\n", lv_cal);
        }else if(str_sum > str2_sum){
            lv_cal = ((str2_sum * 1.0) /(str_sum * 1.0)) * 100.0;
            printf("%0.2lf %%\n", lv_cal);
        }else{
            lv_cal = ((str2_sum * 1.0) /(str_sum * 1.0)) * 100.0;
            printf("%0.2lf %%\n", lv_cal);
        }
        */
        if(str_sum < str2_sum){
            lv_cal = ((str_sum * 1.0) /(str2_sum * 1.0)) * 100.0;
            flag = 1;
        }

        if(str_sum > str2_sum){
            lv_cal = ((str2_sum * 1.0) /(str_sum * 1.0)) * 100.0;
            flag = 1;
        }
        if(!flag){
            lv_cal = ((str2_sum * 1.0) /(str_sum * 1.0)) * 100.0;
        }
         printf("%0.2lf %%\n", lv_cal);
    }

    return 0;
}
