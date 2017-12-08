/*
 * 设有一数列，包含 10 个数，已按升序排好。现要求编一程序，它
 * 能够把从指定位置开始的 n 个数按逆序重新排列并输出新的完整
 * 数列。进行逆序处理时要求使用指针方法。试编程。（ 例如：原数
 * 列为 2， 4， 6， 8， 10， 12， 14， 16， 18， 20，若要求把从第 4 个
 * 数开始的 5 个数按逆序重新排列，则得到新数列为 2， 4， 6， 16，
 * 14， 12， 10， 8， 18， 20。）
 */

#include<stdio.h>
int main(void)
{
    int a[10];
    int n,m,i,temp;//n记录开始变化的位置，m记录变化的长度,temp作为交换的中间值
    int *p,*q;
    printf("请输入一串按升序排列的含有10个数值的数列：\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("请输入要从第几个数开始变化：\n");
    scanf("%d",&n);

    printf("请输入要对多少数进行倒序操作：\n");
    scanf("%d",&m);

    /*从头尾两边一起推进，交换首尾所指指针的数值*/
    for(p=a+n-1,q=a+n+m-2;p<=q;p++,q--)
    {
        temp=*p;
        *p=*q;
        *q=temp;
    }
    /*output*/
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
