// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 - 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.


#include<stdio.h>

int main()
{

    int salary,tax;

    printf("Enter your salary: ");
    scanf("%d", &salary);

    if (250000 < salary && salary <= 500000)
    {
        tax = (salary * 5) /100;
        printf("Income tax amount is : %d",tax);
    }
    else if (500000 < salary && salary <= 1000000)
    {
        tax = ((500000 * 5) /100) + (((salary - 500000) * 20)/100);
        printf("Income tax amount is : %d",tax);
    }
    else if (1000000 < salary )
    {
        tax = ((500000 * 5) /100) + ((500000 * 20) /100) + (((salary - 1000000) * 30)/100);
        printf("Income tax amount is : %d",tax);
    }
    else{
        printf("You don't need to pay  tax ");
    }
    return 0;

}