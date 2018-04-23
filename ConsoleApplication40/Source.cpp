#include <locale.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include<iostream>
#include"Header.h"
#include<stdlib.h>
using namespace std;

int N;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do {
	
		printf("Введите номер задания");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			//1.	Ввести вещественные числа.Создать массив из этих чисел, пока не встретится число 10. Вычислить сумму отрицательных элементов массива
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int));
			int chet = 1;
			int chislo = 0;
			while (chislo != 10)
			{
				int p=
				printf("Введите данные");
				scanf("%d", (pt + chet - 1));
				chislo = *(pt + chet - 1);
				chet++;
				pt = (int*)realloc(pt, (sizeof(int)*chet));
			}
			PrintMassiv(pt, chet - 1);
			Men0(pt, chet - 1);
		}
		break;
		case 2:
		{
			//2.	Ввести в StringGrid массив из 10 целых чисел.Создать два новых массива – из положительных и отрицательных элементов исходного массива.Определить суммы элементов каждого массива.
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 10);
			int *pt2 = NULL;
			pt2 = (int*)malloc(sizeof(int) * 10);
			int *pt3 = NULL;
			pt3 = (int*)malloc(sizeof(int) * 10);
			int chet = 1;
			int chet2 = 1;
			newMassiv(pt, 10);
			PrintMassiv(pt, 10);
			MassivOp(pt, 10, pt2, pt3, &chet, &chet2);
			PrintMassiv(pt2, chet - 1);
			PrintMassiv(pt3, chet2 - 1);
			summ(pt2, chet - 1);
			summ(pt3, chet2 - 1);

		}
		break;
		case 3:
		{
			//2.	Ввести в StringGrid массив из 10 целых чисел.Создать два новых массива – из положительных и отрицательных элементов исходного массива.Определить суммы элементов каждого массива.
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			Mass10(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			sredd(pt2, chet - 1);
		}
		break;
		case 4:
		{
			//2.	Ввести в StringGrid массив из 10 целых чисел.Создать два новых массива – из положительных и отрицательных элементов исходного массива.Определить суммы элементов каждого массива.
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			MassBol(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			VozPol(pt, chet - 1);
		}
		break;
		case 5:
		{
			//2.	Ввести в StringGrid массив из 10 целых чисел.Создать два новых массива – из положительных и отрицательных элементов исходного массива.Определить суммы элементов каждого массива.
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			MassBol2(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			VozOtr(pt, chet - 1);
		}
		break;
		case 6:
		{
			//6.	Ввести массив из 15 вещественных чисел.Создать новый массив из элементов исходного, в который не включать элементы, попадающие в промежуток(-3, 7).Определить произведение отрицательных элементов нового массива
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 15);
			newMassiv(pt, 15);
			PrintMassiv(pt, 15);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 15);
			int chet = 1;
			Mass37(pt, 15, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			Pol(pt, chet - 1);
		}
		break;
			}
		
	} while (N>0);

}