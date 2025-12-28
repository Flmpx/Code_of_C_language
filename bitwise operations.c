#include <stdio.h>
void print_two(unsigned int num){
	int len=sizeof(num)*8;
	unsigned int mask=1U<<(len-1);
	int i;
	for(i=0;i<len;i++){
		if(num&mask) printf("1");
		else printf("0");
		mask>>=1;
		if((i+1)%4==0) printf(" ");
	}

}
int main ()
{

	unsigned int num;
	unsigned int n;
/////////////////////////////////////////////////////////////
	printf("输入的数必须是无符号类型!!!\n");
	printf("&运算(按位与):");
	scanf("%u",&num);
	scanf("%u",&n);
	printf("num的十进制为:%u\n",num);
	printf("num的二进制为:");
	print_two(num);
	printf("\n");
	printf("n的十进制为:%u\n",n);
	printf("n的二进制为:");
	print_two(n);
	printf("\n");
	printf("num&%u的十进制为:%u\n",n,(num&n));
	printf("num&%u的二进制为:",n);
	print_two(num&n);
	printf("\n\n");

/////////////////////////////////////////
	printf("|运算(按位或):");
	scanf("%u",&num);
	scanf("%u",&n);
	printf("num的十进制为:%u\n",num);
	printf("num的二进制为:");
	print_two(num);
	printf("\n");
	printf("n的十进制为:%u\n",n);
	printf("n的二进制为:");
	print_two(n);
	printf("\n");
	printf("num|%u的十进制为:%u\n",n,(num|n));
	printf("num|%u的二进制为:",n);
	print_two(num|n);
	printf("\n\n");
	
///////////////////////////////////////////////////////////////
	printf("^运算(按位异或):");
	scanf("%u",&num);
	scanf("%u",&n);
	printf("num的十进制为:%u\n",num);
	printf("num的二进制为:");
	print_two(num);
	printf("\n");
	printf("n的十进制为:%u\n",n);
	printf("n的二进制为:");
	print_two(n);
	printf("\n");
	printf("num^%u的十进制为:%u\n",n,(num^n));
	printf("num^%u的二进制为:",n);
	print_two(num^n);
	printf("\n\n");

//////////////////////////////////////////////////////
	printf("~运算(按位取反):");
	scanf("%u",&num);
	printf("num的十进制为:%u\n",num);
	printf("num的二进制为:");
	print_two(num);
	printf("\n");
	printf("~num的十进制为:%u\n",(~num));
	printf("~num的二进制为:");
	print_two(~num);
	printf("\n\n");
	
///////////////////////////////////////////////
	printf(">>运算(右移):");
	scanf("%u",&num);
	scanf("%u",&n);
	printf("num的十进制为:%u\n",num);
	printf("num的二进制为:");
	print_two(num);
	printf("\n\n");
	printf("num>>%u的十进制为:%u\n",n,(num>>n));
	printf("num>>%u的二进制为:",n);
	print_two(num>>n);
	printf("\n\n");
/////////////////////////////////////////////////

	printf("<<运算(左移):");
	scanf("%u",&num);
	scanf("%u",&n);
	printf("num的十进制为:%u\n",num);
	printf("num的二进制为:");
	print_two(num);
	printf("\n");
	printf("num<<%u的十进制为:%u\n",n,(num<<n));
	printf("num<<%u的二进制为:",n);
	print_two(num<<n);
	printf("\n\n");
	
	return 0;
}
