#include <iostream>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int array1[15][15];
    int lines1, columns1;

    std::cout << "Введите размер матрицы [n] [m]\n";

    std::cout << "n = ";
    std::cin >> lines1;
    std::cout << "m = ";
    std::cin >> columns1;


    system("CLS");

    std::cout << "Введите " << lines1 * columns1 << " значений матрицы\n";
    std::cout << ">>";

    for (int i1 = 0; i1 <= lines1 - 1; i1++)
    {
        for (int j1 = 0; j1 <= columns1 - 1; j1++)
        {

            std::cin >> array1[i1][j1];


            if (j1 == 0)
            {
                std::cout << "{";
            }
            if (j1)
            {
                std::cout << ",";
            }

            std::cout << array1[i1][j1];

            if (j1 == columns1 - 1)
            {
                std::cout << "}" << std::endl;
            }


        }
    }


    int array2[15][15];
    int lines2, columns2;

    std::cout << "Введите размер второй матрицы [n] [m]\n";

    std::cout << "n = ";
    std::cin >> lines2;
    std::cout << "m = ";
    std::cin >> columns2;


    std::cout << "Введите " << lines2 * columns2 << " значений матрицы\n";
    std::cout << ">>";

    for (int i2 = 0; i2 <= lines2 - 1; i2++)
    {
        for (int j2 = 0; j2 <= columns2 - 1; j2++)
        {

            std::cin >> array2[i2][j2];


            if (j2 == 0)
            {
                std::cout << "{";
            }
            if (j2)
            {
                std::cout << ",";
            }

            std::cout << array2[i2][j2];

            if (j2 == columns2 - 1)
            {
                std::cout << "}" << std::endl;
            }
        }
    }

    int operation;
    std::cout << std::endl;
    std::cout << "Выберите Дейтсвие:\n1.Сложение\n2.Вычетание\n3.Умножение\n";
    std::cout << ">> ";
    std::cin >> operation;

    switch (operation) {
    case 1:
        if (lines1 != lines2 || columns1 != columns2)
        {
            std::cout << "Матрицы складываются только одинакого размера";
        }
        else
        {
            std::cout << "Сумма матриц равна:\n";
            int array_sum[15][15];
            for (int n_sum = 0; n_sum <= lines1 - 1; n_sum++)
            {
                for (int m_sum = 0; m_sum <= columns1 - 1; m_sum++)
                {
                    array_sum[n_sum][m_sum] = array1[n_sum][m_sum] + array2[n_sum][m_sum];

                    if (m_sum == 0)
                    {
                        std::cout << "{";
                    }
                    if (m_sum)
                    {
                        std::cout << ",";
                    }

                    std::cout << array_sum[n_sum][m_sum];

                    if (m_sum == columns1 - 1)
                    {
                        std::cout << "}" << std::endl;
                    }
                }
            }
        }
        break;
    case 2:
        if (lines1 != lines2 || columns1 != columns2)
        {
            std::cout << "Матрицы вычитаются только одинакого размера";
        }
        else
        {
            std::cout << "Разность матриц равна:\n";
            int array_sub[15][15];
            for (int n_sub = 0; n_sub <= lines1 - 1; n_sub++)
            {
                for (int m_sub = 0; m_sub <= columns1 - 1; m_sub++)
                {
                    array_sub[n_sub][m_sub] = array1[n_sub][m_sub] - array2[n_sub][m_sub];

                    if (m_sub == 0)
                    {
                        std::cout << "{";
                    }
                    if (m_sub)
                    {
                        std::cout << ",";
                    }

                    std::cout << array_sub[n_sub][m_sub];


                    if (m_sub == columns1 - 1)
                    {
                        std::cout << "}" << std::endl;
                    }
                }
            }
        }
        break;
    case 3:
        if (columns1 != lines2)
        {
            std::cout << "Нельзя произвести умножение т.к количество столбцов первой матрицы не соответствует количеству строк второй";
        }
        else
        {
            int array_result[15][15];
            for (int i = 0; i < lines1; i++)
            {
                for (int j = 0; j < columns2; j++)
                {
                    array_result[i][j] = 0;
                    for (int k = 0; k < columns1; k++)
                    {
                        array_result[i][j] += array1[i][k] * array2[k][j];
                    }
                    if (j == 0)
                        std::cout << "{";
                    if (j)
                        std::cout << ",";
                    std::cout << array_result[i][j];
                    if (j == columns2 - 1)
                        std::cout << "}" << std::endl;
                }
            }
        }
        break;
    }
    return 0;
}
