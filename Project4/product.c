#include <stdio.h>
#include <stdlib.h>
 
double inner_product(double *, double *, int len);
double inner_product_rec(double *, double *, int len);
 
int main(void)
{
        double v[] ={2.3, 6.0, 1.2, 0.7, 9.4, 5.1, 0.2, 4.4, 2.3, 0.01}; 
        printf("Recursive: %f \n",inner_product_rec(v,v,10));
        printf("Expected: 182.280100\n");
 
        return 0;
        
} // end main()
 
double inner_product(double *a, double *b, int len)
{
        double sum = 0;
        int i;
 
        for (i = 0; i < len; i++) {
                sum += a[i] * b[i];
        }
 
        return sum;

} // end inner_product()

double inner_product_rec(double *a, double *b, int len)
{
        /*
        *       Version 2
        */

        if (len == 1) //base case
        {
                return *a * *b;
        }
        else 
        {
                return *a * *b + inner_product_rec(a+1, b+1,  len-1);   
        }

        /*
        *       Version 1
        *

        double sum = (*a) * (*b);
        a++;
        b++;
        
        return sum += inner_product_rec(a, b,  n-1);

        */

} // end inner_product_rec()
