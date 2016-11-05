#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

string reve(string a){

    string st = "";
    int i, j;

    for(i = 0, j = a.length() - 1; i < a.length(); i++, j--){

        st += a[j];
    }

    return st;
}

string summing(string a, string b){

    int i, j, k, temp, carry;
    int len, len2, x, y, add;
    string c = "", e;
    //c = "";

    if(a.length() < b.length()){

        e = a;
        a = b;
        b = e;
    }
    carry = 0;

    for(i=0;i<a.length();i++){

    if(i < b.length()){

            x=a[i]-'0';
            y=b[i]-'0';
            temp = x +y + carry;
            add = temp % 10;
            c += add +'0';
            //temp=0;
            //if(sum>9) temp=1;
            carry = temp / 10;
            if(i == a.length()-1 && carry == 1) c +='1';



        }else {

            x = a[i] - '0';
            temp = x + carry;
            add = temp % 10;
            c += add + '0';
            carry = temp / 10;

            if(i == a.length() - 1 && carry == 1) c += '1';


        }

    }

    return c;
}


int main(){

    string sum = "0", st, s;
    //sum = "0";

    while(cin >> st){

        if(st == "0") break;
        s = reve(st);
        sum = summing(s, sum);
        //cout << s <<'\n';

    }

    cout << reve(sum) << endl;

    return 0;
}
