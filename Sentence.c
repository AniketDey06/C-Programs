#include <stdio.h>
#include <conio.h>.
#include<string.h>
int main()
{
    char sen[50], *p;
    int i, count = 1, vol = 0, sp = 0;
    printf("Enter sentence: ");
    gets(sen);
    p = sen;
    while (1)
    {
        if (*p == '\0')
        {
            break;
        }
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'||*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
        {
            vol++;
        }
        if (*p ==' ')
        {
            sp++;
        }
        p++;
        count++;
    }
    printf("no of space in sentence: %d\n", sp);
    printf("no of vowel in sentence: %d\n", vol);
    printf("length of the sentence: %d\n", count);
    return 0;
}
