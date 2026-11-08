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



[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tk5s2EP41nsl15jyIdz7G51ya9tpmknba65cMNpxNDyMPxjk7v74SCAxCxiAL7OTkTHwgJIGlR8%2BuVqtlpN2tdu9jd738DXp%2BOFIVbzfSpiNVBQ7Q0B%2BcsicpigKylEUceCTtkPA5%2BObnGUnqNvD8TSVjAmGYBOtq4hxGkT9PKmluHMOXarYnGFbvunYXfi3h89wN66l%2FB16yJKmqohwu%2FOwHi2V%2BazO%2FsnLz3CRhs3Q9%2BFJK0t6NtLsYwiQ7Wu3u%2FBA3X94wWbn7I1eLJ4v9KGlTYJPUS5BKNsk%2B%2F8GoDGpbdDJ5WQaJ%2F3ntzvGVF9S%2FKG2ZrEJ0BtChu1lnDf4U7Hx0i8kmieFz0UpgbKC0pyAM72AIY5QS4la69dz4%2Bc1I1e7Tz0i9w8dv8b8bnB9Gyb27CkKMlz%2BDFep6Vfndf0Hfn%2BDKjUgWdpVK%2BsmqzI5visfqUiJrk69uuCVtMpoqI2eKvyfKCP1428qP0fck%2FX5HCvlx4u9KbUu64r0PV34S71GWZQktupEVeylBK8cPqUV1yDkZQSop4hJgL4qaD12PDkjvs5EQREobKCDArvEhyuWGoR%2FCReyuUPus%2FRj1TOLH9LWPhwun0PPjgmWzX81gmGYz3RX%2B2dFsk%2F76NE2ZZX%2F2C2YmdOUbF5QMBpQsCkp5noKMBWDpcbna7H%2Fe7uHi%2BcODtbr33V9ebp2sXt%2BrkWsdb3Abz0kuT6lhEFfxmZzCOFnCBYzc8N0hdRLDbeRhAkLDUJsc8jxAuCZg%2B89Pkj2RLe42gVUo%2Brsg%2BYcUx8eP%2BDgFJD6b7kqXpvv8JELN9E%2F5pFQKnx6KpWd5ue74Ct2ZH07c%2BfMi%2FaEtxkf6ueEAPxGvbrzwSR%2F5kcdGXuyHbhJ8rfaucBjlSgAR7u4sRwWDvppwSOHpATcpJcxQ%2ByC%2BmM5RfSl94dEXIDXgLbmwCjwvg5u%2FCb6RJ8E9uoZBlKQ%2F3JiMjClKCaIl4sHkT3%2BXSscDSal3%2BCTFITlMn0u9Q%2BM8%2BQNRZZDgTFmPw9jz46z3KkkZZZKkj67nBdHiEjChxaNORGJb7mIiiBS5Vca2Y2nHUUWq%2B4jbvpQFPj1t%2FKQGu%2BKurZDotZKN8RKuZtvNaxZ0SE4p6RHKq91zCS2LIbQAJbTsqtAqZgbnsA3hNakLcw72t0Tnxd%2BZXmykerHZlxYMKBQA3RAAA69BLZFDnTnUwYBDXRPSx6rs4459rA7Yx7otoo812ccd%2B1gbsI9NRR0LmGl6uuzljr2sD9jLlgjLlGfKPu7Yx8aAfWybAth6baJ59bxVP1dMO6%2B2r2PfDb9k9kLS5%2BTkJ%2FT%2F4wecitoe6Wa2MkaHZogadOIFX9HhIslMFtswQW00dYsaZmkpbG58sywqSNzoTXGzm5u8KnSxVBvzBqQMqDwhOPGILerFD67iBz%2FUPAP5cwP2g4NOT47vgIThlDTSbX7PIzVwjDPbGtdHWmHH3%2BUysmrmtw1tbPVlngXWiMs%2Bi0bual0bpQOaaPPjbibag1X2sXztxzDRMju4tL7YxegGVKfBlEsZ3UgxC4%2Fo0ketwPiwUJrXmD07qeQsQx0b2sTky20yzseGtBn3bzMum47U1tx6AsSGotlVDLaGtFA7cokspTZ7UsPJxDAepWQ9lMjbnD7E67amUchlAhTHEaDduoBPtubeGQML1sh7i71k0OkshPPnLOk%2BCI9hTr0uDJUlYeHVUKaZ9gxyVqerfJ1ePPLr7PWLq2gRjHwmlryzoFQSRrppddWoNL06FQCOUdGwFLMvjco1%2BGB8Ib%2BNK0HxoBMGBlRBS%2BVqAB6MOIWfV9eKJIAGA5B6RQDiFKT5b5AAugSAtCsCkMYJIE0C6HIA0sUCiChSylgB2oW8yCJeVUqXOBwIh4Xfb2FIfsyb46hRmYFdUyx2%2BecJDr0Am%2BFKxMRgL%2FW6q0czp0c6z9JKfRSwTenskVHyFO4%2Bn7ZzQ%2FFZhI7g4e5LOYhBvpSjNtoMUB1tGm0sFDcN30sl%2BCxjUrcBcGHdh71%2BJ2rktJcmhlnFtwEs2mlLIMKlln7t8uTyCDT1%2FhhWl9r562bYIzPOXvFN6euW0R%2B%2Fmpz4NiW%2Bvzt8l%2F0pReraQHWczhjXnArGgQJqvt%2FiYL42Z3w4LzfZ68R6%2F0uoJf%2BX4Rfk0c05TRaX83H80ZDRzWrRzQOgpZQHF5hI6RrtVzS4E6TaRfwPCvKrd67tLCVt3TyBkOPGJjaAHJVtaTpmmQKK01gAHWSP0O12p8zIp%2F1W6K19fbv%2BtsF4rzFtcN0fok3g%2BSQl3Q5OBgPgQGSDd6d1r9URP%2Fxmk7R0N9%2FMfJpf3g1BbffWaUQbNWOUsM0QKudmiCbD3YUC2Iwd3a6a8fVGO%2F5VszF%2B0tLgK8R%2B93mMadpdhbhtOGOn9Kl6lDNso21J8ihZD6YbSJYUwJLrGHXPly%2Be%2FxREQRLA6M1NX1xoGPSO%2BR650BbIhZex1XMsZ141DXJRnm7and2OHWoHoklH3%2BCmOEMdluJaRYOQFHeC4vI4hn2xGoU2EWGd2JzGGYywadlATprP4Cc0b9B19Vx6skzKs4%2BbnnpcZ2zCkKQnAfSUuxiJ5ye9qvJbTY6kZ%2FGTJnL%2BmRs8hyUopAa72zB5YLNOFmKby92SDyfd1SVgn5ohdjXi0e5iQAMdrXh0iRNmPJ0SqEClY7VwEySoxVzs25InJ6lCd1X3ZKSjIa6IiOXG5kiROhy4jBMPB%2F214tWBOBKYJ3eyduVIVCO9UtaN88xjlDkYUUldTkhMWSoIfh6wqi%2Fdro47ICL0A3v6yemH0BDX5%2FsKkP%2F6oi9lrDCAlwsbI0R54o6AdMQzQEZAEoCdnqPma5pR9b9rb2YRuvuRjStOp%2BsrZEIZh64dE6raRZnQOJcJ2TMFyYQ9MGE%2FseCKgIaXjQXXSGEyOlxLO0Y6YHqLdWxZ1JygR3NGl%2B1v12fJHcjiYFpmg58Dl8XhpJG1RQm7k3OldspC8b14V6pyVV0El932bJS1aZjUcMLDYk9fHv7bbO8fF5%2F%2Bep78upq6%2F%2B7e31oSEAIA0TUkez%2BwsSieEuRwy8SNUFt%2BXUgettHMQ3ezCeZV0FRFZKeVS75ZX2XO18NewlFtKtY0Wk9uxaq8U5SAgimoS2hqek8TW5pZ1KaD2muA2opFy6Iq0noTi8xmzcW5VOJP8NzhhSXmgC8sARqNB2E0BuR%2BE8GvS1aW2Z%2FsDcnVJaFsE0pf60G0kq71J%2F1y3wa5Nf96N6VyLNWL28jaKGaER0jULbt9hMR8Kkopiw6v8KYrAkp%2FrpjsZuWMQ9TYR69zhH4XwTPEBLtrVAeERuDQFP3E4Ozsl1iTdYUzREs%2Fw5pFix6zbUe%2FCWhdbejRz7kg2dj%2FcmvAgRI4R9sQ2wlsagIKdEfUfoI%2BvdDY0OOMNdxo55XekV0QaFid44Q4mlOLE0JvlGuLQYe2%2BoqDIDqNIUzK2dFEdPkb9PAa%2BLv%2FAQ%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
