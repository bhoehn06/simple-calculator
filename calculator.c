#include <stdio.h>

double add(double a, double b);

int main(){
    double x= 5.0;
    double y= 5.0;
    double test1=add(x,y);
    printf("%lf\n", test1);
}

double add(double a, double b){
    return a+b;
}