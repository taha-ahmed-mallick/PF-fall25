#include <stdio.h>

int main()
{
    int dep, yr;
    printf("The list of departments:\n");
    printf("\t1. Computer Science\n\t2. Electrical Engineering\n");
    printf("Enter your code specified: ");
    scanf("%d", &dep);
    switch (dep)
    {
    case 1:
        printf("Which year you are in (1-2): ");
        scanf("%d", &yr);
        switch (yr)
        {
        case 1:
            printf("\tCourses\n");
            printf("\t=======\n");
            printf("\t1. EF-101\n");
            printf("\t2. CT-175\n");
            printf("\t3. EA-128\n");
            printf("\t4. ES-108\n");
            printf("\t5. PH-129\n");
            printf("\t1. ES-128\n");
            break;
        case 2:
            printf("\tCourses\n");
            printf("\t=======\n");
            printf("\t1. CT-268\n");
            printf("\t2. CT-159\n");
            printf("\t3. MT-221\n");
            printf("\t4. MT-331\n");
            printf("\t5. EA-244\n");
            printf("\t1. EF-201\n");
            break;
        default:
            printf("Invalid!");
        }
        break;
    case 2:
        printf("Which year you are in (1-2): ");
        scanf("%d", &yr);
        switch (yr)
        {
        case 1:
            printf("\tCourses\n");
            printf("\t=======\n");
            printf("\t1. EE-125\n");
            printf("\t2. MT-116\n");
            printf("\t3. EA-128\n");
            printf("\t4. EF-101\n");
            printf("\t5. CY-100\n");
            printf("\t1. ES-206\n");
            break;
        case 2:
            printf("\tCourses\n");
            printf("\t=======\n");
            printf("\t1. EL-240\n");
            printf("\t2. MT-226\n");
            printf("\t3. EE-264\n");
            printf("\t4. EA-244\n");
            printf("\t5. EE-111\n");
            printf("\t1. EF-201\n");
            break;
        default:
            printf("Invalid!");
        }
    default:
        printf("Not provided in the list above");
        break;
    }
    return 0;
}