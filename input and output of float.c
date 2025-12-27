//浮点数类型的输入输出,以及普通科学计数法和十六进制的科学计数法,以及最简形式
#include <stdio.h>
int main ()
{
	printf("最简形式\"%%g %%G\"当数字(十进制)的范围在[10^-4,1000000)采用普通计数法,其他情况采用科学计数法,作用是删除末尾不必要的0\n");
	printf("float类型:");
	float num_float;
	scanf("%f",&num_float);
	printf("十进制:%f 最简形式:%g %G 科学计数法:%e %E 十六进制:%a %A",num_float,num_float,num_float,num_float,num_float,num_float,num_float);
	printf("\n");
	
	printf("double类型:");
	double num_double;
	scanf("%lf",&num_double);
	printf("十进制:%f 最简形式:%g %G 科学计数法:%e %E 十六进制:%a %A",num_double,num_double,num_double,num_double,num_double,num_double,num_double);
	printf("\n");
	
	printf("long double类型:");
	long double num_Ldouble;
	scanf("%Lf",&num_Ldouble);
	printf("十进制:%Lf 最简形式:%Lg %LG 科学计数法:%Le %LE 十六进制:%La %LA",num_Ldouble,num_Ldouble,num_Ldouble,num_Ldouble,num_Ldouble,num_Ldouble,num_Ldouble);
	printf("\n");
	

	return 0;
}
