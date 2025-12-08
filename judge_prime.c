#include <stdio.h>
#include <stdbool.h>
#define MAX 1000000
#define count 80000             //1000000以内有大约80000个素数
bool is_prime_1[MAX+10];
bool is_prime_2[MAX+10];
int prime[count];

//试除法
bool judge_prime(int m){
    if(m<2) return false;
    int i;
    for(i=2;i<=m/i;++i){
        if(m%i==0){
            return false;
        }
    }
    return true;
}

//埃氏筛
void prime_1(){
    is_prime_1[0]=is_prime_1[1]=1;
    int i,j;
    for(i=2;i<=(MAX+10)/i;++i){
        if(!is_prime_1[i]){
            for(j=i*i;j<=MAX+10;j+=i){
                is_prime_1[j]=1;

            }
        }
    }
}

//欧拉筛(线性筛)
void prime_2(){
    is_prime_2[0]=is_prime_2[1]=1;
    int cnt=0;
    int i,j;
    for(i=2;i<=MAX;++i){
        if(!is_prime_2[i]) prime[cnt++]=i;
        for(j=0;j<cnt&&i*prime[j]<=MAX;++j){
            is_prime_2[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }

}
int main ()
{
    prime_1();
    prime_2();

    int num;
    scanf("%d",&num);
    printf("The number is prime number?\n");

    //
    printf("One:\t");
    if(judge_prime(num)){
        printf("true\n");
    }else{
        printf("false\n");
    }
    
    //
    printf("Two:\t");
    if(!is_prime_1[num]){
        printf("true\n");
    }else{
        printf("false\n");
    }
    
    //
    printf("Three:\t");
    if(!is_prime_2[num]){
        printf("true\n");
    }else{
        printf("false\n");
    }



    return 0;
}
