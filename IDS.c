#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    int a = x++;
    int b = ++x;
    int c = x--;
    int d = --x;
    printf("\n");
    printf("Post Increment: %d\n", a);
    printf("Pre Increment: %d\n", b);
    printf("Post Decrement: %d\n", c);
    printf("Pre Decrement: %d\n", d);
    printf("\n");
    int size = sizeof(x);
    printf("Size of num: %d", size);
    return 0;
}
