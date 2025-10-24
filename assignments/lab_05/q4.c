#include <stdio.h>

int main()
{
    int items;
    char choice1, choice2, choice3, choice4;
    int qty1 = 0, qty2 = 0, qty3 = 0, qty4 = 0;
    int total = 0;

    printf("\t\t\tABC Restaurant Online Order Placement\n");
    printf("\t\t\t\t\tWELCOME!\n\n");

    printf("Please select from the following Menu\n");
    printf("B= Burger\n");
    printf("F= French Fries\n");
    printf("P= Pizza\n");
    printf("S= Sandwiches\n\n");

    printf("How many types of snacks you need to order: ");
    scanf("%d", &items);

    if (items < 1 || items > 4)
    {
        printf("Invalid number of snacks!\n");
        return 0;
    }

    // Snack #1
    printf("Enter first Snack you want to order: ");
    scanf(" %c", &choice1);
    printf("Please provide quantity: ");
    scanf("%d", &qty1);

    // Snack #2
    if (items >= 2)
    {
        printf("Enter second Snack you want to order: ");
        scanf(" %c", &choice2);
        printf("Please provide quantity: ");
        scanf("%d", &qty2);
    }

    // Snack #3
    if (items >= 3)
    {
        printf("Enter third Snack you want to order: ");
        scanf(" %c", &choice3);
        printf("Please provide quantity: ");
        scanf("%d", &qty3);
    }

    // Snack #4
    if (items == 4)
    {
        printf("Enter fourth Snack you want to order: ");
        scanf(" %c", &choice4);
        printf("Please provide quantity: ");
        scanf("%d", &qty4);
    }

    printf("======================================================\n");
    printf("You have ordered!\n");

    // Calculate and display each snack
    if (qty1 > 0)
    {
        int cost1 = 0;
        switch (choice1)
        {
        case 'B':
        case 'b':
            cost1 = qty1 * 200;
            printf("%d Burger(s) value %d PKR\n", qty1, cost1);
            break;
        case 'F':
        case 'f':
            cost1 = qty1 * 50;
            printf("%d French Fries value %d PKR\n", qty1, cost1);
            break;
        case 'P':
        case 'p':
            cost1 = qty1 * 500;
            printf("%d Pizza(s) value %d PKR\n", qty1, cost1);
            break;
        case 'S':
        case 's':
            cost1 = qty1 * 150;
            printf("%d Sandwich(es) value %d PKR\n", qty1, cost1);
            break;
        default:
            printf("Invalid item 1!\n");
        }
        total += cost1;
    }

    if (qty2 > 0)
    {
        int cost2 = 0;
        switch (choice2)
        {
        case 'B':
        case 'b':
            cost2 = qty2 * 200;
            printf("%d Burger(s) value %d PKR\n", qty2, cost2);
            break;
        case 'F':
        case 'f':
            cost2 = qty2 * 50;
            printf("%d French Fries value %d PKR\n", qty2, cost2);
            break;
        case 'P':
        case 'p':
            cost2 = qty2 * 500;
            printf("%d Pizza(s) value %d PKR\n", qty2, cost2);
            break;
        case 'S':
        case 's':
            cost2 = qty2 * 150;
            printf("%d Sandwich(es) value %d PKR\n", qty2, cost2);
            break;
        default:
            printf("Invalid item 2!\n");
        }
        total += cost2;
    }

    if (qty3 > 0)
    {
        int cost3 = 0;
        switch (choice3)
        {
        case 'B':
        case 'b':
            cost3 = qty3 * 200;
            printf("%d Burger(s) value %d PKR\n", qty3, cost3);
            break;
        case 'F':
        case 'f':
            cost3 = qty3 * 50;
            printf("%d French Fries value %d PKR\n", qty3, cost3);
            break;
        case 'P':
        case 'p':
            cost3 = qty3 * 500;
            printf("%d Pizza(s) value %d PKR\n", qty3, cost3);
            break;
        case 'S':
        case 's':
            cost3 = qty3 * 150;
            printf("%d Sandwich(es) value %d PKR\n", qty3, cost3);
            break;
        default:
            printf("Invalid item 3!\n");
        }
        total += cost3;
    }

    if (qty4 > 0)
    {
        int cost4 = 0;
        switch (choice4)
        {
        case 'B':
        case 'b':
            cost4 = qty4 * 200;
            printf("%d Burger(s) value %d PKR\n", qty4, cost4);
            break;
        case 'F':
        case 'f':
            cost4 = qty4 * 50;
            printf("%d French Fries value %d PKR\n", qty4, cost4);
            break;
        case 'P':
        case 'p':
            cost4 = qty4 * 500;
            printf("%d Pizza(s) value %d PKR\n", qty4, cost4);
            break;
        case 'S':
        case 's':
            cost4 = qty4 * 150;
            printf("%d Sandwich(es) value %d PKR\n", qty4, cost4);
            break;
        default:
            printf("Invalid item 4!\n");
        }
        total += cost4;
    }

    printf("Total = %d PKR\n", total);
    printf("Thank you for your order... have a nice day.\n");

    return 0;
}
