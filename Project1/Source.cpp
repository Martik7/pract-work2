#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task7()
{
	/*
	Почтовый автомат предлагает поздравительные открытки на три темы (1Новогодние, 2 - С Днем Рождения, 3 - С Днем Защитника Отечества) в трех вариантах (a, b, c) по цене 2 тенге.
	Ввести с клавиатуры номер темы, вариант, и купюру оплаты (5,10, 20 тенге).
	Выдать нужную открытку (сообщение, например: «Новогодние, вариант с», а также сдачу (купюрами 1,2,5,10) с виде сообщения, например, «2тн+1тн».
	Предусмотреть обработку неправильного номера или варианта.
	*/

	int NewYear, HappyBirthday, Zashitnik, Tema, var, oplata;
	printf("Введите номер темы: ");
	scanf_s("%d", &Tema);

	printf("Введите вариант: ");
	scanf_s("%d", &var);

	printf("Введите купюру оплаты: ");
	scanf_s("%d", &oplata);

		if (Tema == 1 && var == 1)
		{
			int result = oplata - 100;
			printf("Сдача: %d");
		}
		else if(Tema == 1 && var == 1)
		{
			printf("Недостаточно средств!");
		}

}



void task6()
{
	/*
	2.	Написать программу, которая в зависимости от характера ветра выдает сообщение о его скорости от 1 до 4 м/с - слабый (1);
	от 5-10 м/c умеренный (2); от 9-18 м/c - сильный (3); больше 19 м/c - ураганный (4).
	*/

	int Vveter;
	
	printf("Скорость ветра: ");
	scanf_s("%d", &Vveter);

	if (Vveter >= 1 && Vveter<= 4)
	{
		printf("Слабый\n");
	}
	else if (Vveter >= 5 && Vveter<= 10)
	{
		printf("Умеренный\n");
	}
	else if (Vveter >= 9 && Vveter<= 18)
	{
		printf("Сильный\n");
	}
	else if (Vveter > 19)
	{
		printf("Ураганный\n");
	}

}


void task5()
{
	/*6.Ввести число от 1 до 31. Определить ближайшую (следующую) дату полнолуния или новолуния (лунных месяц содержит 28 дней), если последнее полнолуние было 27 августа*/

	float Number, Polnolunie, Novolunie, Month, day;
	printf("Введите число от 1 до 31 и месяц от 1 до 12: ");
	scanf_s("%f%f", &Number, &Month);

	day = 27.08;
	Novolunie = (8 * 31) + 27 + 28;
	printf("Новолуние: \n", Novolunie);

	Polnolunie = (8 * 31) + 27 + 14;
	printf("Полнолуние: \n", Polnolunie);

}


void task4()
{
	int staj, avgBall, koefficient;
	printf("Введите стаж работы: ");
	scanf_s("%d", &staj);

	printf("Введите средний балл по диплому: ");
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
		printf("Вы прошли!\n");
	}
	else
	{
		printf("Вы не прошли!\n");
	}
}



void task3()
{
	/*
	3.	Дано трехзначное число. Определить: 
a.	является ли сумма его цифр двухзначным числом; 
b.	является ли произведение его цифр трехзначным число
	*/
	srand(time(NULL));

	int a = 0 + rand() % 333;
	if (a <= 99)
	{
		printf("Число двухзначное \n");
	}
	else if (a >= 99)
	{
		printf("Число трехзначное \n");
	}

}


void task2()
{
	/*
	2.Дано целое число от 1 до 365. Определить, какой день недели выпадает на это число, если 1 января – понедельник.
	*/

	int Number, day;
	printf("Введите число от 1 до 365: ");
	scanf_s("%d", &Number);

	day = Number % 7;

	switch (day)
	{
	case 1:
	{
		printf("Понедельник\n");
	}break;

	case 2:
	{
		printf("Вторник\n");
	}break;

	case 3:
	{
		printf("Среда\n");
	}break;

	case 4:
	{
		printf("Четверг\n");
	}break;
	case 5:
	{
		printf("Пятница\n");
	}break;
	case 6:
	{
		printf("Суббота\n");
	}break;
	case 7:
	{
		printf("Воскресенье\n");
	}break;

	default:
		break;
	}
}


void task1()
{
	/*
	1.Составить расписание на неделю. Пользователь вводит порядковый номер дня недели и у него на экране отображается, то, что запланировано на этот день.
	*/


	int DayWeek;

	printf("Введите порядковый номер дня недели: ");
	scanf_s("%d", &DayWeek);


	switch (DayWeek)
	{
	case 1:
	{
		printf("Понедельник");
	}break;

	case 2:
	{
		printf("Вторник\n");
	}break;

	case 3:
	{
		printf("Среда\n");
	}break;

	case 4:
	{
		printf("Четверг\n");
	}break;

	case 5:
	{
		printf("Пятница\n");
	}break;

	case 6:
	{
		printf("Суббота\n");
	}break;

	case 7:
	{
		printf("Воскресенье");
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
	printf("Введите номер задания: ");
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

	printf("Хотите продолжить 1/0? \n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}