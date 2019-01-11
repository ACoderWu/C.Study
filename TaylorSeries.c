/*
各种三角函数都可以转成计算sin x（0≤x≤π/2）。
*将sin x泰勒展开：sin x = x - x^3/3! + x^5/5! - x^7/7! + ...至于展开多少项，看精度。
*当然，你也可以转成计算cos x（0≤x≤π/2）。
*将cos x泰勒展开：cos x = 1 - x^2/2! + x^4/4! - x^6/6! + ...项数取决于精度。
*/

#include <stdio.h>
#include <math.h>

double sinx(double x);
double cosx(double x);

int main()
{
	double x = 0;
	double sx = 0;
	double cx = 0;

    loop:
	{
    scanf("%lf",&x);
	sx = sinx(x);
	cx = cosx(x);
	printf("sin%.2lf = %.2lf\n",x,sx);
	printf("cos%.2lf = %.2lf\n",x,sx);
    }
    goto loop;

	return 0;
}

double sinx(double x)
{
	double y = x;
	double z = 0;
    int j =1;
	for (int i = 3; i < 30; i += 2)
	{
        j++;
		z = pow(x,i)/i;
        if((j%2) == 0)
        {
            z = -z;
        }
		y += z;
	}
	
	return y;
}

double cosx(double x)
{
	double y = 1;
	double z = 0;
    int j = 1;
	for (int i = 2; i < 30; i += 2)
	{
        j++;
		z = pow(x,i)/i;
        if((j%2) == 0)
        {
            z = -z;
        }
		y += z;
	}
	
	return y;
}