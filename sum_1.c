#include <stdio.h>
#include <string.h>
int main ()
{

	int n;
	printf("Please enter you size of the array:");
	scanf("%d",&n);
	int i;
	int arr[n];
	printf("Now,enter your number one by one!\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int arr_num[2][n];
	memset(arr_num,0,sizeof(arr_num));
	int j;
	int cnt=0;
	printf("Do you want to sum the numbers of every number?\nyou can input \"Yes\" if you want to do it\n");
	char input[101];
	while(scanf("%s",input)&&strcmp(input,"Yes")!=0) printf("really?\n");
	for(i=0;i<n;i++){
		int judge=0;
		int location=0;
		for(j=0;j<cnt;j++){
			if(arr_num[0][j]==arr[i]){
				location=j;
				judge=1;
				break;
			}
		}
		if(judge){
			arr_num[1][location]++;
		}else{
			arr_num[1][cnt]++;
			arr_num[0][cnt++]=arr[i];

		}
	}
	printf("This can be listed as follow\n");
	for(i=0;i<cnt;i++){
		printf("The number of %d is %d\n",arr_num[0][i],arr_num[1][i]);
	}

	return 0;
}
