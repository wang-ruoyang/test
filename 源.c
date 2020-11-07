//第一章例题与习题
/*#include<stdio.h>//求圆柱体表面积
#include<math.h>
void main()
{
	const double pi = acos(-1.0);
	double r, h, s1, s2, s;
	scanf_s("%lf%lf", &r, &h);
	s1 = pi * r * r;
	s2 = 2 * pi * r * h;
	s = s1 * 2.0 + s2;
	printf("Area=%.3f\n", s);
}*/
/*#include<stdio.h>//三位数反转
void main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);

}*/
/*#include<stdio.h>//鸡兔同笼
void main()
{
	int a, b, m, n;
	scanf_s("%d%d", &n, &m);
	a = (4 * n - m) / 2;
		b = n - a;
		if (m % 2 == 1 || a < 0 || b < 0)
			printf("No answer\n");
		else
			printf("%d %d\n", a, b);
}*/

/*
#include<stdio.h>//平均数
void main()
{
	int a, b, c,d;
	scanf_s("%d%d%d", &a, &b, &c);
	d = (double)(a + b + c);
	printf("%.3lf", d / 3.0);
}*/
/*#include<stdio.h>//连续和
void main()
{
	int n,i,sum=0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum += i;
	printf("%d", sum);
}*/
/*
#include<stdio.h>//正弦和余弦
#include<math.h>
void main()
{
	const double pi = acos(-1.0);
	int n;
	scanf_s("%d", &n);
	if (n > 360)
		printf("No answer");
	else
	printf("sin=%lf cos=%lf", sin(pi*n/180), cos(pi*n/180));
}
*/
#include<stdio.h>//打折
void main()
{
	int n,sum=0;
	scanf_s("%d", &n);
	sum = 95 * n;
		if (sum < 300)
			printf("%d", sum);
		else
			printf("%.2lf", sum * 0.85);
}