#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <Windows.h> 

using namespace std;

//Рекурсивний спосіб

void range(int* a, const int n, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		range (a, n, Low, High, i + 1);
}

void print(int* a, const int n, int i)
{
    cout << setw(4) << a[i];
    if (i < n - 1)
        print(a, n, i + 1);
    else
        cout << endl;
} 

int sum(int* a, const int n, int i, int S)
{
    S += a[i];
    if (i < n - 1)
        return sum(a, n, i + 1, S);
    else
        return S;
}

int Quantity(int* a, const int n, int i, int quantity)
{
    if (a[i] > 0 && !(i % 5 == 0))
        quantity++;
    if (i < n - 1)
        return Quantity(a, n, i + 1, quantity);
    else
        return quantity;

}

void zero(int* a, const int n, int i)
{
    if (a[i] > 0 && abs(a[i]) % 5 != 0)
        a[i] = 0;
    if (i < n - 1)
        return zero(a, n, i + 1);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned)time(NULL));

    const int n = 20;
    int a[n];

    int Low = -20;
    int High = 50;

    range(a, n, Low, High, 0);
    print(a, n, 0);

    cout << "Сума = " << sum(a, n, 0, 0) << endl;
    cout << "Кількість = " << Quantity(a, n, 0, 0) << endl;

    zero(a, n, 0);
    print(a, n, 0);

    return 0;
 
}