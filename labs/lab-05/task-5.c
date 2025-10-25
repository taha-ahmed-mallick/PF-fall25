#include <stdio.h>
int main() 
{
	int ID, password;
	printf ("Plese Enter Your ID: ");
	scanf ("%d", &ID);
	switch (ID) 
	{ 
		case 500:
		printf("Enter your password: ");
		scanf("%d", &password);
			switch (password) 
			{
				case 000:
					printf ("Welcome Programmer\n");
					break;	
				default:
					printf("incorrect password"); 
					break;
				}
			break;
	default: 
		printf("incorrect ID"); 
		break;
	}
    return 0;
}