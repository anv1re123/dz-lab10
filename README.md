# Домашнее задание к работе 10

## Условие задачи

Составьте программу, которая для заданной фигуры предлагает меню выбора одной из операций:
1) Рассчитать площадь;
2) Вывести определение фигуры;
3) Нарисовать фигуру символом, заданным пользователем
4) Нарисовать фигуру символом *
5) Сравнить площадь двух фигур
6) Вывести параметры фигуры

<img width="265" height="256" alt="image" src="https://github.com/user-attachments/assets/9af84ad5-536a-46f5-812b-c77804610aca" />

## 1. Алгоритм и блок-схема

1. Начало.
2. Ввести символ для построения первой фигуры.
3. Ввести высоту и ширину.
4. Вывести меню доступных операций.
5. Ввести номер выбранной операции.
6. Выполнить выбранную операцию:
   - Рассчитать площадь фигуры.
   - Вывести определение фигуры.
   - Нарисовать фигуру символом, заданным пользователем.
   - Нарисовать фигуру символом `*`.
   - Сравнить площадь первой фигуры с площадью второй фигуры.
   - Вывести параметры первой фигуры.
7. Если выбрана операция сравнения, ввести параметры второй фигуры и выполнить сравнение площадей.
8. После выполнения операции вернуться к меню.
9. Если выбран пункт `0`, завершить программу.
10. Конец.

### Блок-схема

