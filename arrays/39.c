#include<stdio.h>

int check_col_max(int nums[],int index,int target);
int main(void)
{
		int col,row;
		scanf("%d %d",&row,&col);
		int nums[row][col];
		for(int i =0;i < row;i++)
		{
				for(int j = 0;j < col;j++)
				{
						scanf("%d",&nums[i][j]);
				}
		}
		return 0;
}
