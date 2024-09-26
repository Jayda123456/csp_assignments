#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, exspenses, spend;

void input(char type[], float var){
    printf("monthly %s:\n", type);
    scanf( "%f" , &var");
    return var;
}

void percent(char type[], int amount){
    int per = amount/income *100;


printf("your %s is %d%% of your income.\n", type, per);
}


int main(void){
printf("this is a budget calculator. \n");
income = input("income", income);
rent = input("rent", rent);
utilities = input("utilities", utilities);
transportation = input("transportation", transportation);
savings = income * .2;
exspenses = rent + utilities + groceries + transportation;
spend = income - exspenses - savings;
printf("you make $%.2f\n" , income);
printf("your exspenses are $%.2f\n" , exspenses);
printf("your savings are $%.2f\n" , savings);
printf("your spending money is $%.2f\n", spend);


percent("rent", rent );
percent("utilities", utilities);
percent("groceries", groceries);
percent("transportation", transportation);
percent("exspenses", exspenses);
percent("savings", savings);
percent("spending money", spend);

return 0;
}