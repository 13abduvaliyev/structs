#include <stdio.h>

struct Users
{
    char first_name[100];
    char last_name[100];
    int birth_year;
    char location[100];
    char phone[100];
};
    
int main(){

    int a;
    printf("Nechta odam kiritmoqchisiz: "); scanf("%d", &a);

    struct Users user[a];
    for(int i; i < a; i++){

        printf("First name: "); scanf("%s", user[i].first_name);
        printf("Last name: "); scanf("%s", user[i].last_name);
        printf("Birth year: "); scanf("%d", &user[i].birth_year);
        printf("Location: "); scanf("%s", user[i].location);
        printf("Phone Number: "); scanf("%s", user[i].phone);
        
    }
    printf("Foydalanuvchilar jadvali:\nFirst Name   |   Last Name |   Birth Year |   Location | Phone\n-------------------------------------------------------------------------------------\n");

    for (int i = 0; i < a; i++){

        printf("%13s", user[i].first_name);
        printf("| %12s", user[i].last_name);
        printf("| %13d", user[i].birth_year);
        printf("| %11s", user[i].location);
        printf("| %s\n", user[i].phone);   
    }
    return 0;
     

}