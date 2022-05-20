#include "main.h"

int main()
{
    int op_num = 0;

    welcome_message();
    
    scanf("%i",&op_num);
    printf("=======================================\n");
    switch (op_num)
    {
    case 1:
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
