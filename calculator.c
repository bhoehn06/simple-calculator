#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);

int main(){
    double x= 5.0;
    double y= 10.0;
    double test1=add(x,y);
    double test2=subtract(x,y);
    printf("%lf\n", test1);
    printf("%lf\n", test2);
}

double add(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}