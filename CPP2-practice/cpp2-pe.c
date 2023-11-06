#define _CRT_SECURE_NO_WARNINGS 1

//2.11-4
//#include <stdio.h>
//int main(void)     //this prints the number of weeks in a year
//{
//	int s;
//
//	s = 52;
//	printf("There are %d weeks in a year.\n", s);
//	return 0;
//}

//2.11-8
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	a = 5;
//	b = 2;  //b = 2, a = 5
//	b = a;  //b = 5, a = 5
//	a = b;  //b = 5, a = 5
//	printf("%d %d\n", b, a);
//	return 0;
//}

//2.11-9
//#include <stdio.h>
//int main(void)
//{
//	int x, y;
//
//	x = 10;
//	y = 5;  //x = 10, y = 5
//	y = x + y;  //x = 10, y = 15
//	x = x * y;  //x = 150, y = 15
//	printf("%d %d", x, y);
//	return 0;
//}

//PE 2-1
//#include <stdio.h>
//int main(void)
//{
//	printf("Li Chuanqiang\n");
//	printf("Li\nChuanqiang\n");
//	printf("Li ");
//	printf("Chuanqiang\n");
//
//	return 0;
//}

//PE 2-3
//#include <stdio.h>
//int main(void)
//{
//	int ageyears;
//	int agedays;
//
//	ageyears = 22;
//	agedays = 365 * ageyears;
//	printf("An age of %d years is %d days.\n", ageyears, agedays);
//	return 0;
//}

//PE 2-4
//#include <stdio.h>
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void)
//{
//	printf("Which nobody can deny!\n");
//}

//PE 2-5
//#include <stdio.h>
//void br(void);
//void ic(void);
//int main(void)
//{
//	br(),
//	printf(",");
//	ic();
//	ic();
//	br();
//
//	return 0;
//}
//void br(void)
//{
//	printf("Brazil,Russia");
//}
//void ic(void)
//{
//	printf("India,China\n");
//}

//PE 2-6
//#include <stdio.h>
//int main(void)
//{
//	int toes = 10;
//	printf("toes = %d\nTwice toes = %d\ntoes squared = %d\n", toes, 2 * toes, toes*toes);
//
//	return 0;
//}

//PE 2-8
#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	
	return 0;
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}