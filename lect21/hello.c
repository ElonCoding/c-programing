#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "aiouabvs";
    int vCount = 0;
    int cCount = 0;
    int ln = strlen(str);
    for (int i = 0; i < ln; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'i' || ch == 'o' || ch == 'e')
        {
            vCount++;
        }
        else
        {
            cCount;
        }
    }

    printf("Vowels: %d, Consonants: %d\n", vCount, cCount);
    return 0;
}
else
{
    printf("not a palindrome\n");
}
