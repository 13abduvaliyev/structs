
#include <stdio.h>
#include <string.h>

struct Company
{
    char name[100];
    char location[100];
};

struct Product
{
    char name[100];
    float price;
    int quantity;
    struct Company Product;
};


int main(){

    int n;
    printf("Kampaniyalar sonini kiriting: ");
    scanf("%d", &n);

    struct Company company[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d-kampaniyaning nomini kiritng: ", i + 1);
        scanf("%s", company[i].name);

        printf("%d-kampaniyaning manzilini kiriting: ", i + 1);
        scanf("%s", company[i].location);
    }
    
    int n2;
    printf("Mahsulotlar sonini kiriting: ");
    scanf("%d", &n2);

    struct Product products[n2];
    for (int i = 0; i < n2; i++)
    {
        printf("%d-mahsulot nomini kiritng: ", i + 1 );
        scanf("%s", products[i].name);

        printf("%d-mahsulot narxini kiriting: ", i + 1);
        scanf("%f", &products[i].price);

        printf("%d-mahsulotning miqdorini kiriting: ", i + 1);
        scanf("%d", &products[i].quantity);
    }
    printf("AQShda ishlab chiqarilgan mahsulotlar:\n");
    printf("     Name     | Price  | Quantity | Company Name | Company Location\n");
    for (int i = 1; i < n2; i++)
    {
        if (!strcmp(company[i].location, "USA"))
        {
            printf("%14s", products[i].name);
            printf("| %7.1f", products[i].price);
            printf("| %11d", products[i].quantity);
            printf("| %15s", company[i].name);
            printf("| %s", company[i].location);
        }
    }

    return 0;
}