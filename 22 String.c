#include <stdio.h>
#include <string.h>
int main()
{
    int n, p, i, len = 0, m, z = 0;
    char s[10], q[10];
    printf("Enter your choice (1 or 2) for string operation:\n");
    printf("1. Using string functions\n");
    printf("2. Without using string functions\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter your choice (1-4) for operation:\n");
        printf("1. Find length of string\n");
        printf("2. Concatenate strings\n");
        printf("3. Reverse string\n");
        printf("4. Copy string\n");
        scanf("%d", &p);

        switch (p)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", s);
            len = strlen(s);
            printf("Length of string: %d\n", len);
            break;
        case 2:
            printf("Enter two strings: ");
            scanf("%s %s", s, q);
            strcat(s, q);
            printf("Concatenated string: %s\n", s);
            break;
        case 3:
            printf("Enter a string: ");
            scanf("%s", s);
            strrev(s);
            printf("Reversed string: %s\n", s);
            break;
        case 4:
            printf("Enter two strings: ");
            scanf("%s %s", s, q);
            strcpy(q, s);
            printf("Copied string: %s\n", q);
            break;
        default:
            printf("Invalid Choice\n");
        }
        break;
    case 2:
        printf("Enter your choice (1-4) for operation:\n");
        printf("1. Find length of string\n");
        printf("2. Concatenate strings\n");
        printf("3. Reverse string\n");
        printf("4. Copy string\n");
        scanf("%d", &p);

        switch (p)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", s);
            len = 0;
            while (s[len] != '\0')
            {
                len++;
            }
            printf("Length of string: %d\n", len);
            break;
        case 2:
            printf("Enter two strings: ");
            scanf("%s %s", s, q);
            len = 0;
            while (s[len] != '\0')
            {
                len++;
            }
            for (i = 0; q[i] != '\0'; i++)
            {
                s[len + i] = q[i];
            }
            s[len + i] = '\0';
            printf("Concatenated string: %s\n", s);
            break;
        case 3:
            printf("Enter a string: ");
            scanf("%s", s);
            len = 0;
            while (s[len] != '\0')
            {
                len++;
            }
            for (i = 0; i < len / 2; i++)
            {
                char temp = s[i];
                s[i] = s[len - i - 1];
                s[len - i - 1] = temp;
            }
            printf("Reversed string: %s\n", s);
            break;
        case 4:
            printf("Enter two strings: ");
            scanf("%s %s", s, q);
            len = 0;
            while (s[len] != '\0')
            {
                len++;
            }
            for (i = 0; i < len; i++)
            {
                q[i] = s[i];
            }
            q[i] = '\0';
            printf("Copied string: %s\n", q);
            break;
        default:
            printf("Invalid Choice\n");
        }
        break;
    default:
        printf("Invalid Choice\n");
    }
    return 0;
}
