#define _CRT_SECURE_NO_WARNINGS 1

//程序清单2.1 first.c程序
//#include <stdio.h>
//
//int main(void)                //一个简单的C程序
//{
//	int num;                  //定义一个名为num的变量
//	num = 1;                  //为num赋一个值
//
//	printf("I am a simple "); //使用printf()函数
//	printf("computer.\n");
//	printf("My favorite number is %d because it is first.\n",num);
//
//	return 0;
//}

//程序清单2.2 fathm_ft.c程序
//fathm_ft.c -- 把2英寻转换成英尺
//#include <stdio.h>
//int main(void)
//{
//	int feet, fathoms;
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes,I said %d feet!\n", 6 * fathoms);
//
//	return 0;
//}

//程序清单2.3 two_func.c程序
//two_func.c -- 一个文件中包含两个函数
#include <stdio.h>
void butler(void);  //ANSI/ISO C函数原型
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)  //函数定义开始
{
	printf("You rang, sir?\n");
}