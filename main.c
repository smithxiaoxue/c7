#include <stdio.h>

int main()
{

    {
        char arr[100];
        int index = 0;
        int code = 0;
        printf("jinruminganuanlixitong\n");
        while (1)
        {
            printf("1--tianjiayigeminganzifu\n");
            printf("2--shanchuyigeminganzifu\n");
            printf("3--xianshisuoyouminganzifu\n");
            printf("4--tihuanyigeminganzifu\n");
            printf("5--tuichuxitong\n");
            printf("5--qingshuruxiangyingdegongnengbianhao\n");
            scanf("%d", &code);
            if (code == 1)
            {
                char a;
                char x;
                printf("qingshuruyaochucundeminganzifu\n");
                scanf("%c", &a);
                scanf("%c", &a);
                arr[index] = a;
                index += 1;
                printf("chucunchenggong,dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 2)
            {
                char x;
                printf("shanchuzuihouyigeminganzifu\n");
                index -= 1;
                printf("shanchuchenggong,dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 3)
            {
                char x;
                int i = 0;
                printf("xianshisuoyouminganzifu\n");
                for (; i < index; i++)
                {
                    printf("%c\n", arr[i]);
                }
                printf("dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 4)
            {
                char x;
                int i = 0;
                char str[200];
                printf("qingshuruyiduanwenzi:\n");
                scanf("%s", str);
                for (; str[i] != '\0'; i++)
                {
                    char a = str[i];
                    int j = 0;
                    int flag = 0;
                    for (; j < index; j++)
                    {
                        if (a == arr[j])
                        {
                            flag = 1;
                        }
                    }

                    if (flag != 0)

                    {
                        str[i] = '*';
                    }
                }
                printf("%s\n", str);
                printf("dianjihuichejixu\n");
                scanf("%c", &x);
                scanf("%c", &x);
                if (code == 5)
                {
                    printf("tuichuchengxu\n");
                    break;
                }
            }
        }
        return 0;
    }
}
