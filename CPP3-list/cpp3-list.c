#define _CRT_SECURE_NO_WARNINGS 1

//�����嵥3.1 platinum.c����
//platinum.c -- your weight in platinum
//#include <stdio.h>
//int main(void)
//{
//	float weight;	//�������
//	float value;	//��������İ׽��ֵ
//
//	printf("Are your worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//
//	//��ȡ�û�������
//	scanf("%f", &weight);
//	//����׽�ļ۸���ÿ��˾$1700
//	//14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

//�����嵥3.2 print1.c����
//print1.c - ��ʾprintf()��һЩ����
//#include <stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten);	//��©2������
//
//	return 0;
//}

//�����嵥3.3 bases.c����
//bases.c--��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100
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

//toobig.c-- ����ϵͳ��������intֵ
#include <stdio.h>
int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);

	return 0;
}