#include <stdio.h>
#include <string.h>

int main(){
	char user[5],password[6],loginUser[6],loginPassword[6];
	printf("USER REGISTRATION SYSTEM\n");
	printf("Enter a user name of 5 alphabets:");
	scanf("%s",&user);
	printf("Enter Password and Password should be 6 Characters long with at-least 1 numeric, 1 captial and 1 small letter: ");
	scanf("%s",&password);
	printf("\nAccount Created SuccessFully!\n\n");
	printf("Login the Account\n");
	while(strcmp(user, loginUser) !=0 ){
		printf("Enter Username:");
		scanf("%s",&loginUser);
	}
	while(strcmp(password, loginPassword) !=0 ){
		printf("Enter Password:");
		scanf("%s",&loginPassword);
	}
	
	printf("Welcome %s, You are now Logged in",user);

}