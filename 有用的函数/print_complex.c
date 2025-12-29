//自己写的复数结构体
void print_complex(Complex num){
    if(fabs(num.imag)<1e-12&&fabs(num.real)<1e-12) printf("0\n");
    else if(fabs(num.imag)<1e-12) printf("%g\n",num.real);
    else if(fabs(num.real)<1e-12) printf("%gi\n",num.imag);
    else if(num.imag<0) printf("%g%gi\n",num.real,num.imag);
    else printf("%g+%gi\n",num.real,num.imag);
}
//自带的复数函数库
void print_complex(double complex num){
    if(fabs(cimag(num))<1e-12&&fabs(creal(num))<1e-12) printf("0\n");
    else if(fabs(cimag(num))<1e-12) printf("%g\n",creal(num));
    else if(fabs(creal(num))<1e-12) printf("%gi\n",cimag(num));
    else if(cimag(num)<0) printf("%g%gi\n",creal(num),cimag(num));
    else printf("%g+%gi\n",creal(num),cimag(num));
}
