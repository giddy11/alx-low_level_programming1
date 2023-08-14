#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    char country[20];
} Student;

int main()
{
    Student student1 = {"Precious", 80, "Nigeria"};
    Student student2 = {"Precious", 80, "Nigeria"};
    Student student3 = {"Precious", 80, "Nigeria"};
    Student student4 = {"Precious", 80, "Nigeria"};
    
    Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(student1); i++)
    {
        printf("%s\n", students[i].name);
    }
    

    return (0);
}