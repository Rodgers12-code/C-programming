#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL)
    {
        printf("Error: could not open file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    fprintf(fp, "%s\n", title);
    fclose(fp);

    printf("Title \"%s\" stored successfully.\n", title);

    return 0;
}
