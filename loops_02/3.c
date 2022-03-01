
#include<stdio.h>

int abs(int n);
int main(void)
{
		int n;
		scanf("%d",&n);
		int array[n];
		for(int i =0;i < n;i++)
		{
				scanf("%d",&array[i]);
		}
		int min = abs(array[0]-array[1]);
		for(int i = 0;i<n;i++)
		{
				for(int j = i+1;j<n;j++)
				{
						if(abs(array[i]-array[j])<min)
						{
								min = abs(array[i]-array[j]);
						}
				
				}
		}
		printf("%d",min);
		



		return 0;
}
int abs(int n)
{
		if(n>=0)
		{
				return n;
		}
		else
		{
				return (-n);
		}

}
