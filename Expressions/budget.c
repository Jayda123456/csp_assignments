#include <stdio.h>

int main(void){
   float income, rent, utilities, groceries, transportation, savings,exspenses spend;
   float prent, putilities, pgroceries, ptransportation, psaving, pexspenses, pspend ;
   printf("this is a budget calulator.\n how much do you make a month?\n");
    scanf("%f", &income);
    printf("how much do your utilities cost\n");
    scanf("%f", &utilities)
    printf("how much do your groceries cost\n");
    scanf("%f", &groceries)
    printf("how much do your transportation cost\n");
    scanf("%f", &transportation);
     saveings = * .2;
    exspenses = rent + groceries + transportation;
     spend = income - exspenses - savings;
    printff(" you make %.2f\n",income);
    printf("your exspenses are %,2f\n", exspenses);
    printf("your savings are $%.2f\n", savings);
    printf ("your spending is &%.2f\n", spend");
    prent = rent/income * 100;
    pgroceries = groceries/ income *100;
    ptransportation = transportation/income *100;
    psavings = savings/income *100;
    pexspenses = exspenses/income *100;
    printf("your rent is %d%% of your income.\n"), (int) prent);
    printf("your utilities is %d%% of your income.\n"), (int) putilities);
    printf("your transportation is %d%% of your income.\n"), (int) transportation);
    printf("your savings is %d%% of your income.\n"), (int) savings);
    printf("your exspenses is %d%% of your income.\n"), (int) exspenses);
}