#include<stdio.h>

int check(int nums[],int index);
int main(void)
{
		int num;
		scanf("%d",&num);
		int sum =0;
		int nums[10];
		int index = 0;
		while(num > 0)
		{
				int temp = num % 10;
				sum += temp;
				nums[index] = temp;
				index++;
				num /= 10;
		}
		if(check(nums,index))
		{
				printf("%d",sum);
		}
		else
		{
				printf("no");
		}
		return 0;
}
int check(int nums[],int index)
{
		int pre = 0;
		int last = index - 1;
		do
		{
				if(nums[pre] != nums[last])
				{
						return 0;
				}
				pre++;
				last--;
		}while(last - pre != 1 && last - pre != 0);
		return 1;
}
