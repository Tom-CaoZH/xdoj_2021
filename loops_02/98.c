#include<stdio.h>

int main(void)
{
		float score = 0.0;
		scanf("%f",&score);
		int judge = score / 10;
		char std;
		switch(judge)
		{
				case 10:
				case 9:
						std = 'A';
						break;
				case 8:
						std = 'B';
						break;
				case 7:
						std = 'C';
						break;
				case 6:
						std = 'D';
						break;
				default:
						std = 'E';
						break;
		}
		printf("%.2f %c",score,std);
		return 0;
}
