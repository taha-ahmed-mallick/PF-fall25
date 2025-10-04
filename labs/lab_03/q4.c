#include <stdio.h>
int main()
{
	int testInteger=3000000000;
	printf("Number is %d",testInteger);
    //The output is not as we expected because we are intializing the int variable with a value which is greater then the capacity of integer type variable so that why it is overflowing and becomes negative.
    return 0;
}