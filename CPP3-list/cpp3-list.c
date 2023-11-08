#define _CRT_SECURE_NO_WARNINGS 1

//程序清单3.1 platinum.c程序
//platinum.c -- your weight in platinum
//#include <stdio.h>
//int main(void)
//{
//	float weight;	//你的体重
//	float value;	//相等重量的白金价值
//
//	printf("Are your worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//
//	//获取用户的输入
//	scanf("%f", &weight);
//	//假设白金的价格是每盎司$1700
//	//14.5833用于把英镑常衡盎司转换为金衡盎司
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

//程序清单3.2 print1.c程序
//print1.c - 演示printf()的一些特性
//#include <stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten);	//遗漏2个参数
//
//	return 0;
//}

//程序清单3.3 bases.c程序
//bases.c--以十进制、八进制、十六进制打印十进制数100
//#include <stdio.h>
//int main(void)
//{
//	int x = 100;
//
//	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
//
//	return 0;
//}

//toobig.c-- 超出系统允许的最大int值
#include <stdio.h>
int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);

	return 0;
}