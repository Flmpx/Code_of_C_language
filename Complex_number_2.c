#include <stdio.h>
#include <complex.h>
#include <math.h>
void print_complex(double complex num){
    if(fabs(cimag(num))<1e-12&&fabs(creal(num))<1e-12) printf("0\n");
    else if(fabs(cimag(num))<1e-12) printf("%g\n",creal(num));
    else if(fabs(creal(num))<1e-12) printf("%gi\n",cimag(num));
    else if(cimag(num)<0) printf("%g%gi\n",creal(num),cimag(num));
    else printf("%g+%gi\n",creal(num),cimag(num));
}
int main ()
{   
    double num_1_real,num_1_imag,num_2_real,num_2_imag;
    scanf("%lf %lf %lf %lf",&num_1_real,&num_1_imag,&num_2_real,&num_2_imag);
    double complex num_1=num_1_real+num_1_imag*I,num_2=num_2_real+num_2_imag*I;
    
    double complex sum,diff,product,divide;
    sum=num_1+num_2;
    diff=num_1-num_2;
    product=num_1*num_2;
    int judge=0;
    if(fabs(num_2_real)>1e-12||fabs(num_2_imag)>1e-12){
        judge=1;
        divide=num_1/num_2;
    }

    printf("num_1=");print_complex(num_1);
    printf("num_2=");print_complex(num_2);
    printf("sum=");print_complex(sum);
    printf("diff=");print_complex(diff);
    printf("product=");print_complex(product);
    if(judge){
        printf("divide=");print_complex(divide);
    }else{
        printf("They can't be divided\n");
    }

    printf("|num_1|=%g\n",cabs(num_1));
    printf("|num_2|=%g\n",cabs(num_2));
    printf("|sum|=%g\n",cabs(sum));
    printf("|diff|=%g\n",cabs(diff));
    printf("|product|=%g\n",cabs(product));
    if(judge) printf("|divide|=%g\n",cabs(divide));

    return 0;
}
