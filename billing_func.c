#include "main.h"

item get_item_input()
{
    item *item_input;
    order *order_input;
    int n,j = 0;
    char date[12] = __DATE__;

    item_input = malloc(sizeof(item));
    order_input = malloc(sizeof(order));

    printf("Enter customer's name: ");
    fgets(order_input->customer_name, 50, stdin);
     // to suppress the '/n' in fgets
    scanf("%*[^\n]"); 

    strcpy(order_input->date, date);
    printf("\n%s\n", order_input->date);

    printf("=======================================\n");

    while(n >= 0)
    {
        printf("\nEnter item name: ");
        scanf("%s", item_input->item_name);
        getchar();
        printf("\n");

        printf("Enter item price: ");
    
        scanf("\n%f",&item_input->price);
        // fgetc(stdin);
        printf("\n");

        printf("Enter number of order quantity: ");
        scanf("%i",&item_input->quantity);
        fgetc(stdin);
        printf("\n");

        order_input->item_array[j] = {item_input->item_name, item_input->quantity, item_input->price};

        n--;
        printf("=======================================\n");

    };
    free(item_input);
    return *item_input;
}

