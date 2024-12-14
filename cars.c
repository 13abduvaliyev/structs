#include <stdio.h>

struct Cars
{
    char model[100];
    char brand[100];
    int price;
    int year;
};

int main(){

    struct Cars cars[10] = {
        {"Model S", "Tesla", 79999, 2022},
        {"Civic", "Honda", 24000, 2023},
        {"Camry", "Toyota", 27000, 2023},
        {"Mustang", "Ford", 55000, 2022},
        {"911", "Porsche", 120000, 2021},
        {"Aventador", "Lamborghini", 393695, 2023},
        {"Corolla", "Toyota", 20000, 2021},
        {"Phantom", "Rolls Royce", 450000, 2023},
        {"Altima", "Nissan", 25000, 2022},
        {"CX-5", "Mazda", 28000, 2023}
    };

    printf("Eng qimmat mashina\n");
    printf(" Model|  Brand| Price  |Year\n");
    printf("-----------------------------------------\n");

    int max = cars[0].price;
    int maxIndex = 0;

    for (int i = 0; i < 10; i++)
    {
        if (max <= cars[i].price)
        {
            max = cars[i].price;
            maxIndex = 1;
        }
    }

    printf("%6s", cars[maxIndex].model);
    printf("|%7s", cars[maxIndex].brand);
    printf("|%8d", cars[maxIndex].price);
    printf("|%d", cars[maxIndex].year);

}
