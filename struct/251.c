#include<stdio.h>

typedef struct Data{
		int year;
		int month;
		int day;
}Data_t;
int judge(int y);
int main(void){
		Data_t data1;
		scanf("%d,%d,%d",&data1.year,&data1.month,&data1.day);
		int result = 0;
		switch(data1.month){
				case 1:
						result += 0;
						break;
				case 2:
						result += 59;
						break;
				case 3:
						result += 90;
						break;
				case 4:
						result += 120;
						break;
				case 5:
						result += 151;
						break;
				case 6:
						result += 181;
						break;
				case 7:
						result += 212;
						break;
				case 8:
						result += 243;
						break;
				case 9:
						result += 273;
						break;
				case 10:
						result += 304;
						break;
				case 11:
						result += 334;
						break;
				case 12:
						result += 365;
						break;
		}
		if(judge(data1.year) == 1){
				result++;
		}
		printf("%d",result);
		return 0;
}
int judge(int year){
       	if (0 == year % 4 && year % 100 != 0 || 0 == year % 400)
       	{
				return 1;
       	}
       	else
       	{
				return 0;
       	}
}
