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