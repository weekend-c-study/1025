#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	puts("���ڸ� �����ּ���!");
	//scanf_s("%d", &num);
	scanf("%d", &num);

	printf("num : %d\n", num);

	return 0;
}
/*
#include<stdio.h>
int main()
{
	int a=10;
	int b = (a%2==1) ? 10 : 20 ;

	printf("%d\n", b);
	return 0;
}
*/


/*
//���Կ�����
#include<stdio.h>
int main() 
{
	int a = 10;
	//a = a + 10; 
	a += 100;
	printf("a : %d\n", a);
	return 0;
}
//*/

/*
//��Ʈ������
#include<stdio.h>
int main() {
	char a = 60, b = 13;
	printf("%d\n", a & b);
	printf("%d\n", a | b);

	//�κ�Ʈ�� ���� �ٸ��� 1 ������ 0
	printf("%d\n", a ^ b);

	printf("%d\n", ~a);
	printf("%d\n", (char)(a<<2)); //a * 2��2��
	//�콬��Ʈ�ΰ�� ��ȣ��0 �̸� ��ĭ�� 0����
	//�콬��Ʈ�ΰ�� ��ȣ��1 �̸� ��ĭ�� 1����
	printf("%d\n", (char)(a >> 2)); //a * 2��-2��
	a = -16;
	printf("%d\n", (char)(a >> 2));
	return 0;
}
//*/

/*
//��(logical op.)
#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	//�ΰ��� �� true�ΰ�� 1
	printf("%d\n", (a != b) && (a < b));
	printf("%d\n", (a != b) && (a > b));
	printf("%d\n", (a == b) && (a > b));
	printf("%d\n", (a == b) && (a != b));
	//printf("%d\n", a == b && a != b );

	//���߿� 1���� true���� 1
	//�Ѵ� false�̸� false
	printf("%d\n", (a != b) || (a < b));
	printf("%d\n", (a != b) || (a > b));
	printf("%d\n", (a == b) || (a > b));
	printf("%d\n", (a == b) || (a != b));

	printf("%d\n", (a == b));
	printf("%d\n", !(a == b));
	
	
	return 0;
}
//*/

/*
//���迬����
#include<stdio.h>
int main()
{
	int a = 10, b = 20;

	printf("%d\n", a == b);
	printf("%d\n", a != b);
	printf("%d\n", a > b);//a is greater than b
	printf("%d\n", a < b);//a is less than b
	printf("%d\n", a >= b);
	printf("%d\n", a <= b);
	
	return 0;
}
//*/

/*
//���������
#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	printf("a + b = %d\n", a + b);//30
	printf("a - b = %d\n", a - b);//-20
	printf("a * b = %d\n", a * b);//200
	printf("a / b = %d\n", a / b);//0.5
	printf("a % b = %d\n", a % b);//10
	printf("a / b = %f\n", 10.0 / 20);//0.5
	printf("a / b = %0.2f\n", 10.0 / 20);//0.5
	printf("a / b = %g\n", (double)10 / 20);//0.5

	//printf("%f", ((long long)10 + 1.0f));
	printf("------\n");
	printf("a : %d\n", a);
	a++;
	printf("a : %d\n", a);
	++a;
	printf("a : %d\n", a);
	printf("------\n");
	printf("b : %d\n", b);
	b--;
	printf("b : %d\n", b);
	--b;
	printf("b : %d\n", b);
	a = 10;
	printf("------\n");
	printf("a : %d\n", a);
	printf("a : %d\n", ++a);
	printf("a : %d\n", a++);
	printf("a : %d\n", a);

	b = 20;
	printf("------\n");
	printf("b : %d\n", b--);//20
	printf("b : %d\n", --b);//20
	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	//char n = 97;
	char n='a';
	printf("n : %d\n", n);
	printf("n : %c\n", n);
	return 0;
}
//*/
/*
#include<stdio.h>
int main() 
{
	double sum=0.0;

	for (int i=0 ; i<100 ; i++) 
	{
		sum = sum + 0.1;
	}

	printf("��� : %.12f", sum);
	

	return 0;
}
*/

//float : 4byte : ��ȣ:1, ����:8, ����:23
//double : 8byte : ��ȣ:1, ����:11, ����:52

/*
#include<stdio.h>

int main() 
{
	//�ڵ����� ����
	int num;

	num = 10+20;

	printf("num : %d", num);
	//�ڵ����� ��
	return 0;
}
*/