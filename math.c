#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(){
    int option;
    float V, I, R, result;
    printf ("Press 1 to calculate the voltage; press 2 to calculate the resistance; press 3 to calculate the electric current\n");//user will press any of the numbers given to calculate the answer they need
    scanf("%d", &option);
    if ( option ==  1){
        printf("What is the resistance in ohms?\n");//user inputs the resistance in ohms
        scanf("%f", &R);
        printf("What is the electric current in amps?\n");//user inputs the current in amps
        scanf("%f", &I);
        result = R * I;//the equation to calculate voltage 
        printf("The voltage is %0.2f volts\n", result);//gives the answer in decimal form and in the unit of volts
    }
    else if (option ==  2){
        printf("What is the voltage in volts?\n");//user inputs the voltage in volts
        scanf("%f", &V);
        printf("What is the electric current amps?\n");//user inputs the electric current in amps
        scanf("%f", &I);
        result = V / I;//equation to find the resistance
        printf("The resistance is %0.2f omhs\n", result);//gives the answer in decimal form and in the unit of ohms 
    }
    else if ( option ==  3){
        printf("What is the voltage in volts?\n");//user inputs the voltage in volts
        scanf("%f", &V);
        printf("What is the resistance in ohms?\n");//user inputs the resistance in ohms 
        scanf("%f", &R);
        result = V / R;//equation to calculate the electric current 
        printf("The electric current is %0.2f amps\n", result);//gives the answer in decimal form and in the unit of amps
    }
    return 0;
}

