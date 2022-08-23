#include <iostream>
using namespace std;

int main() 
{

	int *array { new int[5]{ 10, 7, 15, 3, 11 } };          //data type *pointer_name {new data_type[size]{intilaize_array}};

	cout << "Array elements: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}
