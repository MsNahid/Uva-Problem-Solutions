#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

struct argentina{

    char name[30];
    int af;
    int df;
}p[12];

void swp(int i, int j);

void afdf();

void print();


int main(){

    int i, t ,tc;

    scanf("%d", &tc);

    for(t = 0; t < tc; t++){

        printf("Case %d:\n", t + 1);
        for(i = 1; i <= 10; i++){
            getchar();

            scanf("%s %d %d", p[i].name, &p[i].af, &p[i].df);
        }

        afdf();
        print();

    }

    return 0;

}
void swp(int i, int j){

    argentina temp;

    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
}

void afdf(){

    int i, j;

    for(i = 1; i < 10; i++){
        for(j = i + 1; j <= 10; j++){

            if(p[i].af < p[j].af) swp(i, j);
            else if(p[i].af == p[j].af){

                if(p[i].df > p[j].df) swp(i, j);
                else if(p[i].df == p[j].df){
                    if(strcmp(p[i].name, p[j].name) > 0) swp(i, j);
                }
            }

        }
    }

    for(i = 1; i < 5; i++){
        for(j = i + 1; j <= 5; j++){
            if(strcmp(p[i].name , p[j].name) > 0) swp(i, j);
        }
    }

    for(i = 6; i < 10; i++){
        for(j = i + 1; j <= 10; j++){
            if(strcmp(p[i].name, p[j].name) > 0) swp(i, j);
        }
    }

}

void print(){

    printf("(%s, %s, %s, %s, %s)\n",p[1].name,p[2].name,p[3].name,p[4].name,p[5].name);
    printf("(%s, %s, %s, %s, %s)\n",p[6].name,p[7].name,p[8].name,p[9].name,p[10].name);
}


