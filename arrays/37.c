#include<stdio.h>

void bubble_sort(int digit[],int size);

int main(void)
{
		int size;
		scanf("%d",&size);
		int nums[size];
		int odd[100];
		int even[100];
		for(int i =0;i < size;i++)
		{
				scanf("%d",&nums[i]);
		}
		int index_odd = 0;
		int index_even = 0;
		for(int i =0;i < size;i++)
		{
				if(nums[i] % 2 == 0)
				{
						even[index_even] = nums[i];
						index_even++;
				}
				else
				{
						odd[index_odd] = nums[i];
						index_odd++;

				}
		}
		bubble_sort(odd,index_odd);
		bubble_sort(even,index_even);
		for(int i = 0;i < index_even;i++)
		{
				printf("%d ",even[i]);
		}
		for(int i = 0;i < index_odd;i++)
		{
				printf("%d ",odd[i]);
		}
		return 0;
}
void bubble_sort(int digit[],int size)
{
		for(int i = 0;i < size;i++)
		{
				for(int j = 0;j < size - i - 1;j++)
				{
						if(digit[j] < digit[j+1])
						{
								int temp = digit[j+1];
								digit[j+1] = digit[j];
								digit[j] = temp;
						}
				}
		}

}
