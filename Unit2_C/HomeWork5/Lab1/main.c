#include <stdio.h>
typedef struct sStudent_Info{
    char name[20];
    int roll_number;
    int marks;
}sStudent_Info;

int main()
{
    sStudent_Info student1;
    printf("Enter information of students:\n");

    printf("Enter name: ");
    gets(student1.name);

    printf("Enter roll number: ");
    scanf("%d", &student1.roll_number);

    printf("Enter marks: ");
    scanf("%d", &student1.marks);
    printf("Displaying Information\n");

    printf("name = %s\n", student1.name);
    printf("roll numver = %d\n", student1.roll_number);
    printf("marks = %d\n", student1.marks);

    return 0;
}