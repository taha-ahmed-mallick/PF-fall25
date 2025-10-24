#include <stdio.h>

int main()
{
	float salary, taxRate, tax, afterTaxSalary;
	printf("Enter the salary (Rs.): ");
	scanf("%f", &salary);
	printf("Enter the Tax Rate (%%): ");
	scanf("%f", &taxRate);

	tax = salary * (taxRate / 100);
	afterTaxSalary = salary - tax;

	printf("Tax: %.2f Rs.\n", tax);
	printf("After Tax Salary: %.2f Rs.\n", afterTaxSalary);
	return 0;
}