#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task7()
{
	/*
	�������� ������� ���������� ��������������� �������� �� ��� ���� (1����������, 2 - � ���� ��������, 3 - � ���� ��������� ���������) � ���� ��������� (a, b, c) �� ���� 2 �����.
	������ � ���������� ����� ����, �������, � ������ ������ (5,10, 20 �����).
	������ ������ �������� (���������, ��������: �����������, ������� �, � ����� ����� (�������� 1,2,5,10) � ���� ���������, ��������, �2��+1��.
	������������� ��������� ������������� ������ ��� ��������.
	*/

	int NewYear, HappyBirthday, Zashitnik, Tema, var, oplata;
	printf("������� ����� ����: ");
	scanf_s("%d", &Tema);

	printf("������� �������: ");
	scanf_s("%d", &var);

	printf("������� ������ ������: ");
	scanf_s("%d", &oplata);

		if (Tema == 1 && var == 1)
		{
			int result = oplata - 100;
			printf("�����: %d");
		}
		else if(Tema == 1 && var == 1)
		{
			printf("������������ �������!");
		}

}



void task6()
{
	/*
	2.	�������� ���������, ������� � ����������� �� ��������� ����� ������ ��������� � ��� �������� �� 1 �� 4 �/� - ������ (1);
	�� 5-10 �/c ��������� (2); �� 9-18 �/c - ������� (3); ������ 19 �/c - ��������� (4).
	*/

	int Vveter;
	
	printf("�������� �����: ");
	scanf_s("%d", &Vveter);

	if (Vveter >= 1 && Vveter<= 4)
	{
		printf("������\n");
	}
	else if (Vveter >= 5 && Vveter<= 10)
	{
		printf("���������\n");
	}
	else if (Vveter >= 9 && Vveter<= 18)
	{
		printf("�������\n");
	}
	else if (Vveter > 19)
	{
		printf("���������\n");
	}

}


void task5()
{
	/*6.������ ����� �� 1 �� 31. ���������� ��������� (���������) ���� ���������� ��� ��������� (������ ����� �������� 28 ����), ���� ��������� ���������� ���� 27 �������*/

	float Number, Polnolunie, Novolunie, Month, day;
	printf("������� ����� �� 1 �� 31 � ����� �� 1 �� 12: ");
	scanf_s("%f%f", &Number, &Month);

	day = 27.08;
	Novolunie = (8 * 31) + 27 + 28;
	printf("���������: \n", Novolunie);

	Polnolunie = (8 * 31) + 27 + 14;
	printf("����������: \n", Polnolunie);

}


void task4()
{
	int staj, avgBall, koefficient;
	printf("������� ���� ������: ");
	scanf_s("%d", &staj);

	printf("������� ������� ���� �� �������: ");
	scanf_s("$d", &avgBall);

	if (staj == 0)
		koefficient = 1;
	else if (staj > 0 && staj <= 2)
		koefficient = 13;
	else if (staj > 2 && staj <= 5)
		koefficient = 16;

	float inBall = avgBall * koefficient;
	

	if (avgBall >= 45)
	{
		printf("�� ������!\n");
	}
	else
	{
		printf("�� �� ������!\n");
	}
}



void task3()
{
	/*
	3.	���� ����������� �����. ����������: 
a.	�������� �� ����� ��� ���� ����������� ������; 
b.	�������� �� ������������ ��� ���� ����������� �����
	*/
	srand(time(NULL));

	int a = 0 + rand() % 333;
	if (a <= 99)
	{
		printf("����� ����������� \n");
	}
	else if (a >= 99)
	{
		printf("����� ����������� \n");
	}

}


void task2()
{
	/*
	2.���� ����� ����� �� 1 �� 365. ����������, ����� ���� ������ �������� �� ��� �����, ���� 1 ������ � �����������.
	*/

	int Number, day;
	printf("������� ����� �� 1 �� 365: ");
	scanf_s("%d", &Number);

	day = Number % 7;

	switch (day)
	{
	case 1:
	{
		printf("�����������\n");
	}break;

	case 2:
	{
		printf("�������\n");
	}break;

	case 3:
	{
		printf("�����\n");
	}break;

	case 4:
	{
		printf("�������\n");
	}break;
	case 5:
	{
		printf("�������\n");
	}break;
	case 6:
	{
		printf("�������\n");
	}break;
	case 7:
	{
		printf("�����������\n");
	}break;

	default:
		break;
	}
}


void task1()
{
	/*
	1.��������� ���������� �� ������. ������������ ������ ���������� ����� ��� ������ � � ���� �� ������ ������������, ��, ��� ������������� �� ���� ����.
	*/


	int DayWeek;

	printf("������� ���������� ����� ��� ������: ");
	scanf_s("%d", &DayWeek);


	switch (DayWeek)
	{
	case 1:
	{
		printf("�����������");
	}break;

	case 2:
	{
		printf("�������\n");
	}break;

	case 3:
	{
		printf("�����\n");
	}break;

	case 4:
	{
		printf("�������\n");
	}break;

	case 5:
	{
		printf("�������\n");
	}break;

	case 6:
	{
		printf("�������\n");
	}break;

	case 7:
	{
		printf("�����������");
	}break;

	default:
		break;
	}


}



int main()
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("������� ����� �������: ");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:
	{
		task1();
	}break;

	case 2:
	{
		task2();
	}break;
	
	case 3:
	{
		task3();
	}break;

	case 4:
	{
		task4();
	}

	case 5:
	{
		task5();
	}break;

	case 6:
	{
		task6();
	}break;

	case 7:
	{
		task7();
	}break;

	default:
		break;
	}

	printf("������ ���������� 1/0? \n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}