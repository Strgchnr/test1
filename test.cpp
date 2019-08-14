#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{   
	int arraySize;
	cout << ("Choose array size (number of cells)\n");
	cin >> arraySize;
	if (arraySize < 1)
	{
		SetColor(4, 0);
		cout << ("err: Wrong format\n");
		SetColor(15, 0);
		system("pause");
		return 0;
	}
	else 

	system("cls");

	int menuNumber ;
	SetColor(9,0);
	cout << ("Shoose sort type\n");
	SetColor(15,0);
	cout << ("----------------\n");
	cout << ("1: Buble sort \n");
	cout << ("2: Selection sort\n");
	cout << ("3: Insertion sort\n");
	cout << ("4: Merge sort\n");
	cout << ("0:");
	SetColor(4,0);
	cout << (" Exit\n");
	SetColor(15, 0);
	cin >> menuNumber;
    //проверить 
	//srand(time(0));
	//int *ptrarray= new int [arraySize];
	//for (int count = 0; count < 10000; count++)
		ptrarray[count] = (rand() % 1000 + 1) / int((rand() % 1000 + 1));


	if (menuNumber >= 0)
	{
		//
		switch (menuNumber)
		{
		case 1:
			//buble sort 
		/*	//проверить, настроить 
		{
			int tmp = 0;
			for (int i = 0; i < lenD; i++) {
				for (int j = (lenD - 1); j >= (i + 1); j--) {
					if (data[j] < data[j - 1]) {
						tmp = data[j];
						data[j] = data[j - 1];
						data[j - 1] = tmp;
					}
				}
			}
			cout что-то там, в общем тоже доделать
		}*/
			break;

	    case 2:
			//selektion sort
			break;
		case 3:
			//insertion sort
			break;
		case 4:
			//merge sort   
			break;
		case 0: 

			return 0;
		case 22:
			//проверить 
			system("cls");
			for (int count = 0; count < arraySize; count++)
				cout << ptrarray[count] << "    \n";
			delete[] ptrarray; // высвобождение памяти
			system("pause");
			break;

			break;


		default:
			SetColor(4,0);
			cout << ("err: Unknown menu point\n");
			SetColor(15, 0);
			system("pause");
			break;
		}
	}
	else
	 {
		SetColor(4, 0);
		cout << ("err: Wrong format \n");
		SetColor(15, 0);
		system("pause");
	 }
		return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
/*
22 in menu => test mode

console colors
        Black         = 0,
		Blue          = 1,
		Green         = 2,
		Cyan          = 3,
		Red           = 4,
		Magenta       = 5,
		Brown         = 6,
		LightGray     = 7,
	   &nbsp;DarkGray = 8,
		LightBlue     = 9,
		LightGreen    = 10,
		LightCyan     = 11,
		LightRed      = 12,
		LightMagenta  = 13,
		Yellow        = 14,
		White         = 15
*/
