#include <stdio.h>

//Prototypes the calculator functions
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);

int main(){
    //Defines the testing variables
    double x= 5.0;
    double y= 10.0;

    //Tests the funcitons inside of main()
    double test1=add(x,y);
    double test2=subtract(x,y);
    double test3=multiply(x,y);
    printf("%lf\n", test1);
    printf("%lf\n", test2);
    printf("%lf",test3);
}

//Defines the calculator functions
double add(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}

double multiply(double a, double b){
    return a*b;
}