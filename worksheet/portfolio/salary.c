
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Euan Pettit
 * ID: 201948398
 */

 int main( void ) {

   // define and initialise variables for the problem data 
   float salary = 36250;
   
   float ni_rate = 0.08; 
   
   float tax_rate = 0.15; 
   
    // calculate the deductions and final take-home salary
   float ni_contribution = salary * ni_rate;
   float take_home_salary = salary - ni_contribution;
   float taxxed_salary = take_home_salary - 12500;
   float tax_contribution = taxxed_salary * tax_rate;

   take_home_salary = take_home_salary - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
 }