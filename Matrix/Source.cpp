#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	//��������� �������
	/*const int rows = 4;// ���������� ����� ������� 
	const int cols = 3;// ���������� �������� �������


	int mx[rows][cols]; // ��������� ������ ����� �����

	mx[1][0] = 7;
	mx[3][2] = 15;

	std::cout << mx[1][0] << " " << mx[3][2] << "\n";


	int mx2[rows][cols]{ //��������� � ������������ ���������� �������
		
		{ 10,20, 30 },
		{  6,  7,  8},
		{100,200,300},
		{  1,  2,  3}

	};

	std::cout << "��������� ������: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			std::cout << mx2[i][j] << "\t";
		std::cout << "\n";
	}*/


	//������� "���� � �������"
	/*int zeros[3][4]{
		{1,10,1,0},
		{4,10,7,0},
		{20,45,0,0}
	};
	int counter = 0;
	std::cout << "��������� ������:\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++) {
			std::cout << zeros[i][j] << "\t";
			if (zeros[i][j] == 0)
				counter++;
		}
		std::cout << "\n";
	}
	std::cout << "���- �� �����: " << counter << "\n\n*/

	//������ 1��� � �����

	std::cout << "������ 1.\n��������� ������\n";
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
			
		std::cout << "����� ��������� �������: " << sum << "\n";
		std::cout << "��. ����.: " << (double)sum / (size * size) << "\n";
		std::cout << "��������: " << min << "\n";
		std::cout << "��������: " << max << "\n";


	return 0;
}