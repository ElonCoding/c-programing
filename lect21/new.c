#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "abc";
    int freq[256] = {0};
    int ln = strlen(str);
    for (int i = 0; i < ln; i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", i, freq[i]);
        }
            }
    printf("\n");
    char str2[] = "hello";
    int freq2[256] = {0};
    int ln2 = strlen(str2);
    for (int i = 0; i < ln2; i++)
    {
        freq2[str2[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq2[i] > 0)
        {
            printf("%c: %d\n", i, freq2[i]);
        }
    }
    return 0;
}

