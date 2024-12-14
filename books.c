#include <stdio.h>

struct Author
{
    char name[100];
    int birth_year;
};

struct Book
{
    char title[100];
    float price;
    int published_year;
    struct Author authors;
};


int main(){

    struct Author author1 = {"Alex Black", 1990};
    struct Author author2 = {"Mary White", 1985};
    struct Author author3 = {"John Green", 1975};

    struct Book books[10] = {
        {"Book A", 25.0, 2021, author1},
        {"Book B", 30.0, 2023, author2},
        {"Book C", 15.0, 1997, author3},
        {"Book D", 20.0, 1880, author2},
        {"Book E", 35.0, 1994, author2},
        {"Book F", 40.0, 1995, author1},
        {"Book G", 10.0, 1790, author2},
        {"Book H", 50.0, 1890, author1},
        {"Book I", 45.0, 1990, author2},
        {"Book J", 60.0, 1890, author3}
        };

    printf("XXI asr kitoblari:\n     Title| Price| Published Year| Author Name| Author Birth Year\n");
    printf("------------------------------------------------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        if (books[i].published_year >=2000)
        {
            printf("%10s", books[i].title);
            printf("| %5.1f", books[i].price);
            printf("| %14d", books[i].published_year);
            printf("| %11s", books[i].authors.name);
            printf("| %d\n", books[i].authors.birth_year);
        }
    }

    return 0;
}