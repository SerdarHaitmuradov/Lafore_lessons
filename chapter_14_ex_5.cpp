#include <iostream>

template <class T>
T amax(const T* ptr, int SIZE)
{
	T max_value=ptr[0];
	for (size_t index = 1; index < SIZE; ++index)
	{
		if (ptr[index] > max_value)
		{
			max_value = ptr[index];
		}
	}
	return max_value;
}

int main()
{
	const int SIZE = 10;
	double array1[SIZE] = { -2.5,-6.2,-7.1,-8.3,-50.7,-7.2,-4.1,-6.4,-5.5,-44.5 };
	int array2[SIZE] = { 2,6,7,8,50,7,4,6,5,44 };
	float array3[SIZE] = { 2.0333,6.021,7.054,8.015,50.012,7.0125,4.02515,6.0156,5.151,44.151 };
	std::cout << "Max_value = " << amax(array1, SIZE) << std::endl;
	std::cout << "Max_value = " << amax(array2, SIZE) << std::endl;
	std::cout << "Max_value = " << amax(array3, SIZE) << std::endl;
}



