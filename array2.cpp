

//#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
//int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5; // no?iee eioi?uo io?ii ia?anoaaeyou  5 - oanoiaia cia?aiea
	const int M = 3; // yeaiaiou eioi?uo io?ii i?iaa?eou 3 (cieioi, na?aa?i, a?iica)
	//caaaei iannea
	int array[N][M];
	//caiieiei neo?aeiuie ?eneaie
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = 1 + rand() % 10; // neo?aeiua oenea a aeaiiciia io 1 ai 10
			cout << array[i][j] << ","; // eiio?ieuiue auaia ianneaa
		} // for j
		cout << endl;
	}// for i
	// iocu?ueiaue aeai?eoi

	for (int w = 0; w < N-1; w++) {
		for (int x = 0; x < N-w-1; x++) {
			if (array[x][0] > array[x+1][0]) //  
			{    
				//ia?anoaaeyai yeaiaiou
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
		} // x
	}// w
	
	// ?acoeuoao
	cout << "rez"<<endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << array[i][j] << ","; // auaia ianneaa
		} // for j
		cout << endl;
	}// for i

	system("pause");
	return 0;
}
