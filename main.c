#include <stdio.h>

int main()
{
    printf("进入敏感字符系统\n");
    while(1){

    printf("1--添加敏感字符\n");
    printf("2--删除敏感字符（最后一个）\n");
    printf("3--查看所有敏感字符\n");
    printf("4--替换内容中的敏感字符\n");
    printf("5--退出\n");

    int code;
    scanf("%d",&code);
    printf("请输入相对应的编号\n");
    if(code == 1){}
    if(code == 2){}
    if(code == 3){}
    if(code == 4){}
    if(code == 5){
        printf("回车退出\n");
        break;
    }
    }

    return 0;
}