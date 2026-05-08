/*
Enter details of Student 1
Enter Name: Amit
Enter Roll Number: 101
Enter Marks: 85

Enter details of Student 2
Enter Name: Rahul
Enter Roll Number: 102
Enter Marks: 90

Enter details of Student 3
Enter Name: Neha
Enter Roll Number: 103
Enter Marks: 88

Student Details:

Student 1
Name = Amit
Roll Number = 101
Marks = 85.00
*/
#include<stdio.h>

// Structure definition
struct Student
{
    char name[50];
    int rollno;
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    // Input student details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name = %s\n", s[i].name);
        printf("Roll Number = %d\n", s[i].rollno);
        printf("Marks = %.2f\n", s[i].marks);
    }

    return 0;
}
