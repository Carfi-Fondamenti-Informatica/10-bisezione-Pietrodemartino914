#include <iostream>
using namespace std;
#include "math.h"

double funzione(double a){
    float risultato=(a*a*(cos(a))+1);
    return risultato ;
}


int main() {
    double a,b,e,x;
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

        if ((funzione(x))<0){
            b=x;
        }else {
            a=x;
        }


     e= sqrt(pow(((b-a)/2),2));
    }while(e>= 0.000001);

   // cout.precision(4);
    x*=1000;
    cout << x/1000;
   // cout << funzione(x);


    return 0;
}
