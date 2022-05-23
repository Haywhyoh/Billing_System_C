#include "main.h"

int main()
{
    char op_num = 1;
    char *ptr;
    ptr = &op_num;

    welcome_message();
    
    fgets(ptr, 2, stdin);
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        continue;
    }

    printf("===============================================\n");
    switch (op_num)
    {
    case '1':
        get_item_input();

        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    }
    return (1);
}
