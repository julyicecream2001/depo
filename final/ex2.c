#include<stdio.h>

int main()
{
    printf("请输入一段字符\n");
    char name[200];
    int i=0,temp;
    int len=0;
    gets(name);
    while(name[i]!='\0')
    {
        len++;
        i++;
    }
    int left=0,right=len-1;
    while(left<right)
    {
        temp=name[left];
        name[left]=name[right];
        name[right]=temp;
        left++;
        right--;
    }
    for(i=0;i<len;i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
    return 0;
}