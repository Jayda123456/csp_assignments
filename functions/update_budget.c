#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings,exspenses, spend;


void percent(char type[], float var){
int per = amount/income * 100;
scanf( "%.2f ,&var");
return var;


float input(char type[]){
printf("monthly%s:\n", type);
}


printf("your %s is %d%% of your income.\n", type, per );
}


int main(void){
float income, rent, utilities, groceries, transportation, savings,exspenses, spending;
float prent, putilities, pgroceries, ptransportation, psaving, pexspenses, pspending;
printf("this is a budget calulator.\n how much do you make a month?\n");
input("income");
scanf("%f", &income);
printf("how much do your utilities cost\n");
scanf("%f", &utilities);
printf("how much do your groceries cost\n");
scanf("%f", &groceries);
printf("how much do your transportation cost\n");
scanf("%f", &transportation);
printf("How much does your rent cost?");
scanf("%f", &rent);
exspenses = rent + groceries + transportation + utilities;
spend = income - exspenses - savings; printf(" you make %.2f\n",income);
printf("your exspenses are %.2f\n", exspenses);
printf("your savings are $%.2f\n", savings);
printf ("your spending is &%.2f\n", spend);


percent("rent", rent );
percent("utilities", utilities);
percent("groceries", groceries);
percent("transportation", transportation);
percent("exspenses", exspenses);
percent("savings", savings);
percent("spending", spending);

return 0;
}