#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void BubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place  
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}
void ArrPrint(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout <<i<<(": ") <<arr[i] << "  \n";
	cout << endl;
}

int main()
{
	//для более поздней версии
	//int arraySize;
	//cout << ("Choose array size (number of cells)\n");  
	//cin >> arraySize;
	/*if (arraySize < 1)
	{
		SetColor(4, 0);
		cout << ("err: Wrong format\n");
		SetColor(15, 0);
		system("pause");
		return 0;
	}
	else*/ 
	const int ArrSize = 100;
	int arr[ArrSize];
		srand(time(0));
		//int *ptrarray= new int [arraySize]; для более поздней версии 
		for (int count = 0; count < ArrSize; count++)
			arr[count] = 0 + rand() % (1000 - 0);

	cout << ("Array size 100\n");
	SetColor(2,0);
	cout << ("Array ready\n");
	SetColor(15,0);
	system("pause");
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
    
	if (menuNumber >= 0)
	{
		//
		switch (menuNumber)
		{
		case 1:
			//bubble sort 
			system("cls");
			cout << ("sort started \n");
			BubbleSort(arr, ArrSize);
			//добавить проверку на правильность сортировки 
			cout << ("array was sorted \n");
			ArrPrint(arr,ArrSize);
			system("pause");
			//cout
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
			break;
		case 22://test mode 
			
			system("cls");
			cout << ("-=test mode=- \n");
			cout << ("Array contents: \n");
			ArrPrint(arr,ArrSize);
			//delete[] ptrarray; // высвобождение памяти(для более поздней версии)
			cout<<"Rand Max const= "<< RAND_MAX << endl;

			system("pause");
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
22 in menu start test mode
>swap function description: 
This use only in BubbleSort function.
assigns the value "xp" to "yp" and "yp" to "xp".
>BubbleSort function description:
Regular bubble sort. Sorting static array from smaller to larger.
BubbleSort (array for sorting, size of array);
>ArrPrint function description:
Print static array.
ArrPrint (array for sort, size of array);
>SetColor function description:
This function changes colors of text and background in console.
SetColor (text color, background color);
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
