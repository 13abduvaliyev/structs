#include <stdio.h>

struct Phone
{
    char name[100];
    char brand[100];
    int price;
    char ram[100];
    char color[100];
};

int main(){

    struct Phone phones[10] = {
        {"Galaxy S20", "Samsung", 800, "8GB", "Black"},
        {"iPhone 12", "Apple", 1000, "6GB", "White"},
        {"Pixel 6", "Google", 600, "8GB", "Blue"},
        {"Redmi Note 10", "Xiaomi", 200, "4GB", "Gray"},
        {"OnePlus 9", "OnePlus", 700, "12GB", "Black"},
        {"Galaxy A51", "Samsung", 400, "6GB", "White"},
        {"iPhone SE", "Apple", 500, "3GB", "Red"},
        {"Moto G Power", "Motorola", 300, "4GB", "Blue"},
        {"Nokia 8.3", "Nokia", 650, "8GB", "Green"},
        {"Xperia 5 II", "Sony", 900, "8GB", "Black"}
    };

printf("Narxi $500 dan yuqori telefonlar\n");
printf("          Name|      Brand|  Price|   RAM| Color\n");
printf("-------------------------------------------------\n");

for (int i = 0; i < 10; i++)
{
    if (phones[i].price >= 500)
    {
        printf("%14s", phones[i].name);
        printf("|%11s", phones[i].brand);
        printf("|%7d", phones[i].price);
        printf("|%6s", phones[i].ram);
        printf("|%s\n", phones[i].color);
    
    }
}
return 0;

}
