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
void SelectionSort(int arr[], int n)
{
	int i, j, min_idx;
	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		// Swap the found minimum element with the first element  
		swap(&arr[min_idx], &arr[i]);
	}
}
void InsertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
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
	cout << ("4: Merge sort (will be finished at 0.2v)\n");
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
			break;
	    case 2:
			//selektion sort
			system("cls");
			cout << ("sort started \n");
			SelectionSort(arr, ArrSize);
			//добавить проверку на правильность сортировки 
			cout << ("array was sorted \n");
			ArrPrint(arr, ArrSize);
			system("pause");
			break;
		case 3:
			//insertion sort
			system("cls");
			cout << ("sort started \n");
			InsertionSort(arr, ArrSize);
			//добавить проверку на правильность сортировки 
			cout << ("array was sorted \n");
			ArrPrint(arr, ArrSize);
			system("pause");

			break;
		case 4:
			//merge sort   
			break;
		case 0: 

			return 0;
			break;
		case 616://test mode 
			
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

/*
616 in menu start test mode
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
