#include <stdio.h>
typedef struct sStudent_Info{
    char name[20];
    int roll_number;
    int marks;
}sStudent_Info;

int main()
{
    char counter = 0, ans;
    sStudent_Info student[10] = {0};
    printf("Enter information of students:\n");

    do
    {
        fflush(stdin);
        printf("for roll number %d\n", counter+1);
        printf("Enter name: ");
        gets(student[counter].name);

        printf("Enter roll number: ");
        scanf("%d", &student[counter].roll_number);

        printf("Enter marks: ");
        scanf("%d", &student[counter].marks);

        counter ++;

        printf("do you want to add another student? y or n. :");
        fflush(stdin);
        scanf("%c", &ans);

    } while ((ans == 'y' || ans =='Y'));


    printf("Displaying Information\n");
    for(char i = 0; i < 10; i++)
    {
    printf("Information for roll no. %d\n", i+1);
    printf("name = %s\n", student[i].name);
    printf("roll number = %d\n", student[i].roll_number);
    printf("marks = %d\n\n", student[i].marks);
    }
    return 0;
}
