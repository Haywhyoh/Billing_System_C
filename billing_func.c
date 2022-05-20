#include "main.h"

item get_item_input()
{
    item *item_input;
    order *order_input;
    int n = 1;

    item_input = malloc(sizeof(item));
    order_input = malloc(sizeof(order));

    printf("Enter customer's name: ");
    fgets(order_input->customer_name, 50, stdin);
    fgetc(stdin);
    printf("\n\n");

    while(n >= 0)
    {
        printf("Enter item name: ");
        fgets(item_input->item_name, 50, stdin);
        fgetc(stdin);
        printf("\n");

        printf("Enter item price: ");
        fgetc(stdin);
        scanf("\n%f",&item_input->price);
        fgetc(stdin);
        printf("\n");

        printf("Enter number of order quantity: ");
        scanf("%i",&item_input->quantity);
        fgetc(stdin);
        printf("\n");

        n--;
    };
    free(item_input);
    return *item_input;
}

