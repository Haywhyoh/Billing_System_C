#include "main.h"

order get_item_input()
{
    item *item_input;
    order *order_input;
    int n = 1;
    int j = 1;
    char date[12] = __DATE__;

    item_input = malloc(sizeof(item));
    order_input = malloc(sizeof(order));

    printf("Enter customer's name: ");
    scanf("%s", order_input->customer_name);
    
    scanf("%*[^\n]"); 
    printf("\n%s\n",order_input->customer_name);

    strcpy(order_input->date, date);
    printf("\n%s\n", order_input->date);

    printf("=======================================\n");

    while(n >= 0)
    {
        printf("\nEnter item name %i: ", n);
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

        order_input->item_array[n].quantity = item_input->quantity;
        memcpy(order_input->item_array[n].item_name, item_input->item_name, (sizeof(char) * 20));
        order_input->item_array[n].price = item_input->price;

        n--;
        printf("=======================================\n");

    };

    

    invoice_header(order_input);
    free(item_input);
    return *order_input;
}

void invoice_header(order *order_input)
{
    int i;
    
    printf("\n=======================================\n");
    printf("%s \n", order_input->customer_name);
    printf("%s\n", order_input->date);
    printf("=======================================\n\n");

    for (i = 0; i <= j; i++)
    {
        printf("\n%s\t%i\t%2f\t",  order_input->item_array[i].item_name, order_input->item_array[i].quantity, order_input->item_array[i].price);
    }
    printf("Item\tUnit Price\tPrice\t\n");
}
    
