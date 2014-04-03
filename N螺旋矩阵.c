#include <stdio.h>
int arr[20][20];
print_matrix(int N)
{
    int step = 1;
    int i = 0;
    int j = 0;
    int left = 0;
    int right = N - 1;
    int flag = 0;
    while(step <= N*N)
    {
        if (flag == 0)//右
        {
            printf("flag = 0\n");
            for (i = left; j <= right; j++)

            {
                printf("0 :%d %d\n",i,j);
                arr[i][j] = step;
                step++;
            }
            i++;
            j--;
            flag++;
        }
        if (flag == 1)//下
        {
            printf("flag = 1\n");
            for(; i <= right; i++)
            {
                arr[i][j] = step;
                step++;
                printf("1 :%d %d\n",i,j);
            }
            flag++;
            j--;
            i--;
            //step = N*N+1;
        }
        if (flag == 2)//左
        {
            printf("flag = 2\n");
            for(; j >= left; j--)
            {
                arr[i][j] = step;
                step++;
                printf("2 :%d %d\n",i,j);
            }
            flag++;
            j++;
            i--;
            right--;
            left++;
            //step = N*N+1;
        }
        if (flag == 3)//上
        {
            printf("flag = 3\n");
            for(; i>= left; i--)
            {
                arr[i][j] = step;
                step++;
                printf("3 :%d %d\n",i,j);
            }
            j++;
            i++;
            //step = N*N+1;
        }
        flag = 0;//决定下一次前进的方向
        printf("end flag = %d\n",flag);
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print_matrix(n);
    return 0;
}
