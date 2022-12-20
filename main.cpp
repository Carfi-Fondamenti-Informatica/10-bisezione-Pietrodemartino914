
int main() {
    float a,b,e,x;
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
    }while(e>=(pow(M_E,-6)));

    //cout.precision(4);
    cout << x;
   // cout << funzione(x);


    return 0;
}
