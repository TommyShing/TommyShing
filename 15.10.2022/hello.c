#include <stdio.h>

int main(int argc, char *argv[])
{
        if (argc == 1)
        {
                printf("Hello World!\n");
                return 0;
        }
        else
        {
                printf("Hello,");
                for (int i = 1; i < argc; i++)
                {
                        printf(" %s", argv[i]);
                }
                printf("\n");
                return 0;
        }
}
