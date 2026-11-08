# Домашнее задание к работе 10

## Условие задачи

Составьте программу, которая для заданной пользователем фигуры, например прямоугольника (треугольника или другой фигуры см. индивидуальное задание работы 9) предлагает меню выбора одной из операций:
1) Рассчитать площадь;
2) Вывести определение фигуры;
3) Нарисовать фигуру символом, заданным пользователем
4) Нарисовать фигуру символом *
5) Сравнить площадь двух фигур
6) Вывести параметры фигуры


## 1. Алгоритм и блок-схема

1. Начало.
2. Ввести символ для построения первой трапеции.
3. Ввести высоту, верхнее основание и угол наклона.
4. Вывести меню доступных операций.
5. Ввести номер выбранной операции.
6. Выполнить выбранную операцию:
   - Рассчитать площадь трапеции.
   - Вывести определение прямоугольной трапеции.
   - Нарисовать трапецию символом, заданным пользователем.
   - Нарисовать трапецию символом `*`.
   - Сравнить площадь первой трапеции с площадью второй.
   - Вывести параметры первой трапеции.
7. Если выбрана операция сравнения, ввести параметры второй трапеции и выполнить сравнение площадей.
8. После выполнения операции вернуться к меню.
9. Если выбран пункт `0`, завершить программу.
10. Конец.

### Блок-схема

