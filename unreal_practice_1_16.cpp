#include <iostream>
#include <time.h>

const int N = 5;
int array[N][N];

void fillingArray()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void getAmountDay()
{
    std::tm localTime;
    std::time_t t = time(NULL);
    localtime_s(&localTime, &t);

    int sum = 0;
    for (int j = 0; j < N; j++)
    {
        sum += array[localTime.tm_mday % N][j];
    }
    std::cout << sum << "\n";
}

int main()
{
    fillingArray();
    getAmountDay();
}