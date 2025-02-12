
#include <iostream> 
#include<cstdlib>


int Dey(int dey1, int month1, int year1, int dey2, int month2, int year2)
{
    int dey = 0, colihc = 0;
        if (year1 % 4 == 0)
        {
            colihc = year1 / 4;
            dey1 = dey1 + year1 * 365 + colihc - 366;
            std::cout << year1 << "leap year\n";

        }
        else
        {
            dey1 = dey1 + year1 * 365 - 365;
        }

        if (month1 == 2)
        {
            dey1 = dey1 + 31;
        }

        if (month1 == 3)
        {
            dey1 = dey1 + 31 + 28;
        }

        if (month1 == 4)
        {
            dey1 = dey1 + 2 * 31 + 28;
        }

        if (month1 == 5)
        {
            dey1 = dey1 + 2 * 31 + 28 + 30;
        }

        if (month1 == 6)
        {
            dey1 = dey1 + 3 * 31 + 28 + 30;
        }

        if (month1 == 7)
        {
            dey1 = dey1 + 3 * 31 + 28 + 2 * 30;
        }

        if (month1 == 8)
        {
            dey1 = dey1 + 4 * 31 + 28 + 2 * 30;
        }

        if (month1 == 9)
        {
            dey1 = dey1 + 5 * 31 + 28 + 2 * 30;
        }

        if (month1 == 10)
        {
            dey1 = dey1 + 5 * 31 + 28 + 3 * 30;
        }

        if (month1 == 11)
        {
            dey1 = dey1 + 6 * 31 + 28 + 3 * 30;
        }

        if (month1 == 12)
        {
            dey1 = dey1 + 6 * 31 + 28 + 4 * 30;
        }
        if (year1 % 4 == 0 and month1 >= 3)
        {
            dey1++;
        }



        if (year2 % 4 == 0)
        {
            colihc = year2 / 4;
            dey2 = dey2 + year2 * 365 + colihc - 366;
            std::cout << year2 << "leap year\n";

        }
        else
        {
            dey2 = dey2 + year2 * 365 - 365;
        }

        if (month2 == 2 )
        {
            dey2 = dey2 + 31;
        }

        if (month2 == 3 )
        {
            dey2 = dey2 + 31 + 28;
        }

        if (month2 == 4)
        {
            dey2 = dey2 + 2 * 31 + 28;
        }

        if (month2 == 5)
        {
            dey2 = dey2 + 2 * 31 + 28 + 30;
        } 
        
        if (month2 == 6)
        {
            dey2 = dey2 + 3 * 31 + 28 + 30;
        }
        
        if (month2 == 7)
        {
            dey2 = dey2 + 3 * 31 + 28 + 2 * 30;
        } 
        
        if (month2 == 8)
        {
            dey2 = dey2 + 4 * 31 + 28 + 2 * 30;
        }
        
        if (month2 == 9)
        {
            dey2 = dey2 + 5 * 31 + 28 + 2 * 30;
        }

        if (month2 == 10)
        {
            dey2 = dey2 + 5 * 31 + 28 + 3 * 30;
        }
        
        if (month2 == 11)
        {
            dey2 = dey2 + 6 * 31 + 28 + 3 * 30;
        } 
        
        if (month2 == 12)
        {
            dey2 = dey2 + 6 * 31 + 28 + 4 * 30;
        }
        if (year2 % 4 == 0 and month2>=3 )
        {
            dey2++;
        }

        dey = dey2 - dey1;

        return dey;
}



float Average(int arr[], int len)
{
    float summ = 0;
    for (int i = 0; i < len; i++)
    {
        summ = arr[i] + summ;
    }
    return summ / len;
}




float Print(int arr[], int len) 
{
    int plus = 0;
    int minus = 0;
    int zero = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else {
            zero++;
        }
    }
    std::cout << "The number of positive number = " << plus << "\n";
    std::cout << "The number of negative number = " << minus << "\n";
    std::cout << "The number of zero number = " << zero << "\n";
    return plus;
}


int main()
{
    setlocale(LC_ALL, "ru");

    // № 1
    int dey1, month1, year1, dey2, month2, year2;
    std::cout << "введите день, месяц и год у первой даты \n";
    std::cin >> dey1;
    std::cin >> month1;
    std::cin >> year1;
    std::cout << "введите день, месяц и год у второй даты \n";
    std::cin >> dey2;
    std::cin >> month2;
    std::cin >> year2;
    std::cout << "разница в днях равна " << Dey(dey1, month1, year1, dey2, month2, year2) << "\n";


    // № 2
    int mas[] = { 1, 2, 3, 4, 5 };
    int len = 5;
    std::cout << "среднее значение = " << Average(mas, len);
    return 0;


    // № 3

    int arr[] = { -1, 400, -3, 5, 0, -4, -2};
    int lin = 6;
    std::cout << " " << Print(arr, lin) << "\n";



    return 0;
}
