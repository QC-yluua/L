#include<stdio.h>
#define SIZE 10
void tianjia();
void shanchu();
void xiugai();
void chazhao();
void tuichu();
int a[SIZE]={1,45,6,89,4,5};
int i,j,num,choice,length=6,m=0,n;
int main()
{
	printf("当前数组：");
	for(i=0;i<length;i++)printf("%d ",a[i]);
	printf("数组的最大容量是%d",SIZE);
	printf("当前数组有%d个元素",length);
	while(1)
	{
		printf("\n请选择操作：\n");
		printf("1.添加元素\n");
		printf("2.删除元素\n");
		printf("3.修改元素\n");
		printf("4.查找元素\n");
		printf("5.退出程序\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:tianjia();break;
			case 2:shanchu();break;
			case 3:xiugai();break;
			case 4:chazhao();break;
			case 5:tuichu();return 0;
			default:("没有找到此数字！");		
		}
		printf("\n操作后的数组：");
		for(i=0;i<length;i++)printf("%d ",a[i]);
	}
}
void tianjia()
{
	if(length>=SIZE)printf("当前数组已满\n"); 
	else 
		{
		printf("请输入要添加的数字：");
		scanf("%d",&num);
		a[length]=num;
		length++;
		printf("添加成功！\n");
		}
}
void shanchu()
{
	printf("请输入要删除的数字："); 
	scanf("%d",&num);
	for(i=0;i<length;i++)
	{
	 if(a[i]==num)
	 {
	 for(j=i;j<length-1;j++)a[j]=a[j+1];
	 length--;m=1;
	 }
	}
	if(m==1)printf("删除成功！");
	else printf("没有此数字");
}
void xiugai()
{
	printf("请输入要修改的数字："); 
	scanf("%d",&num);
	printf("请输入你想要改为的数字：");
	printf("%d",&n);
	for(i=0;i<length;i++)
	{if(a[i]==num){a[i]=n;m=1;}} 
	if(m==1)printf("修改成功！");
	else printf("没有此数字！");
}
void chazhao()
{
	printf("请输入要查找的数字："); 
	scanf("%d",&num);
	for(i=0;i<length;i++)
	{if(a[i]==num){printf("这个数是第%d个数字",i+1);m=1;}}
	if(m!=1)printf("没有此数字！");
}
void tuichu()
{
	printf("\n感谢使用！\n");
}
