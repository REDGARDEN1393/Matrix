#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	//Двумерные массивы
	/*const int rows = 4;// количество рядов массива 
	const int cols = 3;// количество столбцов массива


	int mx[rows][cols]; // двумерный массив целых чисел

	mx[1][0] = 7;
	mx[3][2] = 15;

	std::cout << mx[1][0] << " " << mx[3][2] << "\n";


	int mx2[rows][cols]{ //обявление и инциализация двумерного массива
		
		{ 10,20, 30 },
		{  6,  7,  8},
		{100,200,300},
		{  1,  2,  3}

	};

	std::cout << "Двумерный масиив: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			std::cout << mx2[i][j] << "\t";
		std::cout << "\n";
	}*/


	//Задание "Нули в матрице"
	/*int zeros[3][4]{
		{1,10,1,0},
		{4,10,7,0},
		{20,45,0,0}
	};
	int counter = 0;
	std::cout << "двумерный массив:\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++) {
			std::cout << zeros[i][j] << "\t";
			if (zeros[i][j] == 0)
				counter++;
		}
		std::cout << "\n";
	}
	std::cout << "Кол- во нулей: " << counter << "\n\n*/

	//Задача 1Все и сразу

	std::cout << "Задача 1.\nДвумерный массив\n";
	const int size = 10;
	int arr[size][size];
	srand(time(NULL));
		for (int i = 0; i < size; i++){
			for (int j = 0; j < size; j++) {
				arr[i][j] = rand() % (101) - 50;   //[-50...50]
				std::cout << arr[i][j] << "\t";
			}
			std::cout << "\n";
		}
		int sum = 0;
		int min = arr[0][0];
		int max = arr[0][0];
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++) {
				sum += arr[i][j];
				min = arr[i][j] < min ? arr[i][j] : min;
				max = arr[i][j] > max ? arr[i][j] : max;
			}
			
		std::cout << "Сумма элементов массива: " << sum << "\n";
		std::cout << "Ср. ариф.: " << (double)sum / (size * size) << "\n";
		std::cout << "Миниммум: " << min << "\n";
		std::cout << "Максимум: " << max << "\n";


	return 0;
}