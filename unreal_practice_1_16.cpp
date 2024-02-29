#include <iostream>
#include <time.h>

const int N = 5;
int array[N][N];

int getDay()
{
    std::tm localTime;
    std::time_t t = time(NULL);
    localtime_s(&localTime, &t);

    return localTime.tm_mday;
}

void fillingArray()
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
            std::cout << array[i][j] << " ";

            sum += array[getDay() % N][j];
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    std::cout << sum << "\n";
}

int main()
{
    fillingArray();
}