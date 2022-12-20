#include <iostream>
using namespace std;
#include "math.h"

float funzione(float a){
    float risultato=(a*a*(cos(a))+1);
    return risultato ;
}


int main() {
    float a,b,e=0,x=0;
    do {
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    }while ((funzione(a)* funzione(b))>=0);
    if (funzione(a)< funzione(b)){
        b=a+b;
        a=b-a;
        b=b-a;
    }
    do {
        x=(a+b)/2;

        if (funzione(x)==0){
            break;
        }

        if ((funzione(x)>0)){
            a=x;
        }else if (funzione(x)<0){
            b=x;
        }


     e=(b-a)/2;
        e=sqrt(pow(e,2));
    }while(e>=(1/ pow(M_E,6)));

    cout.precision(4);
    cout << x;
   // cout << funzione(x);


    return 0;
}
