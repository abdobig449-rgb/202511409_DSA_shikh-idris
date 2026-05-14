#include <stdio.h>

void congratulate(char name[])
{
    printf("Congratulations %s\n", name);
}

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    congratulate(name);

    return 0;
}
