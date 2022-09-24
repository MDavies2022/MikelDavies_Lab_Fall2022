#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    string birthday;
    float gpa;
}
student;

int main(void)
{
    int num = get_int("number of students: ");

    student students[num];

    for (int i = 0; i < num; i++)
    {
        students[i].name = get_string("name: ");
        students[i].birthday = get_string("birthday: ");
        students[i].gpa = get_float("gpa: ");
    }

    for (int i = 0; i < num; i++)
    {
        printf("%s's birthday is %s and they have a gpa = %f.\n", students[i].name, students[i].birthday, students[i].gpa);
    }
    return 0;
}
