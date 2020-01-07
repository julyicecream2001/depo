#include<stdio.h>

int main(int argc,char *argv)
{
        int i, max = 0, min = 0, n, k;
        printf("请告诉我需要输入几个数：");
        scanf("%d",&n);
        printf("开始输入：\n");
        scanf("%d",&k);
        max = min = k;
        for(i = 0; i < n-1; i++)
        {   
             scanf("%d",&k);
             if(max < k) max = k;
             else if(min > k) min = k;
        }
        printf("Min parameter is %d\n",min);
}