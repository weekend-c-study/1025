#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	puts("숫자를 넣으주세요!");
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
//대입연산자
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
//비트연산자
#include<stdio.h>
int main() {
	char a = 60, b = 13;
	printf("%d\n", a & b);
	printf("%d\n", a | b);

	//두비트가 서로 다르면 1 같으면 0
	printf("%d\n", a ^ b);

	printf("%d\n", ~a);
	printf("%d\n", (char)(a<<2)); //a * 2의2승
	//우쉬프트인경우 부호가0 이면 빈칸은 0으로
	//우쉬프트인경우 부호가1 이면 빈칸은 1으로
	printf("%d\n", (char)(a >> 2)); //a * 2의-2승
	a = -16;
	printf("%d\n", (char)(a >> 2));
	return 0;
}
//*/

/*
//논리(logical op.)
#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	//두개가 다 true인경우 1
	printf("%d\n", (a != b) && (a < b));
	printf("%d\n", (a != b) && (a > b));
	printf("%d\n", (a == b) && (a > b));
	printf("%d\n", (a == b) && (a != b));
	//printf("%d\n", a == b && a != b );

	//두중에 1개만 true여도 1
	//둘다 false이면 false
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
//관계연산자
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
//산술연산자
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

	printf("결과 : %.12f", sum);
	

	return 0;
}
*/

//float : 4byte : 부호:1, 지수:8, 가수:23
//double : 8byte : 부호:1, 지수:11, 가수:52

/*
#include<stdio.h>

int main() 
{
	//코딩영역 시작
	int num;

	num = 10+20;

	printf("num : %d", num);
	//코딩영역 끝
	return 0;
}
*/