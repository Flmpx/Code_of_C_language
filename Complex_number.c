//自己定义complex结构体
#include <stdio.h>
#include <math.h>
//定义复数结构体
typedef struct{
    double real;
    double imag;
}Complex;
//复数加法
Complex and_complex(Complex num_1,Complex num_2){
    Complex result;
    result.real=num_1.real+num_2.real;
    result.imag=num_1.imag+num_2.imag;
    return result;
}
//复数减法
Complex diff_complex(Complex num_1,Complex num_2){
    Complex result;
    result.real=num_1.real-num_2.real;
    result.imag=num_1.imag-num_2.imag;
    return result;
}
//复数乘法
Complex product_complex(Complex num_1,Complex num_2){
    Complex result;
    result.real=num_1.real*num_2.real-num_1.imag*num_2.imag;
    result.imag=num_1.real*num_2.imag+num_1.imag*num_2.real;
    return result;
}
//复数除法
Complex divide_complex(Complex num_1,Complex num_2){
    Complex result;
    result.real=(num_1.real*num_2.real+num_1.imag*num_2.imag)/(num_2.real*num_2.real+num_2.imag*num_2.imag);
    result.imag=(num_1.imag*num_2.real-num_1.real*num_2.imag)/(num_2.real*num_2.real+num_2.imag*num_2.imag);
    return result;
}
//返回模长
double complex_abs(Complex num){
    return sqrt(num.real*num.real+num.imag*num.imag);
}
//打印复数的合理格式
void print_complex(Complex num){
    if(fabs(num.imag)<1e-12&&fabs(num.real)<1e-12) printf("0\n");
    else if(fabs(num.imag)<1e-12) printf("%g\n",num.real);
    else if(fabs(num.real)<1e-12) printf("%gi\n",num.imag);
    else if(num.imag<0) printf("%g%gi\n",num.real,num.imag);
    else printf("%g+%gi\n",num.real,num.imag);
}

int main ()
{

    Complex  num_1,num_2;
   //判断输入是否正确
    while(scanf("%lf %lf %lf %lf",&num_1.real,&num_1.imag,&num_2.real,&num_2.imag)!=4){
        printf("input error!!!\nEnter to continue.");
        while(getchar()!='\n');
    }
    Complex sum,diff,product,divide;

    //和差积的计算
    sum=and_complex(num_1,num_2);
    diff=diff_complex(num_1,num_2);
    product=product_complex(num_1,num_2);
    int judge=0;
    if(fabs(num_2.real)>1e-12||fabs(num_2.imag)>1e-12){
        divide=divide_complex(num_1,num_2);
        judge=1;
    }

    //打印num_1和num_2及它们的加减乘除
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
    
    //打印它们的模长
    printf("|num_1|=%g\n",complex_abs(num_1));
    printf("|num_2|=%g\n",complex_abs(num_2));
    printf("|sum|=%g\n",complex_abs(sum));
    printf("|diff|=%g\n",complex_abs(diff));
    printf("|product|=%g\n",complex_abs(product));
    if(judge) printf("|divide|=%g\n",complex_abs(divide));

    return 0;
}
