
#include <stdio.h>
#include <locale.h>

float area_figure(int x, int y);
void definition_figure(void);
void draw_figure(char symbol, int x, int y);
float compare_figure(int x1, int y1, int x2, int y2);

int main()
{
    setlocale(LC_ALL, "RUS");

    int z;
    int x, y;
    int x2, y2;
    char symbol;

    printf("----- Введите данные для фигуры -----\n");
    printf("Введите символ для построения фигуры: ");
    scanf(" %c", &symbol);
    printf("Введите ширину фигуры по X: ");
    scanf("%d", &x);
    printf("Введите высоту фигуры по Y: ");
    scanf("%d", &y);

    do
    {
        printf("\n====================================\n");
        printf("                МЕНЮ                \n");
        printf("====================================\n");
        printf("1) Рассчитать площадь\n");
        printf("2) Вывести определение фигуры\n");
        printf("3) Нарисовать фигуру заданным символом\n");
        printf("4) Нарисовать фигуру символом *\n");
        printf("5) Сравнить площадь с другой фигурой\n");
        printf("6) Вывести параметры фигуры\n");
        printf("0) Выйти\n");
        printf("Выберите операцию: ");

        scanf("%d", &z);

        switch (z)
        {
        case 1:
            printf("\n----- ПЛОЩАДЬ ФИГУРЫ -----\n");
            printf("Площадь фигуры: %.2f\n",
                area_figure(x, y));
            break;

        case 2:
            definition_figure();
            break;

        case 3:
            printf("\n----- ЗАДАННАЯ ФИГУРА -----\n");
            draw_figure(symbol, x, y);
            break;

        case 4:
            printf("\n----- ЗАДАННАЯ ФИГУРА -----\n");
            draw_figure('*', x, y);
            break;

        case 5:
            printf("\n----- ВВОД ДАННЫХ ВТОРОЙ ФИГУРЫ -----\n");

            printf("Введите ширину второй фигуры по X: ");
            scanf("%d", &x2);
            printf("Введите высоту второй фигуры по Y: ");
            scanf("%d", &y2);
            printf("Площадь первой фигуры: %.2f\n", area_figure(x, y));
            printf("Площадь второй фигуры: %.2f\n", area_figure(x2, y2));
            float result;
            result = compare_figure(x, y, x2, y2);

            if (result > 0)
                printf("Первая фигура больше на %.2f\n", result);
            else if (result < 0)
                printf("Вторая фигура больше на %.2f\n", -result);
            else
                printf("Площади фигур равны.\n");

            break;

        case 6:
            printf("\n----- ПАРАМЕТРЫ ФИГУРЫ -----\n");
            printf("Символ: %c\n", symbol);
            printf("Ширина по X: %d\n", x);
            printf("Высота по Y: %d\n", y);
            printf("Ширина нижней части: %d\n", x - 2);
            printf("Высота верхней части: %d\n", y) ;
            printf("Высота нижней части: %d\n", y);
            break;

        case 0:
            printf("\nПрограмма завершена.\n");
            break;

        default:
            printf("\nОшибка! Такого пункта меню нет.\n");
        }

    } while (z != 0);

    return 0;
}


float area_figure(int x, int y)
{
    int lower_w1 = x;
    int lower_w2 = x - 2;
    int h = y / 2;
    return lower_w1* h + lower_w2 * h;
}


void definition_figure(void)
{
    printf("\n----- ОПРЕДЕЛЕНИЕ ФИГУРЫ -----\n");
    printf("Фигура представляет собой L-образный невыпуклый шестиугольник,\n");
    printf("Её граница состоит из 6 последовательных отрезков.\n");
    printf("Верхняя часть шире нижней.\n");
}


void draw_figure(char symbol, int x, int y)
{
    int upper_w = x;
    int lower_w = x - 2;
    int h = y / 2;

    for (int i = 0; i < y; i++)
    {
        int w;
        if (i < h)
            w = upper_w;
        else
            w = lower_w;

        for (int j = 0; j < w; j++)
        {
            printf("%c", symbol);
        }

        printf("\n");
    }
}


float compare_figure(int x1, int y1, int x2, int y2)
{
    return area_figure(x1, y1) - area_figure(x2, y2);
}
