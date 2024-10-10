#include <stdio.h>

float input(char type[]) {
    float var;
    printf("Monthly %s: ", type);
    scanf("%f", &var);
    return var;
}

void percent(char type[], float amount, float income) {
    if (income > 0) {
        int per = (amount / income) * 100;
        printf("Your %s is %d%% of your income.\n", type, per);
    } else {
        printf("Income must be greater than 0 to calculate percentage.\n");
    }
}

int main(void) {
    printf("This is a budget calculator.\n");
    
    float income = input("income");
    float rent = input("rent");
    float utilities = input("utilities");
    float groceries = input("groceries");
    float transportation = input("transportation");

    float savings = income * 0.2;
    float expenses = rent + utilities + groceries + transportation;
    float spend = income - expenses - savings;

    printf("You make $%.2f\n", income);
    printf("Your expenses are $%.2f\n", expenses);
    printf("Your savings are $%.2f\n", savings);
    printf("Your spending money is $%.2f\n", spend);

    percent("rent", rent, income);
    percent("utilities", utilities, income);
    percent("groceries", groceries, income);
    percent("transportation", transportation, income);
    percent("expenses", expenses, income);
    percent("savings", savings, income);
    percent("spending money", spend, income);

    return 0;
}