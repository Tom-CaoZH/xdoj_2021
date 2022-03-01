#include<stdio.h>

int main(void)
{
		float elc_amount = 0.0;
		scanf("%f",&elc_amount);
		float elc_fee;
		float over_std;
		char std;
		int fee_std1 = 55;
		int fee_std2 = 110;
		if(elc_amount >=0 && elc_amount <= 110)
		{
				std = 'A';
				over_std = 0.0;
				elc_fee = 0.5*elc_amount;
		}
		else if(elc_amount > 110 && elc_amount <= 210)
		{
				std = 'B';
				over_std = elc_amount - 110;
				elc_fee = fee_std1 + 0.55*over_std;
		}
		else if(elc_amount > 210)
		{
				std = 'C';
				over_std = elc_amount - 210;
				elc_fee = fee_std2 + 0.70*over_std;
		}
		printf("%.2f %c %.2f",elc_fee,std,over_std);
		return 0;
}
