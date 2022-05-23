#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct items contains the 
 * name of the ordered item
 * the price per item
 * the number of item ordered
 */

typedef struct item{
    char item_name[20];
    int  quantity;
    float price;
}item;

typedef struct order{
    char customer_name[50];
    char date[12];
    int  num_of_items;
    item item_array[50];
}order;


void welcome_message();

order get_item_input();
void invoice_header(order *order_input);

#endif
