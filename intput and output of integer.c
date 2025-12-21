//十六进制,八进制,十进制打印相关,整数类型的各种格式输出
#include <stdio.h>
int main ()
{	

///////////////////////////////////////////////////////////////////
	printf("以下的char,short,int,long,long long为有符号\n\n");
	printf("char类型:");
	char num_char;
	scanf("%hhd",&num_char);
	printf("Ten:%hhd Eight:%hho %#hho Sixteen:%hhx %#hhx %hhX %#hhX",num_char,num_char,num_char,num_char,num_char,num_char,num_char);
	printf("\n");

	printf("short类型:");
	short num_short;
	scanf("%hd",&num_short);
	printf("Ten:%hd Eight:%ho %#ho Sixteen:%hx %#hx %hX %#hX",num_short,num_short,num_short,num_short,num_short,num_short,num_short);
	printf("\n");
	
	printf("int类型:");
	int num_int;
	scanf("%d",&num_int);
	printf("Ten:%d Eight:%o %#o Sixteen:%x %#x %X %#X",num_int,num_int,num_int,num_int,num_int,num_int,num_int);
	printf("\n");
	
	printf("long类型:");
	long num_long;
	scanf("%ld",&num_long);
	printf("Ten:%ld Eight:%lo %#lo Sixteen:%lx %#lx %lX %#lX",num_long,num_long,num_long,num_long,num_long,num_long,num_long);
	printf("\n");

	printf("long long类型:");
	long long num_longlong;
	scanf("%lld",&num_longlong);
	printf("Ten:%lld Eight:%llo %#llo Sixteen:%llx %#llx %llX %#llX",num_longlong,num_longlong,num_longlong,num_longlong,num_longlong,num_longlong,num_longlong);
	printf("\n");
	
//////////////////////////////////////////////////////////////////
	printf("以下的char,short,int,long,long long为无符号类型\n\n");

	printf("unsigned char类型:");
	unsigned char num_unsigned_char;
	scanf("%hhu",&num_unsigned_char);
	printf("Ten:%hhu Eight:%hho %#hho Sixteen:%hhx %#hhx %hhX %#hhX",num_unsigned_char,num_unsigned_char,num_unsigned_char,num_unsigned_char,num_unsigned_char,num_unsigned_char,num_unsigned_char);
	printf("\n");

	printf("unsigned short类型:");
	unsigned short num_unsigned_short;
	scanf("%hu",&num_unsigned_short);
	printf("Ten:%hu Eight:%ho %#ho Sixteen:%hx %#hx %hX %#hX",num_unsigned_short,num_unsigned_short,num_unsigned_short,num_unsigned_short,num_unsigned_short,num_unsigned_short,num_unsigned_short);
	printf("\n");
	
	printf("unsigned int类型:");
	unsigned int num_unsigned_int;
	scanf("%u",&num_unsigned_int);
	printf("Ten:%u Eight:%o %#o Sixteen:%x %#x %X %#X",num_unsigned_int,num_unsigned_int,num_unsigned_int,num_unsigned_int,num_unsigned_int,num_unsigned_int,num_unsigned_int);
	printf("\n");
	
	printf("unsigned long类型:");
	unsigned long num_unsigned_long;
	scanf("%lu",&num_unsigned_long);
	printf("Ten:%lu Eight:%lo %#lo Sixteen:%lx %#lx %lX %#lX",num_unsigned_long,num_unsigned_long,num_unsigned_long,num_unsigned_long,num_unsigned_long,num_unsigned_long,num_unsigned_long);
	printf("\n");

	printf("unsigned long long类型:");
	unsigned long long num_unsigned_longlong;
	scanf("%llu",&num_unsigned_longlong);
	printf("Ten:%llu Eight:%llo %#llo Sixteen:%llx %#llx %llX %#llX",num_unsigned_longlong,num_unsigned_longlong,num_unsigned_longlong,num_unsigned_longlong,num_unsigned_longlong,num_unsigned_longlong,num_unsigned_longlong);
	printf("\n");

	return 0;
}
