
#include <stdio.h>
#include <string.h>

struct Genre
{
    char name[100];
    char description[100];
};

struct Movie
{
    char name[100];
    float rating;
    int release_year;
    struct Genre Movie;
};


int main(){

    int n;
    printf("Janrlar sonini kiriting: ");
    scanf("%d", &n);

    struct Genre genre[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d-janrning nomini kiritng: ", i + 1);
        scanf("%s", genre[i].name);

        printf("%d-janrning descriptionini  kiriting: ", i + 1);
        scanf("%s", genre[i].description);
    }
    
    int n2;
    printf("Kinolar sonini kiriting: ");
    scanf("%d", &n2);

    struct Movie movies[n2];
    for (int i = 0; i < n2; i++)
    {
        printf("%d-kinoning nomini kiritng: ", i + 1 );
        scanf("%s", movies[i].name);

        printf("%d-kinoning reytingi kiriting: ", i + 1);
        scanf("%f", &movies[i].rating);

        printf("%d-kinoning yilini kiriting: ", i + 1);
        scanf("%d", &movies[i].release_year);
    }
    printf("Action janridagi kinolar:\n");
    printf("   Name   | Rating  | Release Year | Genre Name | Genre Description\n");
    for (int i = 1; i < n2; i++)
    {
        if (!strcmp(genre[i].name, "Action"))
        {
            printf("%10s", movies[i].name);
            printf("| %9.1f", movies[i].rating);
            printf("| %14d", movies[i].release_year);
            printf("| %12s", genre[i].name);
            printf("| %s", genre[i].description);
        }
    }

    return 0;
}