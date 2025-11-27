#include <stdio.h>
#include <string.h>

struct Employee{
    char name[30];
    int id;
    float salary;
    char department[30];
};

int main() {
    struct Employee employees[3];
    int index = 0;
    
    for(int i=0;i<3;i++){
        printf("Enter Employee%d Name:",i+1);
        fgets(employees[i].name,sizeof(employees[i].name),stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
        
        printf("Enter Employee%d id:",i+1);
        scanf("%d", &employees[i].id);
        getchar();
        
        printf("Enter Employee%d Salary:",i+1);
        scanf("%f", &employees[i].salary);
        getchar();

        printf("Enter Employee%d Department:",i+1);
        fgets( employees[i].department,sizeof(employees[i].department),stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = '\0';

        // while(getchar() != '\n');  
    }
 
     for(int i = 1; i < 3; i++) {
        if(employees[i].salary > employees[index].salary) {
            index = i;
        }
    }
    
      printf("\n=======Highest Salary Employee========");
      printf("\nName : %s\nid : %d\nSalary : Rs.%.2f\nDepartment : %s\n",employees[index].name,employees[index].id,employees[index].salary,employees[index].department);
  
   
    return 0;
}