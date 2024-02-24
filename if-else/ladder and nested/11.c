/*write a program to enter the month number from user & shows the calendar of the month of the current year.*/
#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("\n---------------------------------------------------------\n");
        printf("\t\t\tjanuary\n");
        printf("\n---------------------------------------------------------\n");
        printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
        printf(" 1\t2\t3\t4\t5\t6\t7\n");
        printf(" 8\t9\t10\t11\t12\t13\t14\n");
        printf(" 15\t16\t17\t18\t19\t20\t21\n");
        printf(" 22\t23\t24\t25\t26\t27\t28\n");
        printf(" 29\t30\t31\t\t\t\t\n");
    }
        else if (month == 2)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tfebruary\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t\t\n");
            printf(" 27\t28\t29\t\t\t\t\n");
        }
        else if (month == 3)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tmarch\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t\t\t\t\t\n");
        }
        else if (month == 4)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tapril\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t\t\t\t\t\n");
        }
        else if (month == 5)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tmay\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t31\t\t\t\t\n");
        }
        else if (month == 6)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\t june\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t\t\t\t\t\t\n");
        }
        else if (month == 7)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\t july\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t31\t\t\t\t\n");
        }
        else if (month == 8)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\taugust\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t\t\t\t\t\n");
        }
        else if (month == 9)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tseptember\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t\t\t\t\t\n");
        }
        else if (month == 10)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\toctober\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t\t\t\t\t\n");
        }
        else if (month == 11)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tnovember\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t31\t\t\t\t\n");
        }
        else if (month == 12)
        {
            printf("\n---------------------------------------------------------\n");
            printf("\t\t\tdecember\n");
            printf("\n---------------------------------------------------------\n");
            printf(" SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
            printf(" 1\t2\t3\t4\t5\t6\t7\n");
            printf(" 8\t9\t10\t11\t12\t13\t14\n");
            printf(" 15\t16\t17\t18\t19\t20\t21\n");
            printf(" 22\t23\t24\t25\t26\t27\t28\n");
            printf(" 29\t30\t\t\t\t\t\n");
        }
        else printf("Invalid input...");

        return 0;
    }