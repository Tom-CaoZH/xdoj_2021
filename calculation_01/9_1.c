#include <stdio.h>


int main(void) {
	double PI = 3.1415926;
	double IRON = 7.86;
	double GLOD = 19.3;
	int dia_iron;
	int dia_glod;
	double v_iron;
	double v_glod;
	scanf("%d %d", &dia_iron, &dia_glod);
	v_iron =  PI * (dia_iron  * 0.05) * (dia_iron * 0.05)  * (dia_iron  * 0.05)  * GLOD * 4 / 3;
	v_glod =  PI * (dia_glod  * 0.05)  * (dia_glod  * 0.05)  * (dia_glod  * 0.05)  * IRON * 4 / 3; 
	printf("%.3f  %.3f", v_glod, v_iron);
	return 0;

}
