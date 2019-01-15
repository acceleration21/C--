#include <stdio.h>

int main()
{
    int arr[1024];
    int index = 0;
    printf("进入敏感字符系统\n");
    while (1)
    {

        printf("1--添加敏感字符\n");
        printf("2--删除敏感字符（最后一个）\n");
        printf("3--查看所有敏感字符\n");
        printf("4--替换内容中的敏感字符\n");
        printf("5--退出\n");

        int code;
        scanf("%d", &code);
        printf("请输入相对应的编号\n");
        if (code == 1)
        {
            printf("输入要添加的敏感字符:\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);

            arr[index] = m;
            index++;

            printf("添加成功,回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("删除最后一个敏感字符\n");
            index--;

            printf("删除成功，回车继续");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("敏感字符如下:\n");
            
            for(int i = 0; i < index; i++)
            {
                printf("第%d个敏感字符%c\n",i +1 ,arr[i]);
            }
            printf("回车继续");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("回车退出\n");
            break;
        }
    }

    return 0;
}