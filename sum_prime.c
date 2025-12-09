//如果数出十的六次方以内的素数个数不会用多少时间和空间
/*但是如果是十的九次方呢?即便用bool类型也要用1GB左右的内存,
在C语言的题目中没看到有内存限制达到1GB的吧
那这个时候我们就要利用素数和合数的一些性质
一个合数即便是在十的九次方级别,他也会在他的开平方数以内被一个<<质数>>整除;
埃筛上的第二个循环中有个j=i*i,

10^9开根号后只有三万左右的数,故我们只要在三万以内的素数中一个一个筛出来



废话少说,看代码
*/



#include <stdio.h>
//我这里以xtu oj上的题(素数个数)为例子
/*题目为:
在区间[L,R]中有多少个素数,其中1<=L<=R<=10^9,其中R-L<=10^6

*/
/*
因为R-L<=10^6,所以我们可以建立一个长度为R-L+1的数组
0<--->L
1<--->L+1
.....
R-L<->R

*/
#include <string.h>
#include <stdbool.h>    //用布尔数组来标记素数和合数空间复杂度会小一点,也可以用char
#include <math.h>       //用于计算sqrt(R)
#define MAX 400000
#define ll long long
bool min_prime[MAX+10];
void is_minprime(){
    min_prime[0]=min_prime[1]=1;
    int i,j;
    for(i=2;i<=MAX/i;i++){
        if(!min_prime[i]){
            for(j=i*i;j<=MAX;j+=i){
                min_prime[j]=1;;
            }
        }
    }
}

int main ()
{
    int cnt;
    scanf("%d",&cnt);
    while(cnt--){
        int L,R;
        scanf("%d %d",&L,&R);
        int diff=R-L+1;
        bool diff_prime[diff];
        memset(diff_prime,0,sizeof(diff_prime));
        ll i,j;
        for(i=2;i<=R/i;i++){
            if(!min_prime[i]){
                j=i*i;
                
                if(j<L){
                    j=(L+i-1)/i*i;  //找到第一个大于L且是i的倍数的数

                    /*
                    为什么是这样算呢?
                    把他拆分一下
                        L + (i-1)
                        --------- 
                            i   
                            如果L/i有没有余数,那后面的就为0
                            如果L/i有余数,至少为1,那后面的就为1;
                            这就做到了向上取整;
                            如果用向下取整,那L/i*i就<=L了,我们要的是大于等于L的数
                    */
                }
                /*在与上面的埃筛对比,你就会发现就多了上面这一步,
                如果就j<L,那小于L的那些数并不是我们要看的
                所以就跳过他们

                */

                while(j<=R){
                    diff_prime[j-L]=1;
                    j+=i;
                }
            }
        }
        //开始计算在这diff个数中有多少个是素数
        int cnt=0;
        for(i=0;i<diff;i++){
            if(!diff_prime[i]) cnt++;
        }
        //只有min_prime中我们对0和1进行了处理
        //而在diff_prime中我们并没有处理0和1
        //所以在L==1时要单独减一
        if(L==1){
            printf("%d\n",cnt-1);
        }else{
            printf("%d\n",cnt);
        }
    }

    return 0;
}
