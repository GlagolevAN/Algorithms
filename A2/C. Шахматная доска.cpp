#include <sstream>
#include <iostream>
#include <fstream>

/* Из шахматной доски по границам клеток
 выпилили связную (не распадающуюся на
части) фигуру без дыр.
Требуется определить ее периметр.

Формат ввода
Сначала вводится число N
(1 ≤ N ≤ 64) – количество выпиленных
 клеток. В следующих N строках вводятся
  координаты выпиленных клеток,
   разделенные пробелом (номер строки
    и столбца – числа от 1 до 8).
    Каждая выпиленная клетка
    указывается один раз.*/

int main(void)
{
    int N = 0;
    int *board = nullptr;
    int i = 0, j = 0;
    int x = 0, y = 0;

    scanf("%d", &N);
    board = new int[64]();

    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        board[(x - 1) * 8 + y - 1] = 1;
    }

    int neighbor_cnt = 0;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
        {
            if (board[i * 8 + j] == 1)
            {
                if (j > 0)
                {
                    if (board[i * 8 + j - 1] == 1)
                        neighbor_cnt++;
                }

                if (j < 7)
                {
                    if (board[i * 8 + j + 1] == 1)
                        neighbor_cnt++;
                }

                if (i > 0)
                {
                    if (board[(i - 1) * 8 + j] == 1)
                       neighbor_cnt++;
                }

                if (i < 7)
                {
                    if (board[(i + 1) * 8 + j] == 1)
                        neighbor_cnt++;
                }

            }
        }

    printf("%d\n", N * 4 - neighbor_cnt);
    return 0;
}
