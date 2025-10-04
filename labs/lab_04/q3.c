#include <stdio.h>

int main()
{
    printf("Discount Calculator\n");
    printf("===================\n");
    int amt, dis;
    float dis_amt, after_dis;
    printf("Enter your bill: ");
    scanf("%d", &amt);
    if (amt < 0)
    {
        printf("Invalid!");
        return 0;
    }
    else if (amt < 2000)
    {
        dis = 0;
    }
    else if (amt < 4001)
    {
        dis = 20;
    }
    else if (amt < 6001)
    {
        dis = 30;
    }
    else
    {
        dis = 50;
    }
    dis_amt = (float)amt * dis/100.0;
    after_dis = amt - dis_amt;
    printf("The amount before discount was: %d\n", amt);
    printf("A discount of %d%% is applied which deducts %.2f from total amount.\n", dis, dis_amt);
    printf("Final amount to be paid is: %.2f", after_dis);
    return 0;
}