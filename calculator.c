#include <stdio.h>

//Prototypes the calculator functions
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    //Defines the testing variables
    double x= 5.0;
    double y= 10.0;

    //Tests the funcitons inside of main()
    double test1=add(x,y);
    double test2=subtract(x,y);
    double test3=multiply(x,y);
    double test4=divide(x,y);

    //Prints the values of the test functions
    printf("%lf\n", test1);
    printf("%lf\n", test2);
    printf("%lf\n", test3);
    printf("%lf\n", test4);
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

double divide(double a, double b){
   //Protects program against divide by zero errors
    if (b==0.0){
        printf("Error, division by zero is not allowed.\n");
        return 0.0; //Returns to default value
    }
    return a/b;
}