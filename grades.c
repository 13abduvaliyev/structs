#include<stdio.h>

struct Student
{
    char first_name[100];
    char last_name[100];
}; 

struct Subject
{
    char name[100];
};

struct Score{
    float score;
    struct Subject subjects;
    struct Student students; 
};

int main(){

    struct Subject subject1 = {"Math"};
    struct Subject subject2 = {"Physics"};
    struct Subject subject3 = {"English"};
    struct Subject subjects = {"Phelosophy"};

    struct Student student1 = {"Eldor", "Hayitov"};
    struct Student student2 = {"Asror", "Qurbonnazarv"};
    struct Student student3 = {"OLimjon", "Murtozoyev"};
    struct Student student4 = {"Sherbek", "Nizomiddinov"};

    struct Score scores[5] = {
        {95.1, subject1, student1},
        {70.0, subject2, student2},
        {80.1, subject3, student3},
        {60.1, subject1, student4},
    };
    
    float S = 0; 
    for (int i = 0; i < 5; i++)
    {
        S += scores[i].score;
    }
    S = S / 5;
    
    printf("O'rtacha bahodan yuqori ball to'plagan talabalar:\nFirst Name |  Last Name   | Subject Name | Score\n");
    printf("-----------------------------------------------\n");
    
    for (int i = 0; i < 5; i++)
    {
        if (S < scores[i].score)
        {
            printf("%11s", scores[i].students.first_name);
            printf("| %13s", scores[i].students.last_name);
            printf("| %13s", scores[i].subjects.name);
            printf("| %.1f\n", scores[i].score);
        }
        
    }
}