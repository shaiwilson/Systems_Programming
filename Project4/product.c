#include <stdio.h>
#include <stdlib.h>
 
double inner_product(double *, double *, size_t);
double inner_product_rec(double *, double *, size_t);
 
int main(void)
{
        double v[] ={2.3, 6.0, 1.2, 0.7, 9.4, 5.1, 0.2, 4.4, 2.3, 0.01}; 
        printf("recursive %f \n",inner_product_rec(v,v,10));
        printf("Expected: 182.280100\n");
 
        return 0;
}
 
double inner_product(double *a, double *b, size_t n)
{
        double sum = 0;
        size_t i;
 
        for (i = 0; i < n; i++) {
                sum += a[i] * b[i];
        }
 
        return sum;
}

double inner_product_rec(double *a, double *b, size_t n)
{
        if (n == 0) //base case
        {
                return 0;
        }

        double sum = (*a) * (*b);
        a++;
        b++;
        
        return sum += inner_product_rec(a, b,  n-1);
}
