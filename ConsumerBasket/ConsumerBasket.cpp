#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("color 80");
	system("chcp 1251>nul");

    vector<float>product = { 2.5, 4.25, 3.0, 10.0 };        // Цены
    vector<int>cod = { 1, 1, 0, 3, 2, 2 };                  // Код продуктов

	float sum = 0;
	for (int i = 0; i < cod.size(); i++)                    // Цикл проходит по вектору cod
	{
		sum += product[cod[i]];                             // Суммируем цену продуктов с кодами записанными в векторе cod
	}

	cout << " Суммарная стоимость будет равна " << sum;     // Вывод результата

	system("pause>nul");
	return 0;
}