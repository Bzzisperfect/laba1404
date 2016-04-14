#include <iostream>
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5;
	const int M = 3;
	int array[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = 1 + rand() % 10;
		std::cout << array[i][j]<<std::endl;
        		}
		std::cout<<std::endl;
	}
	int sumelement[N];
	int d = 0;
	std::cout<< "Суммы элементов в строках" <<std::endl;
	for (int k = 0; k < N; k++)
    	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++) 
		{   
			sumelement[d] += array[k][m];
		};
		std::cout<< sumelement[d]<<std::endl;
		d++;
	}

	for (int w = 0; w < N-1; w++) {
		for (int x = 0; x < N-w-1; x++) {
			if (sumelement[x] > sumelement[x+1])
			{    
				int tmpsum = sumelement[x];
				sumelement[x] = sumelement[x + 1];
				sumelement[x + 1] = tmpsum;
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} 
			} 
		} 
	}
	
	std::cout<< "результат"<<std::endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			std::cout<< array[i][j]<<std::endl;
		}
		std::cout << std::endl;
	}
	d = 0;
	std::cout << "Суммы элементов в строках в итоговом массиве" << std::endl;
	for (int k = 0; k < N; k++)
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)
		{
			sumelement[d] += array[k][m];
		};
		std::cout << sumelement[d] <<std::endl;
		d++;
	}
	system("pause");
	return 0;
}
