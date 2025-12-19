#include <stdio.h>
#include <string.h>
int main ()
{

	int n;
	printf("Please enter you number of your recent calls:");
	scanf("%d",&n);
	int i;
	char arr[n][101];
	printf("Now,enter your recent calls one by one!\n");
	for(i=0;i<n;i++){
		scanf("%s",arr[i]);
	}
	char arr_call[n][101];
	int call_num[n];
	memset(arr_call,0,sizeof(arr_call));
	memset(call_num,0,sizeof(call_num));
	int j;
	int cnt=0;
	printf("Do you want to sum the numbers of every name?\nyou can input \"Yes\" if you want to do it\n");
	char input[101];
	while(scanf("%s",input)&&strcmp(input,"Yes")!=0) printf("really?\n");
	for(i=0;i<n;i++){
		int judge=0;
		int location=0;
		for(j=0;j<cnt;j++){
			if(strcmp(arr_call[j],arr[i])==0){
				location=j;
				judge=1;
				break;
			}
		}
		if(judge){
			call_num[location]++;
		}else{
			call_num[cnt]++;
			strcpy(arr_call[cnt++],arr[i]);

		}
	}
	printf("They can be listed as follow\n");
	for(i=0;i<cnt;i++){
		printf("The number of %s is %d\n",arr_call[i],call_num[i]);
	}

	return 0;
}