<img width="662" height="799" alt="{558351BE-BC32-470F-B121-1E36193E806B}" src="https://github.com/user-attachments/assets/3befa775-b6ca-4eed-8cf4-12d2818817c1" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tk5s2EP41nsl15jyIdz7G51ya9tpmknba65cMNpxNDyMPxjk7v74SCAxCxiAL7OTkTHwgJIGlR8%2BuVqtlpN2tdu9jd738DXp%2BOFIVbzfSpiNVBQ7Q0B%2BcsicpigKylEUceCTtkPA5%2BObnGUnqNvD8TSVjAmGYBOtq4hxGkT9PKmluHMOXarYnGFbvunYXfi3h89wN66l%2FB16yJKmqohwu%2FOwHi2V%2BazO%2FsnLz3CRhs3Q9%2BFJK0t6NtLsYwiQ7Wu3u%2FBA3X94wWbn7I1eLJ4v9KGlTYJPUS5BKNsk%2B%2F8GoDGpbdDJ5WQaJ%2F3ntzvGVF9S%2FKG2ZrEJ0BtChu1lnDf4U7Hx0i8kmieFz0UpgbKC0pyAM72AIY5QS4la69dz4%2Bc1I1e7Tz0i9w8dv8b8bnB9Gyb27CkKMlz%2BDFep6Vfndf0Hfn%2BDKjUgWdpVK%2BsmqzI5visfqUiJrk69uuCVtMpoqI2eKvyfKCP1428qP0fck%2FX5HCvlx4u9KbUu64r0PV34S71GWZQktupEVeylBK8cPqUV1yDkZQSop4hJgL4qaD12PDkjvs5EQREobKCDArvEhyuWGoR%2FCReyuUPus%2FRj1TOLH9LWPhwun0PPjgmWzX81gmGYz3RX%2B2dFsk%2F76NE2ZZX%2F2C2YmdOUbF5QMBpQsCkp5noKMBWDpcbna7H%2Fe7uHi%2BcODtbr33V9ebp2sXt%2BrkWsdb3Abz0kuT6lhEFfxmZzCOFnCBYzc8N0hdRLDbeRhAkLDUJsc8jxAuCZg%2B89Pkj2RLe42gVUo%2Brsg%2BYcUx8eP%2BDgFJD6b7kqXpvv8JELN9E%2F5pFQKnx6KpWd5ue74Ct2ZH07c%2BfMi%2FaEtxkf6ueEAPxGvbrzwSR%2F5kcdGXuyHbhJ8rfaucBjlSgAR7u4sRwWDvppwSOHpATcpJcxQ%2ByC%2BmM5RfSl94dEXIDXgLbmwCjwvg5u%2FCb6RJ8E9uoZBlKQ%2F3JiMjClKCaIl4sHkT3%2BXSscDSal3%2BCTFITlMn0u9Q%2BM8%2BQNRZZDgTFmPw9jz46z3KkkZZZKkj67nBdHiEjChxaNORGJb7mIiiBS5Vca2Y2nHUUWq%2B4jbvpQFPj1t%2FKQGu%2BKurZDotZKN8RKuZtvNaxZ0SE4p6RHKq91zCS2LIbQAJbTsqtAqZgbnsA3hNakLcw72t0Tnxd%2BZXmykerHZlxYMKBQA3RAAA69BLZFDnTnUwYBDXRPSx6rs4459rA7Yx7otoo812ccd%2B1gbsI9NRR0LmGl6uuzljr2sD9jLlgjLlGfKPu7Yx8aAfWybAth6baJ59bxVP1dMO6%2B2r2PfDb9k9kLS5%2BTkJ%2FT%2F4wecitoe6Wa2MkaHZogadOIFX9HhIslMFtswQW00dYsaZmkpbG58sywqSNzoTXGzm5u8KnSxVBvzBqQMqDwhOPGILerFD67iBz%2FUPAP5cwP2g4NOT47vgIThlDTSbX7PIzVwjDPbGtdHWmHH3%2BUysmrmtw1tbPVlngXWiMs%2Bi0bual0bpQOaaPPjbibag1X2sXztxzDRMju4tL7YxegGVKfBlEsZ3UgxC4%2Fo0ketwPiwUJrXmD07qeQsQx0b2sTky20yzseGtBn3bzMum47U1tx6AsSGotlVDLaGtFA7cokspTZ7UsPJxDAepWQ9lMjbnD7E67amUchlAhTHEaDduoBPtubeGQML1sh7i71k0OkshPPnLOk%2BCI9hTr0uDJUlYeHVUKaZ9gxyVqerfJ1ePPLr7PWLq2gRjHwmlryzoFQSRrppddWoNL06FQCOUdGwFLMvjco1%2BGB8Ib%2BNK0HxoBMGBlRBS%2BVqAB6MOIWfV9eKJIAGA5B6RQDiFKT5b5AAugSAtCsCkMYJIE0C6HIA0sUCiChSylgB2oW8yCJeVUqXOBwIh4Xfb2FIfsyb46hRmYFdUyx2%2BecJDr0Am%2BFKxMRgL%2FW6q0czp0c6z9JKfRSwTenskVHyFO4%2Bn7ZzQ%2FFZhI7g4e5LOYhBvpSjNtoMUB1tGm0sFDcN30sl%2BCxjUrcBcGHdh71%2BJ2rktJcmhlnFtwEs2mlLIMKlln7t8uTyCDT1%2FhhWl9r562bYIzPOXvFN6euW0R%2B%2Fmpz4NiW%2Bvzt8l%2F0pReraQHWczhjXnArGgQJqvt%2FiYL42Z3w4LzfZ68R6%2F0uoJf%2BX4Rfk0c05TRaX83H80ZDRzWrRzQOgpZQHF5hI6RrtVzS4E6TaRfwPCvKrd67tLCVt3TyBkOPGJjaAHJVtaTpmmQKK01gAHWSP0O12p8zIp%2F1W6K19fbv%2BtsF4rzFtcN0fok3g%2BSQl3Q5OBgPgQGSDd6d1r9URP%2Fxmk7R0N9%2FMfJpf3g1BbffWaUQbNWOUsM0QKudmiCbD3YUC2Iwd3a6a8fVGO%2F5VszF%2B0tLgK8R%2B93mMadpdhbhtOGOn9Kl6lDNso21J8ihZD6YbSJYUwJLrGHXPly%2Be%2FxREQRLA6M1NX1xoGPSO%2BR650BbIhZex1XMsZ141DXJRnm7and2OHWoHoklH3%2BCmOEMdluJaRYOQFHeC4vI4hn2xGoU2EWGd2JzGGYywadlATprP4Cc0b9B19Vx6skzKs4%2BbnnpcZ2zCkKQnAfSUuxiJ5ye9qvJbTY6kZ%2FGTJnL%2BmRs8hyUopAa72zB5YLNOFmKby92SDyfd1SVgn5ohdjXi0e5iQAMdrXh0iRNmPJ0SqEClY7VwEySoxVzs25InJ6lCd1X3ZKSjIa6IiOXG5kiROhy4jBMPB%2F214tWBOBKYJ3eyduVIVCO9UtaN88xjlDkYUUldTkhMWSoIfh6wqi%2Fdro47ICL0A3v6yemH0BDX5%2FsKkP%2F6oi9lrDCAlwsbI0R54o6AdMQzQEZAEoCdnqPma5pR9b9rb2YRuvuRjStOp%2BsrZEIZh64dE6raRZnQOJcJ2TMFyYQ9MGE%2FseCKgIaXjQXXSGEyOlxLO0Y6YHqLdWxZ1JygR3NGl%2B1v12fJHcjiYFpmg58Dl8XhpJG1RQm7k3OldspC8b14V6pyVV0El932bJS1aZjUcMLDYk9fHv7bbO8fF5%2F%2Bep78upq6%2F%2B7e31oSEAIA0TUkez%2BwsSieEuRwy8SNUFt%2BXUgettHMQ3ezCeZV0FRFZKeVS75ZX2XO18NewlFtKtY0Wk9uxaq8U5SAgimoS2hqek8TW5pZ1KaD2muA2opFy6Iq0noTi8xmzcW5VOJP8NzhhSXmgC8sARqNB2E0BuR%2BE8GvS1aW2Z%2FsDcnVJaFsE0pf60G0kq71J%2F1y3wa5Nf96N6VyLNWL28jaKGaER0jULbt9hMR8Kkopiw6v8KYrAkp%2FrpjsZuWMQ9TYR69zhH4XwTPEBLtrVAeERuDQFP3E4Ozsl1iTdYUzREs%2Fw5pFix6zbUe%2FCWhdbejRz7kg2dj%2FcmvAgRI4R9sQ2wlsagIKdEfUfoI%2BvdDY0OOMNdxo55XekV0QaFid44Q4mlOLE0JvlGuLQYe2%2BoqDIDqNIUzK2dFEdPkb9PAa%2BLv%2FAQ%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Программа

