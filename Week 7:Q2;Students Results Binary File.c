#include <stdio.h>

struct Student
{
    char name[50];
    char regNo[20];
    float marks;
};

int main(void)
{
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL)
    {
        printf("Error: could not open results.dat\n");
        return 1;
    }

    printf("%-20s %s\n", "Name", "Marks");
    printf("-----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1)
    {
        printf("%-20s %.2f\n", s.name, s.marks);
    }

    fclose(fp);

    return 0;
}
