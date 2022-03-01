#include<stdio.h>


int cal_tol(int num)
{
		int sum =0;
		while(num > 0)
		{
				sum += num % 10;
				num /= 10;
		}
		return sum;
}

void swap(int* a,int* b);

int main(void)
{
		int size;
		scanf("%d",&size);
		int nums[size];
		int result[size];
		int max_to_min[size];
		for(int i =0;i < size;i++)
		{
				scanf("%d",&nums[i]);
		}
		for(int i =0;i < size;i++)
		{
				result[i] = cal_tol(nums[i]);
		}
		for(int i = 0;i < size;i++)
		{
				for(int j = i+1;j < size;j++)
				{
						if(result[i] < result[j])
						{
								swap(&result[i],&result[j]);
								swap(&nums[i],&nums[j]);
						}
						else if(result[i] == result[j])
						{
								if(nums[i] > nums[j])
								{
										swap(&result[i],&result[j]);
										swap(&nums[i],&nums[j]);
								}
						}
				}
		}
		for(int i =0;i < size;i++)
		{
				printf("%d %d\n",nums[i],result[i]);
		}
		return 0;
}

void swap(int* a,int* b)
{
		int temp = *a;
		*a = *b;
		*b = temp;
}















