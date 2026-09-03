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

    //Prompts the user to select an operator from the options available
    printf("Please choose an operator:\n Addition: A\n Subtraction: S\n Multiplication: M\n Division: D\n");
    
    //Checks to see if the value entered by the user is a character, and terminates the program if it isn't
    if (scanf("%c", &operation)!=1){
        printf("Invalid input, terminating program.\n");
        return 1;
    }

    //Checks to see if the user entered a valid character, and terminates the program if they entered an invalid character
    if((operation!='A')&&(operation!='S')&&(operation!='M')&&(operation!='D')){
        printf("Invalid input, terminating program.\n");
        return 1;
    }

    printf("Please input a value for x:\n");//Prompts the user to input a value for x
    if(scanf("%lf", &x)!=1){ //Checks if the value for x is of type double, and terminates the program otherwise.
        printf("Invalid input, terminating program.\n");
        return 1;
    }

    printf("Please input a value for y:\n");    //Prompts the user to input a value for y
    if(scanf("%lf", &y)!=1){//Checks if the value for y is of type double and terminates the program otherwise.
        printf("Invalid input, terminating program.\n");
        return 1;
    }

    //Determines which operation the user wanted, then executes it and outputs it to the user
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
         if (y==0.0){ //Checks if the user gave a value of zero for y, and ends the program if so.
        printf("Error, division by zero is not allowed.\n");
        return 0.0; 
    }
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
    return a/b;
}