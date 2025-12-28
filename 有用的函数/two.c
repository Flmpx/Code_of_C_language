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
