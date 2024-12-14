#include <stdio.h>
#include <string.h>

struct Grocery
{
    char name[100];
    char category[100];
    float price;
    int quantity;
};

int main(){

    struct Grocery groceries[10] = {
        {"Milk", "Dairy", 2.5, 20},
        {"Cheese", "Dairy", 5.0, 10},
        {"Yogurt", "Dairy", 1.5, 50},
        {"Bread", "Bakery", 1.2, 100},
        {"Butter", "Dairy", 3.0, 15},
        {"Eggs", "Dairy", 2.0, 30},
        {"Apple", "Fruit", 1.5, 40},
        {"Orange Juice", "Beverage", 3.5, 25},
        {"Chicken", "Meat", 7.5, 10},
        {"Ice Cream", "Dairy", 4.5, 12}
    };

printf("Sut mahsulotlari\n");
printf("            Name|   Category|   Price| Quantity\n");
printf("------------------------------------------------\n");

for (int  i = 0; i < 10; i++)
{
    if (!strcmp(groceries[i].category, "Dairy"))
    {
        printf("%16s", groceries[i].name);
        printf("|%11s", groceries[i].category);
        printf("|%8.1f", groceries[i].price);
        printf("|%9d\n", groceries[i].quantity);
    }
    
}
}
