#include <stdio.h>


int main()
{
    char ch = 0;
     scanf("%c", &ch);

     switch(ch)
     {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Letter is vowel\n");
        break;

        default:
        printf("Letter is consonent.\n");


     }

    return 0;
}