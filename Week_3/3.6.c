/*
 * 求一个5 X 5数阵中的马鞍数，输出它的位置。所谓马鞍数，是指在行上最小
 * 而在列上最大的数。如下：
 * 5 6 7 8 9
 * 4 5 6 7 8
 * 3 4 5 2 1
 * 2 3 4 9 0
 * 1 2 5 4 8
 * 则1行1列上的数就是马鞍数。
 */

#include<stdio.h>
int main(void)
{
    int i,j,min,temp,k;
    int a[5][5];
    printf("请输入一个5*5的数阵：\n");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);//得到一个有用户输入的5*5的数阵
    for(i=0;i<5;i++)//在每一行中进行单独的判断
    {
        for(j=1;j<5;j++)
        {
            min=a[i][0];//先将最小值设为当行的第一个数
            temp=0;//记录这个最小数的列标
            if(a[i][j]<min)//将后面的四个数与第一个数逐一比较判断得出最小值
            {
                min=a[i][j];
                temp=j;//随最小数的更改改变最小数的列标
            }
        }
        for(k=0;k<5;k++)//将这行的最小数与它所在的列比较，判断是否为当列的最大值
        {
            if(min<a[k][temp])
                break;//如果不是最大值这个数就不满足马鞍数，退出循环
        }
        if(k==5)
        {
            printf("马鞍数是第%d行,第%d列的%d\n",i+1,temp+1,a[i][temp]);
            break;//如果满足上一个循环，则k为5，那么就满足马鞍数，输出该数。
        }    
    }
    if(i==5)
        printf("没有马鞍数。");
    return 0;
}