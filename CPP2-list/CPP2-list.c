#define _CRT_SECURE_NO_WARNINGS 1

//�����嵥2.1 first.c����
//#include <stdio.h>
//
//int main(void)                //һ���򵥵�C����
//{
//	int num;                  //����һ����Ϊnum�ı���
//	num = 1;                  //Ϊnum��һ��ֵ
//
//	printf("I am a simple "); //ʹ��printf()����
//	printf("computer.\n");
//	printf("My favorite number is %d because it is first.\n",num);
//
//	return 0;
//}

//�����嵥2.2 fathm_ft.c����
//fathm_ft.c -- ��2ӢѰת����Ӣ��
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

//�����嵥2.3 two_func.c����
//two_func.c -- һ���ļ��а�����������
#include <stdio.h>
void butler(void);  //ANSI/ISO C����ԭ��
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)  //�������忪ʼ
{
	printf("You rang, sir?\n");
}