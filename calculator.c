#include <stdio.h>

//Prototypes the calculator functions
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    //Defines the input variables
    double x, y;
    double z;
    char operation;

    printf("Please choose an operator:\n Addition: A\n Subtraction: S\n Multiplication: M\n Division: D\n");
    scanf("%c", &operation);
    printf("Please input a value for x:\n");
    scanf("%lf", &x);
    printf("Please input a value for y:\n");
    scanf("%lf", &y);

    if(operation == 'A'){
        z=add(x,y);
        printf("%lf plus %lf equals: %lf\n", x,y,z);
    }else if(operation == 'S'){
        z=subtract(x,y);
        printf("%lf minus %lf equals: %lf\n", x,y,z);
    }else if(operation=='M'){
        z=multiply(x,y);
        printf("%lf times %lf equals: %lf\n", x,y,z);
    }else if(operation=='D'){
        z=divide(x,y);
        printf("%lf divided by %lf equals: %lf\n", x,y,z);
    }


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