<img width="701" height="832" alt="{A2A8ADB5-DD18-4108-B881-6DC84B01A583}" src="https://github.com/user-attachments/assets/a35e4c87-c996-4192-8e5d-511f864f48e7" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tk5s4Ev41rkq2yi6QeP04tuPZ3M3upZK92p39ksKGscnw4gOcsfPrT4DAIGQGZAHODk7FA0KSZfWjR61Wqz2BC%2Fd4Hxj73W%2B%2BaTkTIJjHCVxOABB1EaI%2FccoJpwiCmKZsA9vEaeeEL%2FYPK8uIUw%2B2aYWljJHvO5G9LydufM%2BzNlEpzQgC%2F6Wc7cl3yp%2B6N7ZWJeHLxnCqqX%2FaZrTDqUAQzg9%2BteztLvtoJXviGllunBDuDNN%2FKSTBDxO4CHw%2FSq%2Fc48Jy4u7LOiYtt7rwNG9ZYHlRkwJhVC2BKwmjU%2FaFURnUt%2Bhm%2FrKzI%2BvL3tjET16QfFHaLnIddCeiSyPcpx3%2BZB8t9BHzMAr857yXxJmM0p5sx1n4jh%2BgFCfupalpBM%2FvJgCuktcELOLru%2Fjf%2Bzi%2F70Urw7WdGC9%2F2C4SPRB%2Bt17Q%2B2ffNTychV6lkLzSKtPr93mz2pRI%2B%2BS74Rxwn0yWwkRfxu9zYYK%2BvKZm1%2Bh9nrx%2FwIWsILKOhb7Fori3fNeKghPKsiugRZLTYi8FaGX4wbUAHd%2FjEQRwEQMDe5vXfBY9usDSpyPB9oQmUECA3ceXKJfhOJbjbwPDRf2ztwIkmcgKyGefzg9eQ88%2FFyzhyV37TpINyTD5c0r%2F%2FGDCiEzBiEpgJMuTsywHkDzu3PD06%2BHkb58%2FPqjuyjL%2B9TLV03ots8KaVSD5h2CDc5lCBVxxFV%2FwrR9EO3%2Fre4bz4Zw6D%2FyDZ8bMgsYXnJ%2FzPPj%2BHqPomxVFJzxpGIfIL2PMOtrRX7h4fP0YXydIi%2B%2BWx8Kj5Sm78VA3%2FVW8KZSKb8%2FFkrusXHvgOMbacubG5nmbfNEGwE9e7xlQ3WCg4KnVCLYWFqPlmXRwBpZjRPb3MgC4Iy1TAPDEbqwz4FCoqw6qBOQe4l4nJjLUhagLlhtUX0Jd8QC1kQpwhx%2B4tmmmiLRC%2BwduSSz0vW97UfLF5flEXqIU29shDoz%2BsI7JzIj6PUEnWCSXSVPAAo3%2B6D%2BIGe0oJoYUB35gWkEq01JSypA46ZNhmra3vVHwkBOmhCfJpqRHxRUuMhVmmq7Cy1jD1X2KJVLI4j89hVZUAWP%2BqY3waTaaLYOd764P4Vue%2BtAEJyRXKC9cMc12KmW2E4nZTivPdvla4RoOwmw3aseM2vEd1oLj91RTlhNNWelKLxYJFIiSzAEGZo0%2BMw516lAXexzqkIuMwSjjljIGPcpY0njIGI4ybilj2KOMFQHMOCxRTWmUckspSz1KWeVhqzKVUcYtZSz3KGNN4cDWewWttjeN5FyyCb1ZWQdJM1JpH9H%2FX9D%2Fd6jLV%2BB9nA7m8f1xCn7BiShVcVCnzk37O7rcRqkx41wHyCsBZC0gqQaU60F3harotR%2BcKPsAxXBj2XjrcF%2FIHu5R%2FxXFq%2FzvEG%2BGzNe5YWO6SbvpDuWLAsMLM3jMz7kLraB%2BDGpr%2BknlxnL%2B9IZiEKbDNnPgTmLAGa1ZJPwYuE4TZ6BKd%2FkCA1ckQ3VGEJ6szDTtes6jGz3VCZN9HREoEuqAJvbsup2J%2FWxVfyw%2BezMmdioGCnvDbcyjItBrTPGEeRQXUzVhJhReoIT08yZ3VmPadlzJVSZVOvqxyZ7Z5J8Nn9HmP5TNv2j6A415%2BRVoywLUyshsDHSu%2BwAFlh1XI69rqFj%2FyxQOPFVnnMJ%2FaaLI5Fyt6xwWJ4bINidn7jY9T8ieeRe7PaHbteNvntOkle1cghy4LQgVp8fcTaXIMs0J5CqhAzah501%2Bm1IfXLXzfM%2BiYsm8CkqFuUhS1LZqFpTKLlyiLpfULkHpSs0yZDYYD%2BSvcyMo7nWhQYGq2FC36oEHPcbJz6wqRSOAegMQuCEAMU6k2XcYATQEgOANAQgyAgiOABoOQBJfAGFFSpgJIhzICdBjVaWkEYc94TD3984N0I9Zd1w0RlOwq%2FDFLvs6QSf3z1Nc8VgYnEa97ubRzHgSgWVLpjoKnr4%2BfAsPq8ft5%2F8%2Bz%2F%2FtLo2%2Fj%2FdTlT4yCo7erdfTMD8ieBWhI3gYp0IObKUv5KiMNlkojzaoqaRPEr%2BF%2BGlUg68yJ7UbAgNrP%2FRtPV5jp%2Fl8IitlhMtilwgf9fRbn1GGR6CSaTgd4E8a9fO3zbAX1pyd4pvQ2FW5O35VGPGtjPj%2B6fBddIjlqW2LQNdbYxzqJYyLglhx3ucH872yZsN5scveJta730QtOMD0vyWPPpzRaDGcd%2BQ%2FDRnt7BbtfAAazvLiAAspqeIF3LtvJGD0DK5biw4UjWOmS1rZNiXVGqdu2u83bmkh7E3S4Ibek%2B1nb0WpcTynQ1eT9ZleeJUdKSkWgQs25krFokAEJoKks13XI%2BIy%2FnsKYRTX%2FdELbdPCKclZfzwARAYw1bh%2BqitYBWv7kcHk2Fs83UM5ChLXOQ2Tbx2fAdH39LMfpvVke3Zk%2B97XJ3t7CKx3F08TJQ1o5x%2BaGRoK%2FqE5RWeKrEweNK6An9tBDqBxpOthLGQM2wg3zdRdsbKkaK09AnVi70Eh4xows7AM%2BmXhRufsRxa%2BGRbOotP1S7wE2nkE7KHTLmN8ujp7Yr%2B0%2B%2FYoVJgJkgSuZVBVIbaRmRm0wz2KOpiNDNo1g6bUlzlX82c5qby2Uus81a5iOcjTFpDZU%2FqlObQYMA5O9EDnrjQoM5M%2FV2dQaq8XinXHxF%2FxWrlgihfLVCVCnNCY3MgS6CJtxAXDFzFzi4AM98FMs2IlbF%2FXp4tHg0FPRJud%2FeyGZyVyEAg8AobRiZanOikO42jAwKGNyPl2iFZUXj2S15ZoUY2kwb8dcSqXeLc3thvVyv4W5qWIOt2yn1xFpsjjlDt9Oc244VoT1%2BTnigE%2FBqi5SC097PjTYYTVOOYgMbSozmOQmC4R1XFgeAjlsodSc2MS1xNidLQxuqXeIIWOMb74xfiCg1KofC2F0pcyI4X%2B5HG28hByw8bZquW%2BMfJWs8hbySjqLAywqhKLkA6NMG0OFt2eEft27CSKqtS4uzDZSV61LzcoobWxq%2BjwNbtKU4N0JSgTCeCu3ddGz4meDDTTbi0yGgmkCpJYqLDu%2FPUImR52MCYt46v3Ze6DMhevRSq%2BxFHHaqZjnX9rQenxtxZECLtiFrGRTjVSCy8vlKSmlr%2BKcMHDT2D%2BvYLFJP1p2mPsS79ImOxi3P2u6I1U52CH7AZaLCTGE7TMbNlzBCd%2B581q50TuocwkVWse%2BSZbtBDLH51UNRuvfsh1lNCd1yO9WxnDhdTK6G2O0J%2FijHuHUaky3YXrQXkoSK8MztbOe5W5LtftGzrjVWwf5JhtOvoVkVQs%2Bx79jLtitfIfHfXPlMAw2m7IuV8DBNIlnZd3f5eOWHR0MsYNrTUajj6EnEEqq62DAuhQrwQFIA%2FfNYWpTtoQO0Tpt%2FXf4nz%2F8fP9n4J7uP%2F9%2BWEpfZ0yOnrVWSmLGD1rShvHCEN7UwZYGaEdQadDTmwQDqW4MM6c6qmYLKyWid%2BiQ2qJCnhrJdVj%2FBqhlfDewlFU4rwVGUlj%2BB0cdBv4sbXknD0w9rvffDP2b%2Fjwfw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Программа

