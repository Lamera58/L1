include <iostream>
#include <math.h>
using namespace std;
int main() {
	double a, b, c, D, d, x0, x1, x2; //Параметры, дискриминант и его корень, возможные корни уравнения
	printf("ax^2+bx+c=0 \n");
	printf("введите параметр 'a': \n");
	scanf("%lf", &a);
	if(a == 0)
	{
		printf("неверный ввод \n"); 
	}
	else
	{
		printf("введите параметр 'b': \n");
		scanf("%lf", &b);
		printf("введите параметр 'c': \n");
		scanf("%lf", &c);
		D=(b*b)-4*(a*c);
		if(D<0)
		{
			printf("уравнение не имеет действительных корней");
		}
		else if(D==0)
		{
			printf("уравнение имеет один действительный корень:' \n");
			x0 = -b/(2*a);
			printf("x=%5.2lf \n", x0);
		}
		else
		{
			printf("уравнение имеет два действительных корня: \n");
			d=sqrt(D);
			x1= (-b + d )/2;
			x2= (-b - d)/2;
			printf("x1=%5.2lf \n",x1);
			printf("x2=%5.2lf \n",x2);
		}
	}
	return 0;
}
