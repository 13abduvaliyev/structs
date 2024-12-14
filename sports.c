#include <stdio.h>
#include <string.h>

struct Stadium 
{
    char name[100]; 
    int capacity;   
};

struct Team 
{
    char team_name[100];  
    char coach[100];    
    int players_count;    
    int founded_year;     
    struct Stadium stadium;  
};

int main(){
    
    int n;
    printf("Nechta jamoa bor: ");
    scanf("%d", &n);

    struct Team teams[n];

    for (int i = 0; i < n; i++) 
    {
        printf("Jamoa nomini kiriting: ", i + 1);
        scanf("%s", teams[i].team_name);
        printf("Murabbiy nimini kiriting: ", i + 1);
        scanf("%s", teams[i].coach);
        printf("Oyinchilar sonini kiriting: ", i + 1);
        scanf("%d", &teams[i].players_count);
        printf("Jamoa tashkil topgan yilni kiriting: ", i + 1);
        scanf("%d", &teams[i].founded_year);
        printf("Stadion nomini kiriting: ");
        scanf("%s", teams[i].stadium.name);
        printf("Stadionning sigimini kiriting: ", i + 1);
        scanf("%d", &teams[i].stadium.capacity);
    }

    int index = 0; 
    for (int i = 1; i < n; i++) 
    {
        if (teams[i].founded_year < teams[index].founded_year) 
        {
            index = i;
        }
    }

    printf("\nEng eski jamoa:\n");
    printf("Team Name    | Coach       | Players Count | Founded Year | Stadium Name\n");
    printf("----------------------------------------------------------------------\n");
    printf("%12s",teams[index].team_name); 
    printf ("%11s",teams[index].coach); 
    printf("%13d",teams[index].players_count);
    printf("%12d",teams[index].founded_year);
    printf("%s\n",teams[index].stadium.name);

    return 0;
}