Программа написана на языке **C++**.
```cpp


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


```

## 3. Результаты работы программы

### Вывод меню
```text
----- Введите данные для фигуры -----
Введите символ для построения фигуры: +
Введите ширину фигуры по X: 15
Введите высоту фигуры по Y: 9

====================================
                МЕНЮ
====================================
1) Рассчитать площадь
2) Вывести определение фигуры
3) Нарисовать фигуру заданным символом
4) Нарисовать фигуру символом *
5) Сравнить площадь с другой фигурой
6) Вывести параметры фигуры
0) Выйти
Выберите операцию:
```

### Пример построения фигуры
```text
----- Введите данные для фигуры -----
Введите символ для построения фигуры: +
Введите ширину фигуры по X: 15
Введите высоту фигуры по Y: 9

----- ЗАДАННАЯ ФИГУРА -----
+++++++++++++++
+++++++++++++++
+++++++++++++++
+++++++++++++++
+++++++++++++
+++++++++++++
+++++++++++++
+++++++++++++
+++++++++++++
```
### Пример построения фигуры символом *
```text
----- ЗАДАННАЯ ФИГУРА -----
***************
***************
***************
***************
*************
*************
*************
*************
*************
```

### Пример вывода параметров фигуры
```text
----- ПАРАМЕТРЫ ФИГУРЫ -----
Символ: +
Ширина по X: 15
Высота по Y: 9
Ширина нижней части: 13
Высота верхней части: 9
Высота нижней части: 9
```

### Пример вывода сравнения двух фигур
```text
----- ВВОД ДАННЫХ ВТОРОЙ ФИГУРЫ -----
Введите ширину второй фигуры по X: 6
Введите высоту второй фигуры по Y: 11
Площадь первой фигуры: 112,00
Площадь второй фигуры: 50,00
Первая фигура больше на 62,00
```

## 4. Информация о разработчике

```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
```
