#include <stdio.h>
int main()
{
    char name[] = "hiii";
    printf("name:%c", name[0]);

    int i = 0;
    while (name[i] != '\0')
    {
        printf("\n%c", name[i]);
        i++
    }

    return 0;
}

for (int i = 0; name[i] != '\0'; i++)
{
    printf("%c", name[i]);
}

char data[10];
for (int i = 0; name[i] != '\0'; i++)
{
    data[i] = name[i];
}
printf("%s", data);

int ln = strlen(name);
int isTrue = 1;
for (int i = 0; i < ln / 2; i++)
{
    if (name[i] != name[ln - i - 1])
    {
        isTrue = 0;
        break;
    }
}
if (isTrue == 1)
{
    printf("is palindrome");
}
else
{
    printf("not a palindrome");
}

for (i = 0; name[i] != '\0'; i++)
{
}

