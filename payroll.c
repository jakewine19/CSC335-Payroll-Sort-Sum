/*
File: Homework 1: Payroll
*/
// Arguments Entered in as Firstname, Lastname, Hours, and Wage
#include <stdio.h> 
#include <stdlib.h>


int main(int argc, char *argv[]){
    
    
        
        if(argc <= 4 || argc >= 6){
            printf("\n Incorrect Arguments Were Entered");
        }
            else{
                
                
                char *first = (argv[2]);
                char *last = (argv[1]);
                int mins = atoi(argv[3]);
                double rate = atof(argv[4]);
                
                double hours = (double)mins / 60;

                double totpay = (rate * hours);
                
                printf("\n  %s %s: %0.2f ", first, last, totpay);
                }
    
        
        return 0;
    
    
}
