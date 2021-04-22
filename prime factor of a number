#include <stdio.h>

int main()
{
    int i, j, num,prime;

    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++)
    {
        // Check i for factor 
        if(num%i==0)
        {
            // Check i for Prime 
            prime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    prime = 0;
                    break;
                }
            }

           
            if(prime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