Программа написана на языке **C++**.
```cpp
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void print__definition(void);
void draw(char symbol, int h, int b, double ygol);
double area_trapezoid1(int h, int b, double ygol);
double area_trapezoid2(int h1, int b1, double ygol1);
void draw1(char symbol1, int h, int b, double ygol);

main() {
	setlocale(LC_ALL, "RUS");
	int z;
	char symbol, symbol1 = '*';
	int h, b, h1, b1;
	double ygol, ygol1, result1, result2, result3;

	printf("----- Введите данные для первой трапеции -----\n");
	printf("Введите символ из которого будет построена трапеция:");
	scanf("%c", &symbol);
	printf("Введите высоту:");
	scanf("%d", &h);
	printf("Введите верхнее основание b:");
	scanf("%d", &b);
	printf("Введите угол:");
	scanf("%lf", &ygol);

	do {
		printf("\n=======================================================\n");
		printf("                           МЕНЮ                          \n");
		printf("=========================================================\n");
		printf("1) Рассчитать площадь\n");
		printf("2) Вывести определение фигуры\n");
		printf("3) Нарисовать фигуру символом, заданным пользователем\n");
		printf("4) Нарисовать фигуру символом *\n");
		printf("5) Сравнить площадь с другой трапецией\n");
		printf("6) Вывести параметры фигуры\n");
		printf("0) Выйти\n");
		printf("Выберите операцию: ");
		scanf("%d", &z);

		switch (z) {
		case 1: {
			printf("\n\n--- ПЛОЩАДЬ ФИГУРЫ ---\n");
			printf("Площадь заданной трапеции %.2lf\n\n", area_trapezoid1(h, b, ygol));
			continue;
		}
		case 2: {
			print__definition();
			continue;
		}
		case 3: {
			draw(symbol, h, b, ygol);
			continue;
		}
		case 4: {
			draw1(symbol1, h, b, ygol);
			continue;
		}
		case 5: {
			printf("\n\n----- Введите данные для второй трапеции -----\n");
			printf("Введите высоту:");
			scanf("%d", &h1);
			printf("Введите верхнее основание b:");
			scanf("%d", &b1);
			printf("Введите угол:");
			scanf("%lf", &ygol1);
			result1 = area_trapezoid1(h,b,ygol);
			result2 = area_trapezoid2(h1, b1, ygol1);
			result3 = result1-result2;
			printf("Площадь первой трапеции равна %.2lf\n", result1);
			printf("Площадь второй трапеции равна %.2lf\n", result2);
			if (result3 > 0) {
				printf("Первая трапеция больше второй на %.2lf\n\n", result3);
			}
			else if (result3 = 0) {
				printf("Первая и вторая трапеции равны, их площадь равна %.2lf\n\n", result1);
			}
			else {
				printf("Вторая трапеция больше первой на %.2lf\n\n", -result3);
			}
			continue;
		}
		case 6: {
			printf("\n\n------ Параметры фигуры ------ \n");
			printf("Символ из которого будет построена трапеция %c", symbol);
			printf("Высота равна %d\n", h);
			printf("Верхнее основание b равно %d\n", b);
			printf("Угол равен %.2lf\n\n", ygol);
		}
		}
	} 
	while (z != 0);
	return 0;
	
}

double area_trapezoid1(int h, int b, double ygol) {
	double real_ygol = ygol * M_PI / 180.0;
	float a = b + (h / tan(real_ygol));
	return a;
}

double area_trapezoid2(int h1, int b1, double ygol1) {
	double real_ygol1 = ygol1 * M_PI / 180.0;
	float a1 = b1+ (h1 / tan(real_ygol1));
	return a1;
}

void draw(char symbol, int h, int b, double ygol) {
	double real_ygol = ygol * M_PI / 180.0;
	printf("\n\nПрямоугольная трапеция:\n\n");
	for (int y = 0; y < h; y++) {
		int chetchik = b + (y / tan(real_ygol));
		for (int x = 0; x < chetchik; x++) {
			printf("%c", symbol);
		}
		printf("\n");
	}
}

void draw1(char symbol1, int h, int b, double ygol) {
	double real_ygol = ygol * M_PI / 180.0;
	printf("\n\nПрямоугольная трапеция:\n\n");
	for (int y = 0; y < h; y++) {
		int chetchik = b + (y / tan(real_ygol));
		for (int x = 0; x < chetchik; x++) {
			printf("%c", symbol1);
		}
		printf("\n");
	}
}

void print__definition(void) {
	printf("\n\n--- ОПРЕДЕЛЕНИЕ ФИГУРЫ ---\n");
	printf("Прямоугольная трапеция — это четырехугольник (трапеция), у которого один из углов (или оба угла при одной из боковых сторон) является прямым, то есть равен 90\n");
	printf("Основания трапеции параллельны, а высота перпендикулярна обоим основаниям.\n\n");
}
```

