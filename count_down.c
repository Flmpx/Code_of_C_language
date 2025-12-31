#include <stdio.h>
#include <unistd.h>
int main ()
{


    printf("你要计时多少,按照下面格式书写\n时 分 秒\n12:12:12\n");
    int hou=-1,min=-1,sec=-1;
    while(scanf("%d:%d:%d",&hou,&min,&sec)!=3||min>60||min<0||sec>60||sec<0){
        while(getchar()!='\n');
        printf("格式错误!\n");
    }
    int all_time=hou*3600+min*60+sec;
    int i;
    for(i=0;i<all_time;i++){
        printf("倒计时:%02d时%02d分%02d秒\r",(all_time-i)/3600,(all_time-i)%3600/60,(all_time-i)%60);
        sleep(1);
    }
    printf("--------------------------\n");
    printf("倒计时结束!总共%d秒!\n",all_time);
    printf("--------------------------\n");
    getchar();
    getchar();
    return 0;
}
