#include<stdio.h>
int main()
{
    int c,a,b;
    printf("Choose 1:Addition 2:Subtraction 3:Multiplication 4:Division 5:Exit\n");
    scanf("%d",&c);
    if(c==5)
        return 0;
    else

        printf("Enter two number:\n");
        scanf("%d%d",&a,&b);

        switch(c)
        {
        case 1:
            printf("Sum = %d\n",a+b);
            break;
        case 2:
            printf("Sub = %d\n",a-b);
            break;
        case 3:
            printf("Mul = %d\n",a*b);
            break;
        case 4:

            printf("Div = %d\n",a/b);
            break;
        default:
            printf("Enter a valid input\n");
            break;


    }

}