## 3. Результаты работы программы

### Вывод меню

```text
----- Введите данные для первой трапеции -----
Введите символ из которого будет построена трапеция:5
Введите высоту:7
Введите верхнее основание b:3
Введите угол:45

=======================================================
                           МЕНЮ
=========================================================
1) Рассчитать площадь
2) Вывести определение фигуры
3) Нарисовать фигуру символом, заданным пользователем
4) Нарисовать фигуру символом *
5) Сравнить площадь с другой трапецией
6) Вывести параметры фигуры
0) Выйти
Выберите операцию:
```

### Пример построения трапеции

```text
Введите символ из которого будет построена трапеция:*
Введите высоту:5
Введите верхнее основание b:3
Введите угол:45

Прямоугольная трапеция:

***
****
*****
******
*******
```

### Пример вывода параметров фигуры

```text
------ Параметры фигуры ------
Символ из которого будет построена трапеция *
Высота равна 5
Верхнее основание b равно 3
Угол равен 45.00
```

### Пример вывода сравнения двух фигур
```text
----- Введите данные для второй трапеции -----
Введите высоту:5
Введите верхнее основание b:3
Введите угол:45
Площадь первой трапеции равна 10,00
Площадь второй трапеции равна 8,00
Первая трапеция больше второй на 2,00
```

## 4. Информация о разработчике

```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
```
