#include <stdio.h>
#include <cs50.h>
#include <math.h>

int v; 
int r; 
int i; 
int x; 
int main(void){
    printf ("what is the voltage?\n");
    scanf ("%d",&v);
    printf ("what is the resistance\n");
    scanf ("%d",&r);
    printf ("what is the current\n");
     scanf ("%d",&i);
    printf ("what is the unknown?\n");
     scanf ("%d",&x);
    if ( v ==  x){
          v = i * r;}
    if (r ==  x){
            r = v/i;}
    if ( i ==  x){
            i = v/r;}
}


